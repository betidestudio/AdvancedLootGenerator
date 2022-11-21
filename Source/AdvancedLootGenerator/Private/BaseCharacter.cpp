// Copyright 2022 Betide Studio Inc. All Rights Reserved.


#include "BaseCharacter.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

//Enable_Disable Outline On The Local Client
void ABaseCharacter::EnableDisableOutlineClient_Implementation(bool Enable, ABaseItem* ItemRef)
{
	if(ItemRef)
	{
		if(ItemRef->ReturnStaticMesh())
		{
			ItemRef->ReturnStaticMesh()->SetRenderCustomDepth(Enable);
		}
		else if(ItemRef->ReturnsSkeletalMesh())
		{
			ItemRef->ReturnsSkeletalMesh()->SetRenderCustomDepth(Enable);
		}
	}
}

//Enable_Disable Outline from Server
void ABaseCharacter::EnableDisableOutline_Implementation(bool Enable, ABaseItem* ItemRef)
{
	EnableDisableOutlineClient(Enable, ItemRef);
}

