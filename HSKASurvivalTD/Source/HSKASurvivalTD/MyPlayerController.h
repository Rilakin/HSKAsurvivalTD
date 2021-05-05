// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "MyPlayerController.generated.h"


/**
 * 
 */
UCLASS()
class HSKASURVIVALTD_API AMyPlayerController : public APlayerController, public IGenericTeamAgentInterface
{
	GENERATED_BODY()
public:
	AMyPlayerController(const FObjectInitializer& ObjectInitializer);
	virtual FGenericTeamId GetGenericTeamId() const override;

private:
	FGenericTeamId TeamId;

	

};
