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

float APatrolPoint::CalculateWeight(float MaxDistance)
{
	LastVisit++;
	float DistancePercent = distance / MaxDistance;
	return DistancePercent * LastVisit;
}

float APatrolPoint::GetDistance(AActor* giant)
{
	distance = GetDistanceTo(giant);
	return distance;
}

