// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAIController.h"
#include"Kismet/GameplayStatics.h"
#include "ShooterCharacter.h"


void AShooterAIController::BeginPlay()
{
    Super::BeginPlay();

    if(AIbehavior != nullptr)
    {
        RunBehaviorTree(AIbehavior);
    }

    //ShooterChracter = GetWorld()->SpawnActor<AShooterCharacter>();
}

void AShooterAIController::Tick(float DeltaTime)
{
    // Super::Tick(DeltaTime);

    // APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(),0);

    // if(LineOfSightTo(PlayerPawn))
    // {
    //     SetFocus(PlayerPawn); 
    //     MoveToActor(PlayerPawn,AcceptenceRadius);
    // }
    // else
    // {
    //     ClearFocus(EAIFocusPriority::Gameplay);
    //     StopMovement();
    // }
}
