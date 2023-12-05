// Fill out your copyright notice in the Description page of Project Settings.

#include "SpawnerTool.h"
#include "SpawnModule.h"
#include "Kismet/KismetArrayLibrary.h"

ASpawnerTool::ASpawnerTool()
{
	PrimaryActorTick.bCanEverTick = true;
#if WITH_EDITOR
	PrimaryActorTick.bStartWithTickEnabled = true;
#endif
	icon = CreateDefaultSubobject<UBillboardComponent>("Root");
	RootComponent = icon;
}

void ASpawnerTool::BeginPlay()
{
	Super::BeginPlay();

}

void ASpawnerTool::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DrawAllModules();
}

bool ASpawnerTool::ShouldTickIfViewportsOnly() const
{
	return true;
}

void ASpawnerTool::Spawn()
{
	if (!currentModule)
		return;
	AddNewItems(currentModule->GetModuleName(), currentModule->Spawn(this));
}

void ASpawnerTool::Delete()
{
	if (!currentModule)
		return;
	ClearItems(currentModule->GetModuleName());
}

void ASpawnerTool::DrawAllModules()
{
	if (!currentModule)
		return;
	currentModule->DrawDebug(GetWorld(), GetActorLocation());
}

void ASpawnerTool::AddNewItems(FString _id, TArray<AActor*> _items)
{
	if (historic.Contains(_id))
		historic[_id].stack.Append(_items);
	else
		historic.Add(_id, _items);
}

TSubclassOf<AActor> ASpawnerTool::GetRandomItem()
{
	const int _rand = FMath::RandRange(0, items.Num() - 1);
	return items[_rand];
}

void ASpawnerTool::ClearItems(FString _id)
{
	if (!historic.Contains(_id))
		return;
	for (int i = 0; i < historic[_id].stack.Num(); i++)
		historic[_id].stack[i]->Destroy();
	historic[_id].stack.Empty();
}

