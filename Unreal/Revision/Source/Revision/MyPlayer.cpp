// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Code.h"

AMyPlayer::AMyPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	arm = CreateDefaultSubobject<USpringArmComponent>("Arm");
	camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	arm->SetupAttachment(RootComponent);
	camera->SetupAttachment(arm);
}

void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
	InitInputSystem();
}

void AMyPlayer::InitInputSystem()
{
	APlayerController* _player = GetWorld()->GetFirstPlayerController();
	UEnhancedInputLocalPlayerSubsystem* _inputSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(_player->GetLocalPlayer());
	_inputSystem->ClearAllMappings();
	_inputSystem->AddMappingContext(inputMapping.LoadSynchronous(), 0);
}


void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UEnhancedInputComponent* _input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	_input->BindAction(ClickInput, ETriggerEvent::Triggered, this, &AMyPlayer::Click);
	_input->BindAction(CrouchInput, ETriggerEvent::Triggered, this, &AMyPlayer::Crouch);
	_input->BindAction(JumpInput, ETriggerEvent::Triggered, this, &AMyPlayer::ToJump);
	_input->BindAction(TowardInput, ETriggerEvent::Triggered, this, &AMyPlayer::Toward);
	_input->BindAction(TowardInput, ETriggerEvent::Completed, this, &AMyPlayer::Toward);
	_input->BindAction(SideInput, ETriggerEvent::Triggered, this, &AMyPlayer::Side);
	_input->BindAction(SideInput, ETriggerEvent::Completed, this, &AMyPlayer::Side);
	_input->BindAction(RotationInput, ETriggerEvent::Triggered, this, &AMyPlayer::Rotation);
	_input->BindAction(RunInput, ETriggerEvent::Triggered, this, &AMyPlayer::Run);
	_input->BindAction(RunInput, ETriggerEvent::Completed, this, &AMyPlayer::Run);
	_input->BindAction(ZoomInput, ETriggerEvent::Triggered, this, &AMyPlayer::Zoom);
	_input->BindAction(ChangeViewInput, ETriggerEvent::Triggered, this, &AMyPlayer::ChangeView);
}

void AMyPlayer::Click(const FInputActionValue& _value)
{
	if (!isChangeView)
		return;
	FVector _worldLocation, _worldDirection;
	FHitResult _hitInfo;
	//Projection mouse to world
	GetWorld()->GetFirstPlayerController()->DeprojectMousePositionToWorld(_worldLocation, _worldDirection);
	//Raycast code
	bool _hit = UKismetSystemLibrary::LineTraceSingleForObjects(this, _worldLocation, _worldLocation + _worldDirection * 1000,
		channel, true, TArray<AActor*>(), EDrawDebugTrace::None, _hitInfo, true);
	if (_hit)
	{
		ACode* _code = Cast<ACode>(_hitInfo.GetActor());
		if (_code)
			_code->SwitchIsActive();
	}
}

void AMyPlayer::Crouch(const FInputActionValue& _value)
{
	if (isChangeView)
		return;
	isCrouching = !isCrouching;
	onCrouch.Broadcast(isCrouching);
}

void AMyPlayer::ToJump(const FInputActionValue& _value)
{
	if (isChangeView)
		return;
	isCrouching = false;
	onCrouch.Broadcast(isCrouching);
	Jump();
	onJump.Broadcast(true);
}

void AMyPlayer::Toward(const FInputActionValue& _value)
{
	if (isCrouching || isChangeView)
		return;
	float _axis = _value.Get<float>();
	_axis = isRunning ? _axis : _axis * 0.5f;
	AddMovementInput(GetActorForwardVector(), _axis);

	onMoveToward.Broadcast(_axis);
}

void AMyPlayer::Side(const FInputActionValue& _value)
{
	if (isCrouching || isChangeView)
		return;
	float _axis = _value.Get<float>();
	_axis = isRunning ? _axis : _axis * 0.5f;
	AddMovementInput(GetActorRightVector(), _axis);

	onMoveSide.Broadcast(_axis);
}

void AMyPlayer::Rotation(const FInputActionValue& _value)
{
	if (isChangeView)
		return;
	const FVector2D _vector = _value.Get<FVector2D>();
	//Rotate pitch arm
	float _p = arm->GetRelativeRotation().Pitch;
	_p = FMath::Clamp(_p + _vector.Y, -45, 15);
	FRotator _pitch = FRotator(_p, arm->GetRelativeRotation().Yaw, arm->GetRelativeRotation().Roll);
	arm->SetRelativeRotation(_pitch);
	//Rotate yaw perso
	FRotator _yaw = FRotator(0, _vector.X, 0);
	AddActorWorldRotation(_yaw);
}

void AMyPlayer::Run(const FInputActionValue& _value)
{
	if (isChangeView)
		return;
	const bool _hold = _value.Get<bool>();
	isRunning = _hold;
}

void AMyPlayer::Zoom(const FInputActionValue& _value)
{
	if (isChangeView)
		return;
	const float _axis = _value.Get<float>();
	arm->TargetArmLength = FMath::Clamp(arm->TargetArmLength + _axis * 50, 100, 1000);
}

void AMyPlayer::ChangeView(const FInputActionValue& _value)
{
	isChangeView = !isChangeView;
	if (isChangeView)
	{
		GetWorld()->GetFirstPlayerController()->SetViewTarget(targetToCode);
		GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(true);
	}
	else
	{
		GetWorld()->GetFirstPlayerController()->SetViewTarget(this);
		GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(false);
	}
}
