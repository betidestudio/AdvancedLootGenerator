// Copyright 2022 Betide Studio Inc. All Rights Reserved.


#include "BaseItem.h"

#include "BaseCharacter.h"
#include "LootPoints.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABaseItem::ABaseItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(FName("Box Collision"));
	SetRootComponent(BoxCollision);
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("Static Mesh"));
	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("Skeletal Mesh"));
	StaticMesh->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	SkeletalMesh->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, false));
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ABaseItem::ActorBeginOverlapSinglePlayer);
	BoxCollision->OnComponentEndOverlap.AddDynamic(this, &ABaseItem::ActorEndOverlapSinglePlayer);
	StaticMesh->SetIsReplicated(true);
	SkeletalMesh->SetIsReplicated(true);
}

// Called when the game starts or when spawned
void ABaseItem::BeginPlay()
{
	Super::BeginPlay();
	if(!bMultiplayerGame)
	{
		FindFloorServerSingleplayer();
	}
	else
	{
		FindFloorServerMultiplayer();
	}
}

//Find Floor for the Items - Multiplayer - Calls the SinglePlayer Function from the Server
void ABaseItem::FindFloorServerMultiplayer_Implementation()
{
	FindFloorServerSingleplayer();
}

//Find Floor for the Items - SingelPlayer
void ABaseItem::FindFloorServerSingleplayer()
{
	FCollisionQueryParams CollisionParams;
	FHitResult OutHit;
	FVector EndPoint;
	EndPoint.Set(GetActorLocation().X, GetActorLocation().Y,GetActorLocation().Z + (-1000.f));
	bool HitingGround = UKismetSystemLibrary::LineTraceSingleForObjects(this, GetActorLocation(), EndPoint,TraceChannelProperty, true, ActorsToIgnore, EDrawDebugTrace::None,OutHit, false);
	if(HitingGround || OutHit.bBlockingHit)
	{
		FVector NewItemLocation;
		NewItemLocation.Set(OutHit.Location.X, OutHit.Location.Y, OutHit.Location.Z +DistanceAboveGround);
		SetActorLocation(NewItemLocation);
		UE_LOG(LogTemp, Warning, TEXT("Hiting"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Else Statement"));
		Destroy();
	}
}

//Actor Start Overlapping Function
void ABaseItem::ActorBeginOverlapSinglePlayer(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	const FHitResult& SweepResult)
{
	ABaseCharacter* CharacterRef = Cast<ABaseCharacter>(OtherActor);
	UE_LOG(LogTemp, Warning, TEXT("BeginOverlap"));
	if(CharacterRef)
	{
		if(SkeletalMesh)
		{
			CharacterRef->EnableDisableOutline(true, this);
		}
		else if(StaticMesh)
		{
			CharacterRef->EnableDisableOutline(true, this);
		}
	}	
}

//Actor End Overlapping Function
void ABaseItem::ActorEndOverlapSinglePlayer(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ABaseCharacter* CharacterRef = Cast<ABaseCharacter>(OtherActor);
	if(CharacterRef)
	{
		if(SkeletalMesh)
		{
			CharacterRef->EnableDisableOutline(false, this);
		}
		else if(StaticMesh)
		{
			CharacterRef->EnableDisableOutline(false, this);
		}
	}
}

// Called every frame
void ABaseItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Returns Static Mesh for the Item
UStaticMeshComponent* ABaseItem::ReturnStaticMesh()
{
	return StaticMesh;
}

//Returns Skeletal Mesh for the Item
USkeletalMeshComponent* ABaseItem::ReturnsSkeletalMesh()
{
	return SkeletalMesh;
}

