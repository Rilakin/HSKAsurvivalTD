// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Containers/Array.h"
#include "HighscoreRW.generated.h"


/**
 * 
 */
UCLASS()
class HSKASURVIVALTD_API UHighscoreRW : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	static void writeHighscore(UPARAM(ref) TArray<FString>& ToWrite);

	UFUNCTION(BlueprintCallable)
	static void readHighscore(TArray<FString>& ReadHighscores);

};
