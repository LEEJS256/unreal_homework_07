// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Rotating_Board.generated.h"

UCLASS()
class UNREAL_HOMEWORK_06_API ARotating_Board : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotating_Board();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
	UStaticMeshComponent* m_StaticMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
	bool m_bRotate = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
	bool m_bClockWise = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
	float m_fRotatingSpeed = 90.f;

private:
	void Update_Rotation(float DeltaTime);
};
