// Fill out your copyright notice in the Description page of Project Settings.


#include "FL_Sort.h"
#include <algorithm>

TArray<float> UFL_Sort::StandardSortFloat(TArray<float> SortedArray)
{
	auto tmp = SortedArray;

	tmp.Sort([](const float a, const float b) { return a < b; });

	return tmp;
}