// Fill out your copyright notice in the Description page of Project Settings.


#include "TalosLink.h"
#include "TalosNode.h"
#include "Kismet/KismetSystemLibrary.h"

void UTalosLink::Run()
{
	if (!to || !from)
		return;
	if (isValidLink)
	{
		if (!isLinkedToSource)
		{
			if (to->IsSource())
			{
				isLinkedToSource = true;
				from->SetSource(true);
			}
			else if (!from->IsSource())
			{
				isLinkedToSource = false;
				to->SetSource(false);
			}
			else
			{
				to->SetSource(true);
				isLinkedToSource = true;
			}
		}
		else
		{
			if (!from->IsSource())
			{
				to->SetSource(false);
				isLinkedToSource = false;
			}
			else
			{
				to->SetSource(true);
				isLinkedToSource = true;
			}
		}
	}
	else
	{
		if (isLinkedToSource)
		{
			from->SetSource(false);
			isLinkedToSource = false;
		}
		else
			to->SetSource(false);
	}
}

void UTalosLink::Connect(TObjectPtr<ATalosNode> _from, TObjectPtr<ATalosNode> _to)
{
	from = _from;
	to = _to;
}

void UTalosLink::Debug()
{
	if (!from || !to)
		return;
	DrawDebugLine(GetWorld(), from->GetActorLocation(), to->GetActorLocation(), isValidLink ? FColor::Red : FColor::White, false, -1, 0, 5);
}

bool UTalosLink::IsValidLink(TArray<TEnumAsByte<EObjectTypeQuery>> _validLayer)
{
	FHitResult _result;
	const bool _hit = UKismetSystemLibrary::LineTraceSingleForObjects(GetWorld(), from->GetActorLocation(), to->GetActorLocation(),
		_validLayer, true, TArray<AActor*>(), EDrawDebugTrace::None, _result, true);
	return isValidLink = (_hit && Cast<ATalosNode>(_result.GetActor()));
}
