// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Moving_Board.generated.h"

UCLASS()
class UNREAL_HOMEWORK_06_API AMoving_Board : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoving_Board();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform")
	UStaticMeshComponent* m_StaticMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform")
	FVector m_MoveDirection = FVector(1, 0, 0);
	UPROPERTY(EditAnywhere, Category = "Platform")
	bool m_bMove_X = false;
	UPROPERTY(EditAnywhere, Category = "Platform")
	bool m_bMove_Y = false;
	UPROPERTY(EditAnywhere, Category = "Platform")
	bool m_bStop = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform")
	float m_MoveDistance = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform")
	float m_Speed = 500.f;

	FVector m_StartLoaction;
	bool m_bForward = true;

	FVector m_PreviousDirection = FVector::ZeroVector;
private:
	void UpdateDirection();

};
