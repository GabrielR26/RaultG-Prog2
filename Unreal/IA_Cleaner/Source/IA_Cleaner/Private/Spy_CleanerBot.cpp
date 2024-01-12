// Fill out your copyright notice in the Description page of Project Settings.


#include "Spy_CleanerBot.h"
#include "CleanerBot.h"
#include "Kismet/KismetSystemLibrary.h"

void USpy_CleanerBot::InitSpy(ACleanerBot* _bot)
{
	cleanerBot = _bot;
	if (cleanerBot)
	{
		cleanerBot->MoveComponent()->OnReachedDestination().AddDynamic(this, &USpy_CleanerBot::AddAttemptToFindTrash);
		cleanerBot->ResearchComponent()->OnFindTrash().AddDynamic(this, &USpy_CleanerBot::AddTrashFind);
	}
}

void USpy_CleanerBot::Check(float _deltaTime)
{
	float _efficiency = trashFind == 0 ? 100 : ((float)trashFind / (float)attemptToFindTrash) * 100.f;

	if (_efficiency <= minEfficiency)
	{
		UKismetSystemLibrary::PrintString(this, "Low efficiency", true, false, FColor::Red, _deltaTime);
		cleanerBot->ToDestroy();
	}

	FString _value = "Attempt to find trash : " + FString::FromInt(attemptToFindTrash)
		+ "\nTrash find : " + FString::FromInt(trashFind)
		+ "\nEfficiency : " + FString::FromInt(_efficiency) + "% / " + FString::FromInt(minEfficiency) + "%";
	UKismetSystemLibrary::PrintString(this, _value, true, false, FColor::Magenta, _deltaTime);
}

void USpy_CleanerBot::AddAttemptToFindTrash()
{
	attemptToFindTrash += 1;
}

void USpy_CleanerBot::AddTrashFind()
{
	trashFind += 1;
}
