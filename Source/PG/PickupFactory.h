// Copyright (c) 2015, Matthias Hölzl

#pragma once

#include "Components/ActorComponent.h"
#include "Pickup.h"
#include "PickupFactory.generated.h"


UCLASS(Abstract, EditInlineNew, ClassGroup = "Spawning", meta = (BlueprintSpawnableComponent))
class PG_API UPickupFactory : public UActorComponent
{
	GENERATED_BODY()

public:	
	virtual APickup* SpawnPickup(AActor* Owner, APawn* Instigator, FVector SpawnLocation);

protected:
	// Sets default values for this component's properties
	UPickupFactory();

	APickup* SpawnPickupOfType(TSubclassOf<APickup> Type, AActor* Owner, APawn* Instigator, FVector SpawnLocation);
};
