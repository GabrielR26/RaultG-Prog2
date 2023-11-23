// Fill out your copyright notice in the Description page of Project Settings.

#include "InputConfig.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Kismet/KismetSystemLibrary.h"

void UInputConfig::EnableInputContext(ULocalPlayer* _player)
{
	if (!context)
		return;
	UKismetSystemLibrary::PrintString(this, FString("CONTEXT"));
	UEnhancedInputLocalPlayerSubsystem* _inputSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(_player);
	_inputSystem->ClearAllMappings();
	_inputSystem->AddMappingContext(context.LoadSynchronous(), 0);
}
