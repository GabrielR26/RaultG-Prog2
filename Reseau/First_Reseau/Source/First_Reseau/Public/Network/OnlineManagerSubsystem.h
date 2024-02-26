// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "OnlineManagerSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class FIRST_RESEAU_API UOnlineManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	FName sessionName = "O3D-Session";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	FName serverName = "O3DProg";

#pragma region NET ptr
	IOnlineSubsystem* online = nullptr;
	IOnlineSessionPtr session;
	TSharedPtr<FOnlineSessionSearch> sessionSearch;
#pragma endregion
	
private:
	UOnlineManagerSubsystem();
	void Initialize(FSubsystemCollectionBase& Collection) override;
	void Deinitialize() override;
	void InitOnline();

//Events
	void OnCreateSessionComplete(FName _sessionName, bool _success);
	void OnFindSessionComplete(bool _success);

public:
	UFUNCTION(BlueprintCallable) void CreateServer();
	UFUNCTION(BlueprintCallable) void FindServer();
};
