// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"


AMyPlayerController::AMyPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    TeamId = FGenericTeamId(0);
}

FGenericTeamId  AMyPlayerController::GetGenericTeamId() const
{
    return TeamId;
}