// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/FSMComponent.h"

UFSMComponent::UFSMComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UFSMComponent::BeginPlay()
{
	Super::BeginPlay();
	InitFSM();
}

void UFSMComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UpdateFSM();
}

void UFSMComponent::InitFSM()
{
	if (!FSMRef)
		return;
	currentFSM = NewObject<UFSM>(this, FSMRef);
	currentFSM->StartFSM(this);
}

void UFSMComponent::UpdateFSM()
{
	if (currentFSM)
		currentFSM->UpdateFSM();
}
