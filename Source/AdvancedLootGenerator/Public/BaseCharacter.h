// Copyright 2022 Betide Studio Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

UCLASS()
class ADVANCEDLOOTGENERATOR_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Function to Enable_DisableOutLine From Server
	UFUNCTION(Server, Reliable)
	void EnableDisableOutline(bool Enable,  ABaseItem* ItemRef);
	
	//Function to Enable_DisableOutLine From Client
	UFUNCTION(Client, Reliable)
	void EnableDisableOutlineClient(bool Enable, ABaseItem* ItemRef);

};
