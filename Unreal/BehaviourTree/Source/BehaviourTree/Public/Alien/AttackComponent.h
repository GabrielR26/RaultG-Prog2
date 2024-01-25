// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BEHAVIOURTREE_API UAttackComponent : public UActorComponent
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRangeUpdate, bool, _value);
	FOnRangeUpdate onRangeUpdate;

	UPROPERTY(EditAnywhere)
	float attackRange = 100;
	UPROPERTY(EditAnywhere)
	float currentTime = 0;
	UPROPERTY(EditAnywhere)
	float maxTime = 1.5f;
	UPROPERTY(EditAnywhere)
	float attackSpeed = 1;
	UPROPERTY(EditAnywhere)
	float attackBoxSize = 25;
	UPROPERTY(EditAnywhere)
	bool canAttack = true;
	UPROPERTY(EditAnywhere)
	bool isInRange = false;
	UPROPERTY(EditAnywhere)
	TObjectPtr<AActor> target = nullptr;
	UPROPERTY(EditAnywhere)
	TArray<TEnumAsByte<EObjectTypeQuery>> layerTarget = {};
	UPROPERTY(EditAnywhere)
	float boxOffset = 20;

public:	
	UAttackComponent();
	FORCEINLINE FOnRangeUpdate& OnRangeUpdate() { return onRangeUpdate; }

	UFUNCTION() void SetTarget(AActor* _target);
	UFUNCTION(BlueprintCallable) void Attack();
	float UpdateTime(float& _current, const float& _max);
	bool CheckIsInRange(const float& _range);

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
};
