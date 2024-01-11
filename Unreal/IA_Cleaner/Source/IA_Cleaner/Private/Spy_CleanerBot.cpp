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
	FString _value = "Attempt to find trash : " + FString::FormatAsNumber(attemptToFindTrash) + "\nTrash find : " + FString::FormatAsNumber(trashFind);
	//UKismetSystemLibrary::PrintString(this, _value, true, false, FColor::Magenta, _deltaTime);
}

void USpy_CleanerBot::AddAttemptToFindTrash()
{
	attemptToFindTrash++;
}

void USpy_CleanerBot::AddTrashFind()
{
	trashFind++;
}
