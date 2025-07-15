// Fill out your copyright notice in the Description page of Project Settings.


#include "Rotating_Board.h"

// Sets default values
ARotating_Board::ARotating_Board()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	SetRootComponent(m_StaticMesh);
	static ConstructorHelpers::FObjectFinder<UStaticMesh>  MeshAsset(TEXT("/Game/Resources/Shapes/Shape_Pipe.Shape_Pipe"));
	if (MeshAsset.Succeeded())
	{
		m_StaticMesh->SetStaticMesh(MeshAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/Resources/Materials/M_Metal_Steel.M_Metal_Steel"));
	if (MaterialAsset.Succeeded())
	{
		m_StaticMesh->SetMaterial(0, MaterialAsset.Object);
	}
	

}

// Called when the game starts or when spawned
void ARotating_Board::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotating_Board::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Update_Rotation(DeltaTime);
}

void ARotating_Board::Update_Rotation(float DeltaTime)
{
	if (!m_bRotate)
		return;

	// 방향에 따라 회전 속도 설정
	float YawDelta = m_fRotatingSpeed * DeltaTime;
	if (!m_bClockWise)
		YawDelta *= -1;

	AddActorLocalRotation(FRotator(0.f, YawDelta, 0.f));

}

