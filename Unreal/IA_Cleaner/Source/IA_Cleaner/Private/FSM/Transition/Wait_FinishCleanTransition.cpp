// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/Transition/Wait_FinishCleanTransition.h"
#include "FSM/State/CleanState.h"
#include "FSM/FSM.h"

void UWait_FinishCleanTransition::InitTransition(UFSM* _fsm)
{
	Super::InitTransition(_fsm);
	UCleanState* _state = Cast<UCleanState>(currentFSM->GetCurrentState());
	if (_state)
		_state->OnFinishClean().AddDynamic(this, &UWait_FinishCleanTransition::FinishCleaning);
}

bool UWait_FinishCleanTransition::IsValidTransition()
{
	return isFinishCleaning;
}

void UWait_FinishCleanTransition::FinishCleaning()
{
	isFinishCleaning = true;
}
