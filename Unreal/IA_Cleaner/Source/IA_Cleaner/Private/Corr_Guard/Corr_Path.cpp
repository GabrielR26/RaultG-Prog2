// Fill out your copyright notice in the Description page of Project Settings.


#include "Corr_Guard/Corr_Path.h"

ACorr_Path::ACorr_Path()
{
	PrimaryActorTick.bCanEverTick = true;
	spline = CreateDefaultSubobject<USplineComponent>("Spline");
	RootComponent = spline;
}

void ACorr_Path::BeginPlay()
{
	Super::BeginPlay();
	InitSplineLine();
}

void ACorr_Path::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SetSecondLine();
	GetIntersectionPoint(lineA, lineB, intersectPoint);
	lineA.Drawline(GetWorld(), FColor::Blue);
	lineB.Drawline(GetWorld(), FColor::Red);
	DrawDebugSphere(GetWorld(), intersectPoint, 50, 10, FColor::Magenta);
	DrawDebugSphere(GetWorld(), GetSplinePoint(), 50, 10, FColor::Green);
}

void ACorr_Path::InitSplineLine()
{
	lineA.startPoint = GetActorLocation() * FVector(1, 1, 0);
	lineA.endPoint = spline->GetLocationAtTime(1, ESplineCoordinateSpace::World);
}

void ACorr_Path::SetSecondLine()
{
	if (!target)
		return;
	lineB.startPoint = target->GetActorLocation();
	lineB.endPoint = lineB.startPoint + target->GetActorForwardVector() * 500;
}

void ACorr_Path::GetIntersectionPoint(FLine _a, FLine _b, FVector& _intersectPoint)
{
	const FVector _lineAB = (_b.startPoint - _a.startPoint) * FVector(1, 1, 0);
	const FVector _crossAB = FVector::CrossProduct(_a.GetDirection(), _b.GetDirection());
	const FVector _crossLineAB = FVector::CrossProduct(_lineAB, _b.GetDirection());
	const float _dot = FVector::DotProduct(_lineAB, _crossAB);
	if (FMath::Abs(_dot) < DBL_EPSILON && _crossAB.SizeSquared() > DBL_EPSILON)
	{
		float _angle = FVector::DotProduct(_crossLineAB, _crossAB) / _crossAB.SizeSquared();
		_intersectPoint = _a.startPoint + (_a.GetDirection() * _angle);
	}
	else
		_intersectPoint = FVector::ZeroVector;
}

FVector ACorr_Path::GetSplinePoint() const
{
	const float _from = FVector::Dist(lineA.startPoint, intersectPoint);
	const float _to = FVector::Dist(lineA.startPoint, lineA.endPoint);
	const float _alpha = _from / _to;
	return spline->GetLocationAtTime(_alpha, ESplineCoordinateSpace::World);
}
