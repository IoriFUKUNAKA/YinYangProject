// Copyright Epic Games, Inc. All Rights Reserved.

#include "AppUtilBPLibrary.h"
#include "AppUtil.h"

UAppUtilBPLibrary::UAppUtilBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

/// <summary>
/// ゲームパッドの接続を判定する
/// </summary>
/// <returns>true:接続中／false:未接続</returns>
bool UAppUtilBPLibrary::IsGamePadConnected()
{
	auto genericApplication = FSlateApplication::Get().GetPlatformApplication();

	if (genericApplication.Get() != nullptr && genericApplication->IsGamepadAttached())
	{
		return true;
	}

	return false;
}

