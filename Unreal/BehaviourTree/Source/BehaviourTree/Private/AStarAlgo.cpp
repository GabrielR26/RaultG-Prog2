// Fill out your copyright notice in the Description page of Project Settings.


#include "AStarAlgo.h"
#include "../GridNavDataAsset.h"
#include "Kismet/KismetSystemLibrary.h"

void UAStarAlgo::ComputePath(UNodeNav* _start, UNodeNav* _end)
{
    _start->GetGrid()->ResetCost();
    correctPath.Empty();
    TArray<UNodeNav*> _openlist = {},
        _closedList = {};
    _start->SetG(0);
    _start->SetH(0);
    _openlist.Add(_start);

    while (_openlist.Num() > 0)
    {
        UNodeNav* _current = _openlist[0];
        _openlist.Remove(_current);
        _closedList.Add(_current);
        if (_current == _end)
        {
            correctPath = GetFinalPath(_start, _end);
            return;
        }
        for (int i = 0; i < _current->GetSuccessors().Num(); i++)
        {
            UNodeNav* _next = _current->GetGrid()->Nodes()[_current->GetSuccessors()[i]];
            if (_closedList.Contains(_next) || !_next->GetIsOpen())
                continue;
            float _hCost = FVector::Distance(_current->GetLocation(), _end->GetLocation());
            float _gCost = _current->G() + _hCost;
            //Obstacle
            FHitResult _res;
            FVector _start = _current->GetLocation(), 
                _end = _next->GetLocation();
            bool _hit = UKismetSystemLibrary::LineTraceSingleForObjects(GetWorld(), _start, _end, layerObstacle, true, 
                {}, EDrawDebugTrace::None, _res, true);
            if (_hit)
                _gCost = INFINITY;
            //
            if (_gCost < _next->G())
            {
                _next->SetG(_gCost);
                _next->SetH(_hCost);
                _next->SetF(_gCost + _hCost);
                _next->SetParent(_current);
                _openlist.Add(_next);
            }
        }
    }
}

TArray<UNodeNav*> UAStarAlgo::GetFinalPath(UNodeNav* _start, UNodeNav* _end)
{
    TArray<UNodeNav*> _path = {};
    TArray<UNodeNav*> _finalPath = {};
    UNodeNav* _current = _end;
    _path.Add(_current);
    while (_current != _start)
    {
        _path.Add(_current->GetParent());
        _current = _current->GetParent();
    }
    for (size_t i = 0;  i < _path.Num(); i++)
        _finalPath[i] = _path[(_path.Num() - 1) - i];
    return _finalPath;
}
