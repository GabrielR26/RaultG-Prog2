// Fill out your copyright notice in the Description page of Project Settings.


#include "Diablo/DiabloCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

ADiabloCharacter::ADiabloCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	bUseControllerRotationYaw = false;

	camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	arm = CreateDefaultSubobject<USpringArmComponent>("Arm");
	camera->SetupAttachment(arm);
	arm->SetupAttachment(RootComponent);
}

void ADiabloCharacter::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(true);
}

void ADiabloCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveTo(DeltaTime);
	RotateTo(DeltaTime);
}

void ADiabloCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InitInputSystem();
	UEnhancedInputComponent* _input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	_input->BindAction(mouseClickInput, ETriggerEvent::Triggered, this, &ADiabloCharacter::GetTargetLocation);
}

void ADiabloCharacter::InitInputSystem()
{
	APlayerController* _player = GetWorld()->GetFirstPlayerController();
	UEnhancedInputLocalPlayerSubsystem* _inputSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(_player->GetLocalPlayer());
	_inputSystem->ClearAllMappings();
	_inputSystem->AddMappingContext(inputMapping.LoadSynchronous(), 0);
}

void ADiabloCharacter::MoveTo(float _delta)
{
	DrawDebugCircle(GetWorld(), destination, minRange, 50, FColor::Magenta, false, -1, 0, 5, FVector(0, 1, 0), FVector(1, 0, 0));
	DrawDebugSphere(GetWorld(), destination, 20, 10, FColor::Green, false, -1, 0, 5);
	if (IsAtLocation())
		return;
	//const FVector _move = FMath::VInterpConstantTo(GetActorLocation(), destination, _delta, GetCharacterMovement()->MaxWalkSpeed);
	//SetActorLocation(_move);
	FVector _direction = destination - GetActorLocation();
	AddMovementInput(_direction.GetSafeNormal(), 1);
}

void ADiabloCharacter::RotateTo(float _delta)
{
	//FRotator _rot = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), destination);
	//_rot.Pitch = 0;
	//_rot.Roll = 0;
	//const FRotator _lerpRot = FMath::RInterpConstantTo(GetActorRotation(), _rot, _delta, 500);
	//SetActorRotation(_lerpRot);	
	FVector _direction = destination - GetActorLocation();
	AddControllerYawInput(FVector::DotProduct(_direction.GetSafeNormal(), GetActorRightVector()));
}

void ADiabloCharacter::GetTargetLocation()
{
	FVector _worldPosition, _worldDirection;
	GetWorld()->GetFirstPlayerController()->DeprojectMousePositionToWorld(_worldPosition, _worldDirection);
	const bool _hit = UKismetSystemLibrary::LineTraceSingleForObjects(this, _worldPosition, 
		_worldPosition + _worldDirection * 10000, interactLayer, true, actorToIgnore, EDrawDebugTrace::None, result, true);
	if (_hit)
		destination = result.ImpactPoint;	
}
