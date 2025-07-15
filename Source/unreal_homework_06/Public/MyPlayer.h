// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h"
#include "MyPlayer.generated.h"

UCLASS()
class UNREAL_HOMEWORK_06_API AMyPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UFUNCTION()
	void Move(const FInputActionValue& Value);
	UFUNCTION()
	void Look(const FInputActionValue& Value);

	void Jump();
	void StopJump();


protected:

	// 이동 속도
	UPROPERTY(EditAnywhere, Category = "Movement")
	float m_MoveSpeed = 400.f;
	UPROPERTY(EditAnywhere)
	class UCapsuleComponent* m_Capsule;
	UPROPERTY(EditAnywhere, Category = "Camera")
	class USpringArmComponent* m_SpringArm;
	UPROPERTY(EditAnywhere, Category = "Camera")
	class UCameraComponent* m_Camera;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputMappingContext* m_InputMapping;
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* m_MoveAction;
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* m_LookAction;
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* m_JumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float m_JumpPower = 500.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
	bool m_bIsJumping = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	USkeletalMeshComponent* m_SkeletonMesh;


	float m_fYaw = 0.f;
	float m_fPitch = 0.f;

};


