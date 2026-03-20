// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UE09_Okolinf.generated.h"

/** Main log category used across the project */
DECLARE_LOG_CATEGORY_EXTERN(LogUE09_OkolinF, Log, All);

USTRUCT()
struct FHeroStat
{
	GENERATED_BODY()

public:
	
	FHeroStat() : Live(100.0f), damag(15.0f), level(3)
	{

	}
    float Live;
	float damag;
	int32 level;

};