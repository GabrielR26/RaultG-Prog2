// Fill out your copyright notice in the Description page of Project Settings.


#include "CorrCharacter.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Kismet/KismetSystemLibrary.h"

ACorrCharacter::ACorrCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	interact = CreateDefaultSubobject<UInteractComponent>("Interaction");
	springArm = CreateDefaultSubobject<USpringArmComponent>("Arm");
	camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	AddOwnedComponent(interact);
	springArm->SetupAttachment(RootComponent);
	camera->SetupAttachment(springArm);
}

void ACorrCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACorrCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACorrCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (!inputConfig)
		return;
	inputConfig->EnableInputContext(GetWorld()->GetFirstPlayerController()->GetLocalPlayer());
	UEnhancedInputComponent* _input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	_input->BindAction(inputConfig->ForwardInput(), ETriggerEvent::Triggered, this, &ACorrCharacter::MoveForward);
	_input->BindAction(inputConfig->ForwardInput(), ETriggerEvent::Completed, this, &ACorrCharacter::ReleaseForward);
	_input->BindAction(inputConfig->RotateInput(), ETriggerEvent::Triggered, this, &ACorrCharacter::Rotate);
	_input->BindAction(inputConfig->RotateCharacterInput(), ETriggerEvent::Triggered, this, &ACorrCharacter::RotateCharacter);
	_input->BindAction(inputConfig->JumpInput(), ETriggerEvent::Triggered, this, &ACorrCharacter::ToJump);
	_input->BindAction(inputConfig->CrouchInput(), ETriggerEvent::Triggered, this, &ACorrCharacter::ToCrouch);
	_input->BindAction(inputConfig->InteractInput(), ETriggerEvent::Triggered, interact.Get(), &UInteractComponent::GrabObject);
	_input->BindAction(inputConfig->InteractInput(), ETriggerEvent::Completed, interact.Get(), &UInteractComponent::DropObject);
}

void ACorrCharacter::MoveForward(const FInputActionValue& _value)
{
	float _from, _to;
	curveX->GetTimeRange(_from, _to);
	timeX = FMath::Lerp(timeX, _to, GetWorld()->DeltaTimeSeconds);
	axis = _value.Get<float>() * curveX->GetFloatValue(timeX);
	AddMovementInput(GetActorForwardVector(), axis);
}

void ACorrCharacter::ReleaseForward(const FInputActionValue& _value)
{
	timeX = axis = 0;
}

void ACorrCharacter::Rotate(const FInputActionValue& _value)
{
	const FVector _axis = _value.Get<FVector>();
	springArm->AddLocalRotation(FRotator(0, _axis.X * GetWorld()->DeltaTimeSeconds * rotateSpeed, 0));
	//AddControllerYawInput(_axis.X);
}

void ACorrCharacter::RotateCharacter(const FInputActionValue& _value)
{
	const float _axis = _value.Get<float>();
	AddControllerYawInput(_axis * GetWorld()->DeltaTimeSeconds * rotateSpeed);
}

void ACorrCharacter::ToJump(const FInputActionValue& _value)
{
	const bool _isJump = _value.Get<bool>();
	Jump();
}

void ACorrCharacter::ToCrouch(const FInputActionValue& _value)
{
	const bool _isCrouch = _value.Get<bool>();
	Crouch();
}
