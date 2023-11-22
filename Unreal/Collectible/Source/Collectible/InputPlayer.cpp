// Fill out your copyright notice in the Description page of Project Settings.

#include "InputPlayer.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Kismet/KismetSystemLibrary.h"

AInputPlayer::AInputPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AInputPlayer::BeginPlay()
{
	Super::BeginPlay();
	InitInputSystem();
}

void AInputPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CheckCollectible();
	KeepCollectible();
}

void AInputPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UEnhancedInputComponent* _input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	_input->BindAction(XAxisInput, ETriggerEvent::Triggered, this, &AInputPlayer::MoveXAxis);
	_input->BindAction(YAxisInput, ETriggerEvent::Triggered, this, &AInputPlayer::MoveYAxis);
	_input->BindAction(neutralAxisInput, ETriggerEvent::Triggered, this, &AInputPlayer::MoveNeutral);
	_input->BindAction(jumpInput, ETriggerEvent::Triggered, this, &AInputPlayer::ToJump);
	_input->BindAction(crouchInput, ETriggerEvent::Triggered, this, &AInputPlayer::ToCrouch);
	_input->BindAction(mouseAxisInput, ETriggerEvent::Triggered, this, &AInputPlayer::MoveCamera);
	_input->BindAction(interactInput, ETriggerEvent::Triggered, this, &AInputPlayer::ToInteract);
}

void AInputPlayer::CheckCollectible()
{
	if (!canCollect)
		return;
	FHitResult _res;
	bool _isCollectible = UKismetSystemLibrary::SphereTraceSingleForObjects(this, GetActorLocation(),
		GetActorLocation() + GetActorForwardVector() * range, range, layerObject,
		true, TArray<AActor*>(), EDrawDebugTrace::None, _res, false);

	if (_isCollectible)
	{
		FVector _bounds, _origin;
		_res.GetActor()->GetActorBounds(true, _origin, _bounds);
		DrawDebugBox(GetWorld(), _origin, _bounds * 1.1f, FColor::Blue);
		if (toCollect)
		{
			currentCollectible = Cast<ACollectibleObject>(_res.GetActor());
			canCollect = false;
		}
	}
}

void AInputPlayer::KeepCollectible()
{
	if (!currentCollectible)
		return;
	FVector _loc = GetActorLocation() + GetActorForwardVector() * 200;
	currentCollectible->SetActorLocation(_loc);
}

void AInputPlayer::InitInputSystem()
{
	APlayerController* _player = GetWorld()->GetFirstPlayerController();
	UEnhancedInputLocalPlayerSubsystem* _inputSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(_player->GetLocalPlayer());
	_inputSystem->ClearAllMappings();
	_inputSystem->AddMappingContext(inputMapping.LoadSynchronous(), 0);
}

void AInputPlayer::MoveXAxis(const FInputActionValue& _value)
{
	const float _axis = _value.Get<float>();
	AddMovementInput(GetActorForwardVector(), _axis);
	onXAxisMove.Broadcast(_axis);
}

void AInputPlayer::MoveYAxis(const FInputActionValue& _value)
{
	const float _axis = _value.Get<float>();
	AddMovementInput(GetActorRightVector(), _axis);
	onYAxisMove.Broadcast(_axis);
}

void AInputPlayer::MoveNeutral(const FInputActionValue& _value)
{
	const bool _axis = _value.Get<bool>();
	if (_axis)
	{
		UKismetSystemLibrary::PrintString(this, FString("Neutral"));
		onNeutralMove.Broadcast();
	}
}

void AInputPlayer::ToJump(const FInputActionValue& _value)
{
	const bool _isJump = _value.Get<bool>();
	Jump();
	onJump.Broadcast(_isJump);
}

void AInputPlayer::ToCrouch(const FInputActionValue& _value)
{
	const bool _isCrouch = _value.Get<bool>();
	Crouch();
	onCrouch.Broadcast(_isCrouch);
	//UKismetSystemLibrary::PrintString(this, FString(_isCrouch ? "true" : "false"));
}

void AInputPlayer::MoveCamera(const FInputActionValue& _value)
{
	const FVector _axis = _value.Get<FVector>();
	AddControllerYawInput(_axis.X);
}

void AInputPlayer::ToInteract(const FInputActionValue& _value)
{
	const bool _isInteract = _value.Get<bool>();
	toCollect = _isInteract;
	if (!canCollect && _isInteract)
	{
		currentCollectible = nullptr;
		canCollect = true;
		toCollect = false;
	}
}
