// Fill out your copyright notice in the Description page of Project Settings.


#include "FL_Easing.h"

float UFL_Easing::EaseInSine(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, 1 - FMath::Cos((alpha * PI) / 2));
}

float UFL_Easing::EaseOutSine(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, FMath::Sin((alpha * PI) / 2));
}

float UFL_Easing::EaseInOutSine(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, -(FMath::Cos(alpha * PI) - 1) / 2);
}

float UFL_Easing::EaseInCubic(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, alpha * alpha * alpha);
}

float UFL_Easing::EaseOutCubic(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, 1 - FMath::Pow(1 - alpha, 3));
}

float UFL_Easing::EaseInOutCubic(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, alpha < 0.5f ? 4 * alpha * alpha * alpha : 1 - FMath::Pow(-2 * alpha + 2, 3) / 2);
}

float UFL_Easing::EaseInQuint(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, alpha * alpha * alpha * alpha * alpha);
}
	  
float UFL_Easing::EaseOutQuint(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, 1 - FMath::Pow(1 - alpha, 5));
}

float UFL_Easing::EaseInOutQuint(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, alpha < 0.5f ? 16 * alpha * alpha * alpha * alpha * alpha : 1 - FMath::Pow(-2 * alpha + 2, 5) / 2);
}

float UFL_Easing::EaseInCirc(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, 1 - FMath::Sqrt(1 - FMath::Pow(alpha, 2)));
}

float UFL_Easing::EaseOutCirc(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, FMath::Sqrt(1 - FMath::Pow(alpha - 1, 2)));
}

float UFL_Easing::EaseInOutCirc(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, alpha < 0.5f ? (1 - FMath::Sqrt(1 - FMath::Pow(2 * alpha, 2))) / 2 : (FMath::Sqrt(1 - FMath::Pow(-2 * alpha + 2, 2)) + 1) / 2);
}

float UFL_Easing::EaseInElastic(float a, float b, float alpha)
{
	const float c4 = (2 * PI) / 3;

	return FMath::Lerp(a, b, alpha == 0 ? 0 : alpha == 1 ? 1 : -FMath::Pow(2, 10 * alpha - 10) * FMath::Sin((alpha * 10 - 10.75f) * c4));
}

float UFL_Easing::EaseOutElastic(float a, float b, float alpha)
{
	const float c4 = (2 * PI) / 3;

	return FMath::Lerp(a, b, alpha == 0 ? 0 : alpha == 1 ? 1 : FMath::Pow(2, -10 * alpha) * FMath::Sin((alpha * 10 - 0.75f) * c4) + 1);
}

float UFL_Easing::EaseInOutElastic(float a, float b, float alpha)
{
	const float c5 = (2 * PI) / 4.5f;

	return FMath::Lerp(a, b, alpha == 0 ? 0 : alpha == 1 ? 1 : alpha < 0.5 ? -(FMath::Pow(2, 20 * alpha - 10) * FMath::Sin((20 * alpha - 11.125f) * c5)) / 2 : (FMath::Pow(2, -20 * alpha + 10) * FMath::Sin((20 * alpha - 11.125f) * c5)) / 2 + 1);
}

float UFL_Easing::EaseInQuad(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, alpha * alpha);
}

float UFL_Easing::EaseOutQuad(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, 1 - (1 - alpha) * (1 - alpha));
}

float UFL_Easing::EaseInOutQuad(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, alpha < 0.5f ? 2 * alpha * alpha : 1 - FMath::Pow(-2 * alpha + 2, 2) / 2);
}

float UFL_Easing::EaseInQuart(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, alpha * alpha * alpha * alpha);
}

float UFL_Easing::EaseOutQuart(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, 1 - FMath::Pow(1 - alpha, 4));
}

float UFL_Easing::EaseInOutQuart(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, alpha < 0.5f ? 8 * alpha * alpha * alpha * alpha : 1 - FMath::Pow(-2 * alpha + 2, 4) / 2);
}

float UFL_Easing::EaseInExpo(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, alpha == 0 ? 0 : FMath::Pow(2, 10 * alpha - 10));
}

float UFL_Easing::EaseOutExpo(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, alpha == 1 ? 1 : 1 - FMath::Pow(2, -10 * alpha));
}

float UFL_Easing::EaseInOutExpo(float a, float b, float alpha)
{
	return alpha == 0 ? 0 : alpha == 1 ? 1 : alpha < 0.5f ? FMath::Pow(2, 20 * alpha - 10) / 2 : (2 - FMath::Pow(2, -20 * alpha + 10)) / 2;
}

float UFL_Easing::EaseInBack(float a, float b, float alpha)
{
	const float c1 = 1.70158f;
	const float c3 = c1 + 1;

	return FMath::Lerp(a, b, c3 * alpha * alpha * alpha - c1 * alpha * alpha);
}

float UFL_Easing::EaseOutBack(float a, float b, float alpha)
{
	const float c1 = 1.70158f;
	const float c3 = c1 + 1;

	return FMath::Lerp(a, b, 1 + c3 * FMath::Pow(alpha - 1, 3) + c1 * FMath::Pow(alpha - 1, 2));
}

float UFL_Easing::EaseInOutBack(float a, float b, float alpha)
{
	const float c1 = 1.70158f;
	const float c2 = c1 * 1.525f;

	return FMath::Lerp(a, b, alpha < 0.5f ? FMath::Pow(2 * alpha, 2) * ((c2 + 1) * 2 * alpha - c2) / 2 : (FMath::Pow(2 * alpha - 2, 2) * ((c2 + 1) * (alpha * 2 - 2) + c2) + 2) / 2);
}

float UFL_Easing::EaseInBounce(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, 1 - EaseOutBounce(0, 1, 1 - alpha));
}

float UFL_Easing::EaseOutBounce(float a, float b, float alpha)
{
	const float n1 = 7.5625f;
	const float d1 = 2.75f;

	if (alpha < 1.0f / d1)
	{
		return FMath::Lerp(a, b, n1 * alpha * alpha);
	}
	else if (alpha < 2.0f / d1)
	{
		return FMath::Lerp(a, b, n1 * (alpha -= 1.5f / d1) * alpha + 0.75f);
	}
	else if (alpha < 2.5f / d1)
	{
		return FMath::Lerp(a, b, n1 * (alpha -= 2.25f / d1) * alpha + 0.9375f);
	}
	else
	{
		return FMath::Lerp(a, b, n1 * (alpha -= 2.625f / d1) * alpha + 0.984375f);
	}
}

float UFL_Easing::EaseInOutBounce(float a, float b, float alpha)
{
	return FMath::Lerp(a, b, alpha < 0.5f ? (1 - EaseOutBounce(0, 1, 1 - 2 * alpha)) / 2 : (1 + EaseOutBounce(0, 1, 2 * alpha - 1)) / 2);
}