// Fill out your copyright notice in the Description page of Project Settings.


#include "Network/OnlineManagerSubsystem.h"
#include "Utils/DevUtils.h"
#include "OnlineSessionSettings.h"
#include <Online/OnlineSessionNames.h>

#define IS_LAN() IOnlineSubsystem::Get()->GetSubsystemName() == "NULL"

UOnlineManagerSubsystem::UOnlineManagerSubsystem()
{
	sessionName = "O3D-Session";
	serverName = "O3DProg";
}

void UOnlineManagerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	InitOnline();
}

void UOnlineManagerSubsystem::Deinitialize()
{
	Super::Deinitialize();
	LOG_C("Exit online", Red);
}

void UOnlineManagerSubsystem::InitOnline()
{
	LOG_C_T("Enter online", Green, 3);
	online = IOnlineSubsystem::Get();
	if (online)
	{
		LOG_C_T("Online : " + online->GetSubsystemName().ToString(), Blue, 3);
		session = online->GetSessionInterface();
		if (session.IsValid())
		{
			session->OnCreateSessionCompleteDelegates.AddUObject(this, &UOnlineManagerSubsystem::OnCreateSessionComplete);
			session->OnFindSessionsCompleteDelegates.AddUObject(this, &UOnlineManagerSubsystem::OnFindSessionComplete);
		}
	}
}

void UOnlineManagerSubsystem::OnCreateSessionComplete(FName _sessionName, bool _success)
{
	if (_success)
	{
		LOG_C("Session created " + _sessionName.ToString(), Green);
		const FString _path = "/Game/Level/GameLevel?listen";
		GetWorld()->ServerTravel(_path);
	}
	else
	{
		LOG_C("Session failed " + _sessionName.ToString(), Red);
	}
}

void UOnlineManagerSubsystem::OnFindSessionComplete(bool _success)
{
	if (_success)
	{
		TArray<FOnlineSessionSearchResult> _res =  sessionSearch->SearchResults;
		if (_res.Num() > 0)
			LOG_C_T("Session found -> " + FString::FromInt(_res.Num()), Green, 3);
		else
			LOG_C_T("0 session found", Red, 3);
	}
}

void UOnlineManagerSubsystem::CreateServer()
{
	LOG_C("Server create " + serverName.ToString(), Green);
	if (serverName == "")
	{
		LOG_C("Server name empty !", Red);
		return;
	}
	if (session->GetNamedSession(sessionName))
	{
		session->DestroySession(sessionName);
		return;
	}
	FOnlineSessionSettings _sessionSettings;
	_sessionSettings.bAllowJoinInProgress = true;
	_sessionSettings.bIsDedicated = false;
	_sessionSettings.NumPublicConnections = 20;
	_sessionSettings.bUsesPresence = true;
	_sessionSettings.bAllowJoinViaPresence = true;
	_sessionSettings.bUseLobbiesIfAvailable = true;
	_sessionSettings.bIsLANMatch = IS_LAN();
	_sessionSettings.Set(FName("SERVER_NAME"), serverName.ToString(), EOnlineDataAdvertisementType::ViaOnlineServiceAndPing); //#sensible
	session->CreateSession(0, sessionName, _sessionSettings); //#sensible
}

void UOnlineManagerSubsystem::FindServer()
{
	if (serverName == "")
		return;
	LOG_C("Find server " + serverName.ToString(), Yellow);
	sessionSearch = MakeShareable(new FOnlineSessionSearch());
	sessionSearch->bIsLanQuery = IS_LAN();
	sessionSearch->MaxSearchResults = 999;
	sessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);
	session->FindSessions(0, sessionSearch.ToSharedRef());
}
