// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GenericTeamAgentInterface.h"
#include "TurretBaseClass.generated.h"

UCLASS()
class HSKASURVIVALTD_API ATurretBaseClass : public APawn, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATurretBaseClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	FGenericTeamId TeamId;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual FGenericTeamId GetGenericTeamId() const override;
	
};
