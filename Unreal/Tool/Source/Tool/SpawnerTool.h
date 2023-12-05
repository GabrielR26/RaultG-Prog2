// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BillboardComponent.h"
#include "SpawnModule.h"
#include "SpawnerTool.generated.h"

USTRUCT()
struct FArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<AActor*> stack; //lol

	FArray() {}
	FArray(TArray<AActor*> _stack)
	{
		stack = _stack;
	}
};

UCLASS()
class TOOL_API ASpawnerTool : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Spawn tool")
	TObjectPtr<UBillboardComponent> icon = nullptr;
	UPROPERTY(EditAnywhere, Category = "Spawn tool")
	TObjectPtr<USpawnModule> currentModule = nullptr;

	UPROPERTY(EditAnywhere, Category = "Spawn tool")
	bool useSingleItem = true;
	UPROPERTY(EditAnywhere, Category = "Spawn tool", meta = (EditCondition = "useSingleItem"))
	TSubclassOf<AActor> item = nullptr;
	UPROPERTY(EditAnywhere, Category = "Spawn tool", meta = (EditCondition = "!useSingleItem"))
	TArray<TSubclassOf<AActor>> items = {};
	UPROPERTY(EditAnywhere, Category = "Spawn tool")
	TMap<FString, FArray> historic = {};

public:	
	ASpawnerTool();

	TSubclassOf<AActor> PickItem() { return useSingleItem ? item : GetRandomItem(); }
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual bool ShouldTickIfViewportsOnly() const override;

	UFUNCTION(CallInEditor, Category = "Spawn tool") void Spawn();
	UFUNCTION(CallInEditor, Category = "Spawn tool") void Delete();
	void DrawAllModules();
	void AddNewItems(FString _id, TArray<AActor*> _items);
	void ClearItems(FString _id);
	TSubclassOf<AActor> GetRandomItem();
};
