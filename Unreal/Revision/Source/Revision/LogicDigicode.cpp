// Fill out your copyright notice in the Description page of Project Settings.

#include "LogicDigicode.h"
#include "MyPlayer.h"
#include "RevisionGameModeBase.h"

ALogicDigicode::ALogicDigicode()
{
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("Root");
}

void ALogicDigicode::BeginPlay()
{
	Super::BeginPlay();
	if (!target)
		return;
	Cast<AMyPlayer>(GetWorld()->GetFirstPlayerController()->GetPawn())->SetTargetToCode(target);
}

void ALogicDigicode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!lamp || codes.Num() != pads.Num() || codes.Num() == 0)
		return;
	if (CheckDigicode())
	{
		lamp->SetIsActive(true);
		//GetWorld()->GetAuthGameMode<ARevisionGameModeBase>()->GetGameManager()->GetWidget()->SetNextEnabled(true);
		//GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(true);
	}
	else
	{
		lamp->SetIsActive(false);
		//GetWorld()->GetAuthGameMode<ARevisionGameModeBase>()->GetGameManager()->GetWidget()->SetNextEnabled(false);
		//GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(false);
	}
}

bool ALogicDigicode::CheckDigicode()
{
	for (size_t i = 0; i < codes.Num(); i++)
		if (codes[i]->GetIsActive() && !pads[i]->GetIsPressed() || !codes[i]->GetIsActive() && pads[i]->GetIsPressed())
			return false;
	return true;
}

