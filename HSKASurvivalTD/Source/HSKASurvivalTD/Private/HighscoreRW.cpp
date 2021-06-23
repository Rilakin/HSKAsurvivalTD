// Fill out your copyright notice in the Description page of Project Settings.


#include "HighscoreRW.h"

void UHighscoreRW::writeHighscore(UPARAM(ref) TArray<FString>& ToWrite) {
    FString stringPath = FPaths::ProjectSavedDir();
    stringPath = stringPath.Append(TEXT("highscore.txt"));
    ToWrite.Sort();
    Algo::Reverse(ToWrite);
    FFileHelper::SaveStringArrayToFile(ToWrite, *stringPath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get());
}

void UHighscoreRW::readHighscore(TArray<FString>& ReadHighscores) {
    FString stringPath = FPaths::ProjectSavedDir();
    stringPath = stringPath.Append(TEXT("highscore.txt"));
    FFileHelper::LoadFileToStringArray(ReadHighscores, *stringPath);
}
