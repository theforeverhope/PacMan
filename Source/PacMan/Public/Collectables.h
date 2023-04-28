// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Collectables.generated.h"

UCLASS()
class PACMAN_API ACollectables : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACollectables();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Category 分到 Collectable类 里
	// VisibleAnywhere 编辑器可看到
	UPROPERTY(VisibleAnywhere, Category=Collectable)
	UStaticMeshComponent* CollectableMesh;
	
	// EditDefaultsOnly 编辑器可编辑原型
	UPROPERTY(EditDefaultsOnly, Category=Collectable)
	USphereComponent* BaseCollisionComponent;

	// EditDefaultsOnly 编辑器可编辑原型与实例
	UPROPERTY(EditAnywhere, Category=Collectable)
	bool bIsSuperCollectable;
};
