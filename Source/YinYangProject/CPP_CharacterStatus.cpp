// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_CharacterStatus.h"

/// <summary>
/// コンストラクタ
/// </summary>
CPP_CharacterStatus::CPP_CharacterStatus()
{
}

/// <summary>
/// デストラクタ
/// </summary>
CPP_CharacterStatus::~CPP_CharacterStatus()
{
}

/// <summary>
/// ステータス状況の更新
/// </summary>
UFUNCTION(BlueprintImplementableEvent)
void CPP_CharacterStatus::UpdateStatus(float _DeltaTime)
{
	// 生存時間が設定されてなければ処理しない
	if (m_LifeTime == 0) return;

	// 死んでいなければ経過時間を加算
	if(!IsDead())
	{
		m_Elapsed += _DeltaTime;
	}
}

/// <summary>
/// 生存を確かめる
/// </summary>
UFUNCTION(BlueprintImplementableEvent)
bool CPP_CharacterStatus::IsDead()
{
	return m_Elapsed >= m_LifeTime;
}