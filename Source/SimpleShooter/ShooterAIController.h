// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API AShooterAIController : public AAIController
{
	GENERATED_BODY()
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
		
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
    UPROPERTY(EditAnyWhere)
	class UBehaviorTree* AIbehavior;

	UPROPERTY()
	class AShooterCharacter* ShooterChracter;
};
