// Fill out your copyright notice in the Description page of Project Settings.


#include "TurretBaseClass.h"

// Sets default values
ATurretBaseClass::ATurretBaseClass()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TeamId = FGenericTeamId(0);
}

// Called when the game starts or when spawned
void ATurretBaseClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATurretBaseClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATurretBaseClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FGenericTeamId ATurretBaseClass::GetGenericTeamId() const
{
	return TeamId;
}