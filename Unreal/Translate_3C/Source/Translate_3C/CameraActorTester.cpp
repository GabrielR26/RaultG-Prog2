// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraActorTester.h"
#include "Translate_3CGameModeBase.h"
#include "ManagerCamera.h"

ACameraActorTester::ACameraActorTester()
{
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("Root");
}

void ACameraActorTester::BeginPlay()
{
	Super::BeginPlay();
	ATranslate_3CGameModeBase* _gm = GetWorld()->GetAuthGameMode<ATranslate_3CGameModeBase>();
	_gm->GetCameraManager()->SpawnCameraOrbit("Target test", this);
}

void ACameraActorTester::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

