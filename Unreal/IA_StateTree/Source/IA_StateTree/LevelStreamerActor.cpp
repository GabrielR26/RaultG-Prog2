// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelStreamerActor.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/Character.h"
#include "Streaming/ServerStreamingLevelsVisibility.h"
#include "Test_GameState.h"

// Sets default values
ALevelStreamerActor::ALevelStreamerActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	OverlapVolume = CreateDefaultSubobject<UBoxComponent>("OverlapVolume");
	RootComponent = OverlapVolume;

	OverlapVolume->OnComponentBeginOverlap.AddUniqueDynamic(this, &ALevelStreamerActor::OverlapBegins);
	OverlapVolume->OnComponentEndOverlap.AddUniqueDynamic(this, &ALevelStreamerActor::OverlapEnds);
}

// Called when the game starts or when spawned
void ALevelStreamerActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ALevelStreamerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALevelStreamerActor::OverlapBegins(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACharacter* _chara = UGameplayStatics::GetPlayerCharacter(this, 0);
	if (OtherActor == _chara && LevelToLoad != "")
	{
		UKismetSystemLibrary::PrintString(this, "Enter", true, true, FLinearColor::Black, 3);
		ATest_GameState* _gs = GetWorld()->GetGameState<ATest_GameState>();

		if (HasAuthority())
		{
			_gs->AddLevelToLoad(LevelToLoad);
			ClientRPC_CheckLevelOnClient(LevelToLoad);
		}
		else
		{
			_gs->AddLevelToLoad(LevelToLoad);
		}
	}
}

void ALevelStreamerActor::OverlapEnds(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ACharacter* _chara = UGameplayStatics::GetPlayerCharacter(this, 0);
	if (OtherActor == _chara && LevelToLoad != "")
	{
		UKismetSystemLibrary::PrintString(this, "Exit", true, true, FLinearColor::Black, 3);

		ATest_GameState* _gs = GetWorld()->GetGameState<ATest_GameState>();
		if (HasAuthority())
		{
			_gs->RemoveLevelToLoad(LevelToLoad);
		}
		else
		{
			_gs->RemoveLevelToLoad(LevelToLoad);
		}
	}
}

void ALevelStreamerActor::ClientRPC_CheckLevelOnClient_Implementation(const FName& _levelToLoad)
{
	UKismetSystemLibrary::PrintString(this, "Check on client", true, true, FLinearColor::Green, 3);
	ATest_GameState* _gs = GetWorld()->GetGameState<ATest_GameState>();
	if (!_gs->HasLevelToLoad(_levelToLoad))
	{
		_gs->RemoveLevelToLoad(LevelToLoad);
	}
}
