// Copyright (c) 2015, Matthias Hölzl

#pragma once

#include "Pickup.h"
#include "PickupFactory.generated.h"


UCLASS()
class PG_API APickupFactory : public AActor
{
	GENERATED_BODY()

public:	
	virtual APickup* SpawnPickup(AActor* Owner, APawn* Instigator, FVector SpawnLocation);

protected:
	// Sets default values for this component's properties
	APickupFactory();

	APickup* SpawnPickupOfType(TSubclassOf<APickup> Type, AActor* Owner, APawn* Instigator, FVector SpawnLocation);
};
