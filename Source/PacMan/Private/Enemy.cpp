// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/Enemy.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Public/TimerManager.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Public/PacManCharacter.h"
#include "Public/AIEnemy.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	EnemyBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderObj(TEXT("'/Game/StarterContent/Shapes/Shape_Cylinder'"));
	if (CylinderObj.Succeeded()) {
		EnemyBody->SetStaticMesh(CylinderObj.Object);
	}
  
	GetCapsuleComponent()->SetCapsuleRadius(40.0f);
	GetCapsuleComponent()->SetCapsuleHalfHeight(50.0f);
	EnemyBody->SetRelativeScale3D(FVector(0.7f, 0.7f, 1.0f));
	EnemyBody->SetRelativeLocation(FVector(0, 0, -50));
	EnemyBody->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UMaterial> VulnerableMat(TEXT("'/Game/Materials/Red'"));
	// VulnerableMaterial = Cast<UMaterialInterface>(*VulnerableMat);
	SetActorEnableCollision(true);

	AIControllerClass = AAIEnemy::StaticClass();
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	DefaultMaterial = EnemyBody->GetMaterial(0);
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AEnemy::OnCollision);
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::SetVulnerable()
{
	GetWorldTimerManager().SetTimer(TimeVulnerable, this, &AEnemy::SetInVulnerable, 10.0f, false);
	if (isVulnerable) {
		return;
	}
	isVulnerable = true;
	EnemyBody->SetMaterial(0, VulnerableMaterial);

	GetCharacterMovement()->MaxWalkSpeed = 100.0f;
}

void AEnemy::SetInVulnerable()
{
	GetWorldTimerManager().ClearTimer(TimeVulnerable);
	isVulnerable = false;
	EnemyBody->SetMaterial(0, DefaultMaterial);	
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
}

void AEnemy::SetMove(bool moveIt)
{
	AAIEnemy* AI = Cast<AAIEnemy>(GetController()); 
	if (moveIt) {
		AI->SearchNewPoint();
	} else {
		AI->StopMove();
	}
}

void AEnemy::Killed()
{
	if (isDead) {
		return;
	}

	isDead = true;
	GetCharacterMovement()->MaxWalkSpeed = 500.0f;
	AAIEnemy* AI = Cast<AAIEnemy>(GetController());
	AI->GoHome();
}

void AEnemy::ReArm()
{
	isDead = false;
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
	if (isVulnerable) {
		SetInVulnerable();
	}
	SetMove(true);
}

void AEnemy::OnCollision(UPrimitiveComponent * HitComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("EnemyCollision isVulnerable=%d"), isVulnerable);
	if (OtherActor->IsA(APacManCharacter::StaticClass())) {
		if (isVulnerable) {
			Killed();
		} else {
			APacManCharacter* PacMan = Cast<APacManCharacter>(OtherActor);
			PacMan->Killed();
		}
	}
}