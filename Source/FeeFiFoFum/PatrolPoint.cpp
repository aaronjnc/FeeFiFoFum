// Fill out your copyright notice in the Description page of Project Settings.


#include "PatrolPoint.h"

// Sets default values
APatrolPoint::APatrolPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APatrolPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APatrolPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APatrolPoint::VisitPoint()
{
	LastVisit = 0;
}

float APatrolPoint::CalculateWeight(const float MaxDistance)
{
	LastVisit++;
	const float DistancePercent = 1 - (Distance / MaxDistance);
	return DistancePercent * LastVisit;
}

float APatrolPoint::GetDistance(const AActor* Giant)
{
	Distance = GetDistanceTo(Giant);
	return Distance;
}