// Fill out your copyright notice in the Description page of Project Settings.


#include "Pad.h"
#include "MyPlayer.h"

// Sets default values
APad::APad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	triggerBox = CreateDefaultSubobject<UBoxComponent>("Trigger");
	RootComponent = mesh;
	triggerBox->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void APad::BeginPlay()
{
	Super::BeginPlay();
	dynamicMaterialColor = mesh->CreateDynamicMaterialInstance(0);
}

// Called every frame
void APad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APad::NotifyActorBeginOverlap(AActor* _other)
{
	AMyPlayer* _player = Cast<AMyPlayer>(_other);
	if (_player)
	{
		isPressed = !isPressed;
		FLinearColor _color = isPressed ? FLinearColor::Green : FLinearColor::Gray;
		dynamicMaterialColor->SetVectorParameterValue("Color", _color);
	}
}
