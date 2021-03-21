// Copyright Epic Games, Inc. All Rights Reserved.

#include "AppUtilBPLibrary.h"
#include "AppUtil.h"

UAppUtilBPLibrary::UAppUtilBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

/// <summary>
/// �Q�[���p�b�h�̐ڑ��𔻒肷��
/// </summary>
/// <returns>true:�ڑ����^false:���ڑ�</returns>
bool UAppUtilBPLibrary::IsGamePadConnected()
{
	auto genericApplication = FSlateApplication::Get().GetPlatformApplication();

	if (genericApplication.Get() != nullptr && genericApplication->IsGamepadAttached())
	{
		return true;
	}

	return false;
}

