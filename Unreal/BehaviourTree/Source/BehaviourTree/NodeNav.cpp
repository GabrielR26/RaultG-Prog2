// Fill out your copyright notice in the Description page of Project Settings.


#include "NodeNav.h"
#include "GridNav.h"

void UNodeNav::AddSuccessor(int _node)
{
	successors.Add(_node);
}

void UNodeNav::DisplayNode(FColor _nodeColor, FColor _lineColor)
{
	DrawDebugSphere(GetWorld(), location, 10, 10, _nodeColor);
	for (size_t i = 0; i < successors.Num(); i++)
		DrawDebugLine(GetWorld(), location, (grid->Nodes())[successors[i]]->location, _lineColor);
		//if (isSelected)
}
