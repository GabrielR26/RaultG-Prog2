// Fill out your copyright notice in the Description page of Project Settings.


#include "GridNavDataAsset.h"

void UGridNavDataAsset::ResetCost()
{
	for (size_t i = 0; i < nodes.Num(); i++)
		nodes[i]->ResetCost();
}

UNodeNav* UGridNavDataAsset::GetClosestNodeIndex(FVector _location)
{
    UNodeNav* _current = nullptr;
    float _close = INFINITY;
    for (int i = 0; i < nodes.Num(); i++)
    {
        float _dist = FVector::Distance(_location, nodes[i]->GetLocation());
        if (_dist < _close)
        {
            _close = _dist;
            _current = nodes[i];
        }
    }
    return _current;
}
