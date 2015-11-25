// Copyright (c) 2015, Matthias Hölzl

#include "PG.h"
#include "BatteryPickup.h"
#include "SinglePickupTypeFactory.h"




ASinglePickupTypeFactory::ASinglePickupTypeFactory()
{
	CreatedType = ABatteryPickup::StaticClass();
}

class APickup* ASinglePickupTypeFactory::SpawnPickup(AActor* Owner, APawn* Instigator, FVector SpawnLocation)
{
	return SpawnPickupOfType(CreatedType, Owner, Instigator, SpawnLocation);
}
