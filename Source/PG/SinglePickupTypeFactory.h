// Copyright (c) 2015, Matthias Hölzl

#pragma once

#include "PickupFactory.h"
#include "Pickup.h"
#include "SinglePickupTypeFactory.generated.h"

/**
 * 
 */
UCLASS()
class PG_API ASinglePickupTypeFactory : public APickupFactory
{
	GENERATED_BODY()

public:
	ASinglePickupTypeFactory();

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<APickup> CreatedType;
	
	APickup* SpawnPickup(AActor* Owner, APawn* Instigator, FVector Location) override;
};
