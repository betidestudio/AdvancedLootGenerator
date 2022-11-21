// Copyright 2022 Betide Studio Inc. All Rights Reserved.


#include "LootPoints.h"

#include "Net/UnrealNetwork.h"

// Sets default values
ALootPoints::ALootPoints()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
}

void ALootPoints::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ALootPoints, SpawnedItemReference);
	DOREPLIFETIME(ALootPoints, SpawnedReqItemReference);
}

// Called when the game starts or when spawned
void ALootPoints::BeginPlay()
{
	bReplicates = true;
	Super::BeginPlay();
	if(bIsMultiplayerGame)
	{
		SpawnActorReplicated();
	}
	else
	{
		SpawnActorSinglePlayer();
	}
}

//Percentage of chance function
bool ALootPoints::SpawnPercentage(int percentage)
{
	return (FMath::RandRange(1, 100/percentage)==1?true:false);
}

// Called every frame
void ALootPoints::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Spawn Actors Component - Multiplayer. SinglePlayer Event is called from Server
void ALootPoints::SpawnActorReplicated_Implementation()
{
	SpawnActorSinglePlayer();
}

//Spawn Actor for SinglePlayer
void ALootPoints::SpawnActorSinglePlayer()
{
	int LocalItemArrayLength = ItemArray.Num() - 1;
	int LocalRandomNumberinRange = FMath::RandRange(0, LocalItemArrayLength);
	if(ItemArray[LocalRandomNumberinRange])
	{
		SpawnedItemReference = GetWorld()->SpawnActor<ABaseItem>(ItemArray[LocalRandomNumberinRange], GetActorLocation(), GetActorRotation());
		if(bSpawnRequiredItems && SpawnedItemReference)
		{
			if(SpawnedItemReference->UseNearbyItem && SpawnedItemReference->NearbyItem)
			{
				if(!SpawnedReqItemReference)
				{
					if(SpawnedItemReference->bAlwaysSpawnNearbyItem || SpawnPercentage(SpawnedItemReference->SpawnPossibilityForNearbyItems))
					{
						float temprando = FMath::RandRange(fMinRadiusToItem, fNearbySpawnRadius);
						FVector NearbyItemLocation;
						NearbyItemLocation.Set(GetActorLocation().X, GetActorLocation().Y+temprando, GetActorLocation().Z);
						SpawnedReqItemReference = GetWorld()->SpawnActor<ABaseItem>(SpawnedItemReference->NearbyItem, NearbyItemLocation, GetActorRotation());
					}
				}
			}
		}
	}
}

