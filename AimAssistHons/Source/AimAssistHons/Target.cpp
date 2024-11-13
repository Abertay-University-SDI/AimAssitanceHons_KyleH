// Fill out your copyright notice in the Description page of Project Settings.


#include "Target.h"



// Sets default values
ATarget::ATarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	target = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("1"));
	RootComponent = target;

}

// Called when the game starts or when spawned
void ATarget::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATarget::moveTarget(bool &hit)
{
	//set to knew random location within the bounds of the aiming area
	//DO NOT CHANGE THESE VALUES
	target->SetWorldLocation(FVector(FMath::FRandRange(932.0f, 2080.0f), FMath::FRandRange(320.0, 860.0), FMath::FRandRange(98.0, 466.0f)));
	hit = false;
}

// Called every frame
void ATarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

