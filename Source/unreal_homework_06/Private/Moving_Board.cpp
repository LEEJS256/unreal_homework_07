// Fill out your copyright notice in the Description page of Project Settings.


#include "Moving_Board.h"

// Sets default values
AMoving_Board::AMoving_Board()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//m_StartLoaction = GetActorLocation(); // 시작위치 받아옴
    //UpdateDirection();

    m_StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    SetRootComponent(m_StaticMesh);
    static ConstructorHelpers::FObjectFinder<UStaticMesh>  MeshAsset(TEXT("/Game/Resources/Shapes/Shape_Plane.Shape_Plane"));
    if (MeshAsset.Succeeded())
    {
        m_StaticMesh->SetStaticMesh(MeshAsset.Object);
    }

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/Resources/Materials/M_Wood_Oak.M_Wood_Oak"));
    if (MaterialAsset.Succeeded())
    {
        m_StaticMesh->SetMaterial(0, MaterialAsset.Object);
    }
}

// Called when the game starts or when spawned
void AMoving_Board::BeginPlay()
{
	Super::BeginPlay();
    m_StartLoaction = GetActorLocation();

	UpdateDirection();

    // 디버그 출력
    UE_LOG(LogTemp, Warning, TEXT("Start Location: %s"), *m_StartLoaction.ToString());
    UE_LOG(LogTemp, Warning, TEXT("Move Direction: %s"), *m_MoveDirection.ToString());

}


void AMoving_Board::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (m_bStop)
        return;

    FVector CurrentLocation = GetActorLocation();
    FVector MoveDirection = m_bForward ? m_MoveDirection : -m_MoveDirection;
    FVector Offset = MoveDirection * m_Speed * DeltaTime;

    CurrentLocation += Offset;

    if (m_bForward)
    {
        if (FVector::Dist(CurrentLocation, m_StartLoaction) >= m_MoveDistance)
        {
            CurrentLocation = m_StartLoaction + m_MoveDirection * m_MoveDistance;
            m_bForward = false;
            UE_LOG(LogTemp, Warning, TEXT("Reached end, going back"));
        }
    }
    else
    {
        if (FVector::Dist(CurrentLocation, m_StartLoaction) <= 1.f)
        {
            CurrentLocation = m_StartLoaction;
            m_bForward = true;
            UE_LOG(LogTemp, Warning, TEXT("Reached start, going forward"));
        }
    }

    SetActorLocation(CurrentLocation);

}


void  AMoving_Board::UpdateDirection()
{
	FVector NewDirection = FVector::ZeroVector;

	if (m_bMove_X && !m_bMove_Y) //x축
		NewDirection = FVector(1, 0, 0);
	else if (!m_bMove_X && m_bMove_Y) //y축
		NewDirection = FVector(0, 1, 0);
	else if (m_bMove_X && m_bMove_Y) // z축
		NewDirection = FVector(0, 0, 1);
	

	if (!NewDirection.Equals(m_PreviousDirection))
	{
		m_PreviousDirection = NewDirection;
		m_MoveDirection = NewDirection;
	}
}

