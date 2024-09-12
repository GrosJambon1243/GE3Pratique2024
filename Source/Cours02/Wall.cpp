// Fill out your copyright notice in the Description page of Project Settings.


#include "Wall.h"

#include "Cours02Character.h"

// Sets default values
AWall::AWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWall::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWall::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	auto Player = Cast<ACours02Character>(OtherActor);
	if (Player != nullptr)
	{
		Player->CoinCounter++;
		GEngine->AddOnScreenDebugMessage(-1,2,FColor::Red,FString::Printf(TEXT("Coin: %d"),Player->CoinCounter));
	}

	Destroy();
}

// Called every frame
void AWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


