// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpPad.h"

#include "Cours02/Cours02Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Rendering/RenderCommandPipes.h"

// Sets default values
AJumpPad::AJumpPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJumpPad::BeginPlay()
{
	Super::BeginPlay();
	
}

void AJumpPad::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	auto Player = Cast<ACours02Character>(OtherActor);
	FVector PadForce = {0,0,1000};

	if(Player != nullptr)
	{
		//Player->GetCharacterMovement()->AddImpulse(PadForce);
		Player->GetCharacterMovement()->Launch(PadForce);
		
	}
}

// Called every frame
void AJumpPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

