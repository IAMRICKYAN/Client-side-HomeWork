// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponClientBase.h"

// Sets default values
AWeaponClientBase::AWeaponClientBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	RootComponent = WeaponMesh;

	WeaponMesh->SetOnlyOwnerSee(true);
	

}

// Called when the game starts or when spawned
void AWeaponClientBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeaponClientBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

