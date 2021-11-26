// Fill out your copyright notice in the Description page of Project Settings.


#include "FL_Math.h"

void UFL_Math::GetDistancePointToSegment(FVector2D startPos, FVector2D endPos, FVector2D point, bool& in, float& distance)
{
	FVector2D vec = endPos - startPos;
	float a = vec.X;
	float b = vec.Y;

	float a2 = FMath::Square(a);
	float b2 = FMath::Square(b);

	float r2 = a2 + b2;

	float t = -(a * (startPos.X - point.X) + b * (startPos.Y - point.Y));
	if (t<0 || t > r2)
	{
		in = false;
		distance = -1;
	}
	else
	{
		in = true;
		float f1 = a * (startPos.Y - point.Y) - b * (startPos.X - point.X);
		distance = FMath::Sqrt(FMath::Square(f1) / r2);
	}
}

