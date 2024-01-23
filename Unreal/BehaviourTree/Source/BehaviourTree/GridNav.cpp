// Fill out your copyright notice in the Description page of Project Settings.


#include "GridNav.h"
#include "NodeNav.h"
#include "Kismet/KismetSystemLibrary.h"

AGridNav::AGridNav()
{
	PrimaryActorTick.bCanEverTick = true;

#if WITH_EDITOR
	PrimaryActorTick.bStartWithTickEnabled = true;
#endif
}

void AGridNav::BeginPlay()
{
	Super::BeginPlay();

}

void AGridNav::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DisplayGrid();
}

bool AGridNav::ShouldTickIfViewportsOnly() const
{
	return debug;
}

void AGridNav::GenerateGrid()
{
	if (!save)
		return;
	save->Nodes().Empty();
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			FVector _location = GetActorLocation() + GetActorForwardVector() * (i * gap) + GetActorRightVector() * (j * gap);
			UNodeNav* _node = NewObject<UNodeNav>(this);
			_node->SetGrid(save);
			_node->SetLocation(_location);
			save->Nodes().Add(_node);
			UE_LOG(LogTemp, Warning, TEXT("node"));
		}
	}
	UKismetSystemLibrary::PrintString(this, FString::FromInt(save->Nodes().Num()));
	SetSuccessors();
}

void AGridNav::SetSuccessors()
{
	for (int i = 0; i < size * size; i++)
	{
		bool _canRight = i % size != size - 1,
			_canTop = i >= size,
			_canDown = i < (size * size) - size,
			_canLeft = i % size != 0;

		 if (_canRight)
			 (save->Nodes())[i]->AddSuccessor(i + 1);
		 if (_canLeft)
			 (save->Nodes())[i]->AddSuccessor(i - 1);
		 if (_canTop)
		 {
			 (save->Nodes())[i]->AddSuccessor(i - size);
			 if (_canRight)
				 (save->Nodes())[i]->AddSuccessor(i + 1 - size);
			 if (_canLeft)
				 (save->Nodes())[i]->AddSuccessor(i - 1 - size);
		 }
		 if (_canDown)
		 {
			 (save->Nodes())[i]->AddSuccessor(i + size);
			 if (_canRight)
				 (save->Nodes())[i]->AddSuccessor(i + 1 + size);
			 if (_canLeft)
				 (save->Nodes())[i]->AddSuccessor(i - 1 + size);
		 }
	}
}

void AGridNav::DisplayGrid()
{
	if (!debug || !save)
		return;
	for (int i = 0; i < (save->Nodes()).Num(); i++)
		(save->Nodes())[i]->DisplayNode(nodeColor, lineColor);
}
