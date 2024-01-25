// Fill out your copyright notice in the Description page of Project Settings.


#include "NodeNav.h"
#include "GridNav.h"
#include "Kismet/KismetSystemLibrary.h"

void UNodeNav::AddSuccessor(int _node)
{
	successors.Add(_node);
}

void UNodeNav::DisplayNode(FColor _nodeColor, FColor _lineColor)
{
	DrawDebugSphere(GetWorld(), location, 10, 10, isOpen ? _nodeColor : FColor::Transparent);
	//for (size_t i = 0; i < successors.Num(); i++)
	//	DrawDebugLine(GetWorld(), location, (grid->Nodes())[successors[i]]->location, _lineColor);
}

void UNodeNav::CheckForObstacle(TArray<TEnumAsByte<EObjectTypeQuery>> _layerObstacle, float _radius)
{
	TArray<AActor*> _actors;
	isOpen = !UKismetSystemLibrary::SphereOverlapActors(GetWorld(), location, _radius, _layerObstacle, nullptr,
		{}, _actors);
}

void UNodeNav::ResetCost()
{
	h = INFINITY;
	g = INFINITY;
	parent = nullptr;
}
