// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FL_Math.generated.h"

/**
 * 
 */
UCLASS()
class YINYANGPROJECT_API UFL_Math : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
		static void GetDistancePointToSegment(FVector2D startPos, FVector2D endPos, FVector2D point, bool& in, float& distance);
};
