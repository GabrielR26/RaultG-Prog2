// Fill out your copyright notice in the Description page of Project Settings.


#include "TalosNode.h"

ATalosNode::ATalosNode()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ATalosNode::BeginPlay()
{
	Super::BeginPlay();
	id = FMath::Rand();
}

void ATalosNode::AddLink(ATalosNode* _otherNode)
{
	FString _idLink = FString::FromInt(id) + FString::FromInt(_otherNode->GetId());
	if (connectedNodes.Contains(_idLink))
		return;
	UTalosLink* _link = NewObject<UTalosLink>(this);
	_link->Connect(this, _otherNode);
	connectedNodes.Add(_idLink, _link);
}

void ATalosNode::NodeBehaviour()
{
	for (TPair<FString, UTalosLink*> _link : connectedNodes)
	{
		if (!_link.Value)
			continue;
		_link.Value->Debug();
		_link.Value->IsValidLink(validNodeLayer);
		_link.Value->Run();
	}
}

void ATalosNode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	NodeBehaviour();
}
