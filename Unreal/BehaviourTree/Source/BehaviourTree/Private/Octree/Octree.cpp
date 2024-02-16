// Fill out your copyright notice in the Description page of Project Settings.

#include "Octree/Octree.h"
#include "Octree/OctreeCell.h"
#include "NavigationSystem.h"

// Sets default values
AOctree::AOctree()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("Root");

}

// Called when the game starts or when spawned
void AOctree::BeginPlay()
{
	Super::BeginPlay();
	if (!root)return;
	root->SetCanRun(true);
}

// Called every frame
void AOctree::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AOctree::ShouldTickIfViewportsOnly() const
{
	return true;
}

void AOctree::InitRootCell()
{
	if (!root)return;
	UNavigationSystemV1* _nav = UNavigationSystemV1::GetCurrent(GetWorld());
	if (!_nav)return;
	FVector _navigableBounds = _nav->GetNavigableWorldBounds().GetExtent();
	FTimerHandle _timer;
	FTimerDelegate _delegate;
	_delegate.BindUObject(root, &AOctreeCell::SetCellDimensions, _navigableBounds.X, _navigableBounds.Y, _navigableBounds.Z);
	GetWorld()->GetTimerManager().SetTimer(_timer, _delegate, 2.f, false, .1f);
	root->AttachToActor(this, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	root->SetOctree(this);
}

void AOctree::GenerateOctree()
{
	if (root)return;
	root = GetWorld()->SpawnActor<AOctreeCell>(cellToSpawn, GetActorLocation(), FRotator::ZeroRotator);
	if (!root)
	{
		UE_LOG(LogTemp, Warning, TEXT("ERROR : Failed to create root cell"));
		return;
	}
	InitRootCell();

}

void AOctree::DestroyOctree()
{
	if (!root)return;

	root->CustomDestroy();
	Destroy();
}

