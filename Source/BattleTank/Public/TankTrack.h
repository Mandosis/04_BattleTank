// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * TankTrack is used to set the maximum driving force, and to apply forces to the tank.
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	// 1 moves the track forward, and -1 moves the track backwards
	UFUNCTION(BluePrintCallable, Category = Input)
	void SetThrottle(float Throttle);

	// Max force in Newtons
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxDrivingForce = 40000000; // Assume 40 tonne tank, and 1g acceleration
};
