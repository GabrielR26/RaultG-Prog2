// Fill out your copyright notice in the Description page of Project Settings.


#include "Test_StateTreeComponent.h"

UTest_StateTreeComponent::UTest_StateTreeComponent()
	:Super()
{
	if (!StateTreeRef.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("The IA.StateTree property didn't set !!"));
		return;
	}
}
