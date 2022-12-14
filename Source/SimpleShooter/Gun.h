// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class SIMPLESHOOTER_API AGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGun();
	void PullTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
    
	UPROPERTY(VisibleAnyWhere)
	USceneComponent* Root;
	
	UPROPERTY(VisibleAnyWhere)
	USkeletalMeshComponent* Mesh; 

	UPROPERTY(EditAnyWhere)
	UParticleSystem* MuzzleFlash;

	UPROPERTY(EditAnyWhere)
	UParticleSystem* ImpactEffect;

	UPROPERTY(EditAnyWhere)
	float MaxRange = 1000;

	UPROPERTY(EditAnyWhere)
	float Damage = 10;

};
