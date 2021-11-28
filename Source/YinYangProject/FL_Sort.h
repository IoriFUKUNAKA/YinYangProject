// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FL_Sort.generated.h"

/**
 * TArrayÇÃÉ\Å[ÉgÇ‹Ç∆Çﬂ
 */
UCLASS()
class YINYANGPROJECT_API UFL_Sort : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "Sort")
	static void StandardSortFloat(UPARAM(ref) TArray<float>& SortedArray);

	UFUNCTION(BlueprintCallable, Category = "Sort")
	static void StandardSortDistanceVec2(UPARAM(ref) TArray<FVector2D>& SortedArray, FVector2D pivot);
};
