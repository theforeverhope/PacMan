// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/StaticMeshComponent.h"
#include "Enemy.generated.h"

UCLASS()
class PACMAN_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SetVulnerable();
	void SetInVulnerable();

	void SetMove(bool moveIt);
	void Killed();
	void ReArm();

	UPROPERTY(VisibleAnywhere, Category=Body)
	UStaticMeshComponent* EnemyBody;

	UFUNCTION()
	void OnCollision(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OnterBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	bool isDead;

private:
	class UMaterialInterface* DefaultMaterial;
	class UMaterialInterface* VulnerableMaterial;
	FTimerHandle TimeVulnerable;
	bool isVulnerable;
};
