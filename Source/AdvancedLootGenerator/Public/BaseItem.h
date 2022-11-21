// Copyright 2022 Betide Studio Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "BaseItem.generated.h"

UCLASS()
class ADVANCEDLOOTGENERATOR_API ABaseItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseItem();

	//Should the items spawn required items like ammo near the item. For More Info, check the documentation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot Settings")
	bool UseNearbyItem = false;

	//Should the items spawn required items like ammo near the item. For More Info, check the documentation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot Settings")
	int SpawnPossibilityForNearbyItems = 100;

	//Should the required items always spawn near the item. For More Info, check the documentation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot Settings")
	bool bAlwaysSpawnNearbyItem;

	//Is the game Multiplayer
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot Settings")
	bool bMultiplayerGame;

	//Item above ground
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot Settings")
	float DistanceAboveGround = 20.f;

	//The nearby items to spawn near this weapon like Ammo for a weapon.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot Settings")
	TSubclassOf<ABaseItem> NearbyItem;

	//Trace Channel Property for hiting ground
	UPROPERTY(EditAnywhere, Category="Collision")
	TArray<TEnumAsByte<EObjectTypeQuery>> TraceChannelProperty;

	//Actos To Ignore for hiting ground
	UPROPERTY(EditAnywhere, Category="Collision")
	TArray<AActor*> ActorsToIgnore;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	UBoxComponent* BoxCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	UStaticMeshComponent* StaticMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	USkeletalMeshComponent* SkeletalMesh;
	
	UFUNCTION(Server, Reliable)
	void FindFloorServerMultiplayer();

	UFUNCTION()
	void FindFloorServerSingleplayer();

	UFUNCTION()
	void ActorBeginOverlapSinglePlayer(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	
	UFUNCTION()
	void ActorEndOverlapSinglePlayer(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UStaticMeshComponent* ReturnStaticMesh();
	USkeletalMeshComponent* ReturnsSkeletalMesh();

};
