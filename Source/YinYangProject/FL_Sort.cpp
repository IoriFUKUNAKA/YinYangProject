// Fill out your copyright notice in the Description page of Project Settings.


#include "FL_Sort.h"

void UFL_Sort::StandardSortFloat(UPARAM(ref) TArray<float>& SortedArray)
{
	SortedArray.Sort([](const float a, const float b) { return a < b; });
}

void UFL_Sort::StandardSortDistanceVec2(UPARAM(ref) TArray<FVector2D>& SortedArray, FVector2D pivot)
{
	SortedArray.Sort([=](const FVector2D a, const FVector2D b) { return FVector2D::DistSquared(pivot, a) > FVector2D::DistSquared(pivot, b); });
}