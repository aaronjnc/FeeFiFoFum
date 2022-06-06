// Fill out your copyright notice in the Description page of Project Settings.


#include "GiantPatrol.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UGiantPatrol::UGiantPatrol()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGiantPatrol::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void UGiantPatrol::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

APatrolPoint* UGiantPatrol::DetermineNextPoint()
{
	if (CurrentPoint != nullptr)
		CurrentPoint->VisitPoint();
	float MaxDist = 0;
	for(APatrolPoint* p : PatrolPoints)
	{
		float distance = p->GetDistance(GetOwner());
		if (distance > MaxDist)
			MaxDist = distance;
	}
	APatrolPoint* GoalPoint = nullptr;
	float HighestVal = 0;
	for(APatrolPoint* p : PatrolPoints)
	{
		float Rand = FMath::RandRange(0.0, 1.0);
		float Weight = p->CalculateWeight(MaxDist) * Rand;
		UE_LOG(LogTemp, Display, TEXT("%s %lf %lf"), *(p->GetActorNameOrLabel()), Weight, Rand);
		if (Weight > HighestVal)
		{
			HighestVal = Weight;
			GoalPoint = p;
		}
	}
	UE_LOG(LogTemp, Display, TEXT("%s"), *(GoalPoint->GetActorNameOrLabel()));
	return GoalPoint;
}
