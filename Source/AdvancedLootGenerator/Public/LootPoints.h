// Copyright 2022 Betide Studio Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "LootPoints.generated.h"

UCLASS()
class ADVANCEDLOOTGENERATOR_API ALootPoints : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALootPoints();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	bool SpawnPercentage(int percentage);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Should the items show outline on overlap
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot Settings")
	bool bUseOutline;

	//Should the items spawn required items like ammo near the item. For More Info, check the documentation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot Settings")
	bool bSpawnRequiredItems;

	//Radius in which the nearby item can spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot Settings")
	float fNearbySpawnRadius = 100.f;

	//Minimum Radius the Nearby Item can spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot Settings")
	float fMinRadiusToItem = 2.f;

	//Reference of Item spawned for this Loot Position
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category="Loot Settings")
	ABaseItem* SpawnedItemReference;

	//Reference of Required Item spawned for this Loot Position
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category="Loot Settings")
	ABaseItem* SpawnedReqItemReference;

	//Items to Spawn - Base class of the item should be BaseItem
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot Settings")
	TArray<TSubclassOf<ABaseItem>> ItemArray;

	//Is the Spawning Replicated or just Singleplayer
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot Settings")
	bool bIsMultiplayerGame = true;

	//Spawn Actor for Multiplayer - Calls the SinglePlayer Function from the Server
	UFUNCTION(Server, Unreliable, BlueprintCallable, Category="Loot Functions")
	void SpawnActorReplicated();

	//Spawn Actor for SinglePlayer
	UFUNCTION(BlueprintCallable, Category="Loot Functions")
	void SpawnActorSinglePlayer();
};
