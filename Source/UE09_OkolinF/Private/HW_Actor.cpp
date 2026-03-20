
#include "HW_Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/ActorComponent.h"

AHW_Actor::AHW_Actor()
{
	PrimaryActorTick.bCanEverTick = true;
}





void AHW_Actor::BeginPlay()
{
	Super::BeginPlay();	
}

int AHW_Actor::LimitHealthFunction() const
{
	 int lim = Health;
	 lim = FMath::Clamp(lim, 10, 45);
	return lim;
}



FVector AHW_Actor::LineTraceFunction() const
{
	return GetActorLocation() + UKismetMathLibrary::GetForwardVector(GetActorRotation()) * MaxDistance;
}

void AHW_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

