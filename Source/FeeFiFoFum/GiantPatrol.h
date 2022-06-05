// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PatrolPoint.h"
#include "GiantPatrol.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FEEFIFOFUM_API UGiantPatrol : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGiantPatrol();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintReadWrite)
	TArray<APatrolPoint*> PatrolPoints;

	UFUNCTION(BlueprintCallable)
	APatrolPoint* DetermineNextPoint();

private:

	APatrolPoint* CurrentPoint;
};
