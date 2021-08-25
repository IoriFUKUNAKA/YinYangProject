// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FL_Easing.generated.h"

/**
 * イージング関数チートシート(https://easings.net/ja)より
 */
UCLASS()
class YINYANGPROJECT_API UFL_Easing : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInSine(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseOutSine(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInOutSine(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInCubic(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseOutCubic(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInOutCubic(float a, float b, float alpha);
	
	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInQuint(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseOutQuint(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInOutQuint(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInCirc(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseOutCirc(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInOutCirc(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInElastic(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseOutElastic(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInOutElastic(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInQuad(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseOutQuad(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInOutQuad(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInQuart(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseOutQuart(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInOutQuart(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInExpo(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseOutExpo(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInOutExpo(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInBack(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseOutBack(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInOutBack(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInBounce(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseOutBounce(float a, float b, float alpha);

	UFUNCTION(BlueprintPure, Category = "EasingCheatSheet")
	static float EaseInOutBounce(float a, float b, float alpha);
};
