// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Public/Enemy.h"
#include "PacManGameModeBase.generated.h"

enum EGameState :short {
	EMenu,
	EPlaying,
	EPause,
	EWin,
	EGameOver,
};
/**
 * 
 */
UCLASS()
class PACMAN_API APacManGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
  virtual void BeginPlay() override;
	EGameState GetCurrentState() const;
	void SetCurrentState(EGameState value);
	void SetEnemyVulnerable();

private:
	EGameState currentState;
	TArray<class AEnemy*> Enemys;
};

FORCEINLINE EGameState APacManGameModeBase::GetCurrentState() const {
	return currentState;
}