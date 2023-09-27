// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLE_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector StartLocation; 
	UPROPERTY(EditAnywhere)
	FVector PlatformVelocity;
	UPROPERTY(EditAnywhere)
	float MoveDistance; 

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
