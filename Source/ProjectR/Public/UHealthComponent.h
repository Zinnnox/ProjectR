// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UHealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTR_API UUHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//Health Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float MaxHealth;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Health")
	float CurrentHealth;

public:	
	// Function to apply damage
	UFUNCTION(BlueprintCallable, Category = "Health")
	void TakeDamage(float DamageAmount);

	// Function to heal the player
	UFUNCTION(BlueprintCallable, Category = "Health")
	void Heal(float HealAmount);

	// Utility function to check if the character is dead
	UFUNCTION(BlueprintCallable, Category = "Health")
	bool IsDead() const;

	// Optional: Event dispatcher for death
	UPROPERTY(BlueprintAssignable, Category = "Health")
	FOnDeathSignature OnDeath;
		
};

// Declare a delegate for death events
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeathSignature);