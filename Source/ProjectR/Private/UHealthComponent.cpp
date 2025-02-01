// Fill out your copyright notice in the Description page of Project Settings.


#include "UHealthComponent.h"

// Sets default values for this component's properties
UUHealthComponent::UUHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.

	PrimaryComponentTick.bCanEverTick = false;  // No need for ticking by default
	MaxHealth = 100.0f;
	CurrentHealth = MaxHealth;

	// ...
}


// Called when the game starts
void UUHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UUHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

