#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LevelSettings
struct LevelSettings_t62;
// UnityEngine.GameObject
struct GameObject_t61;

// System.Void LevelSettings::.ctor()
extern "C" void LevelSettings__ctor_m228 (LevelSettings_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelSettings::.cctor()
extern "C" void LevelSettings__cctor_m229 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelSettings::Awake()
extern "C" void LevelSettings_Awake_m230 (LevelSettings_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelSettings::Start()
extern "C" void LevelSettings_Start_m231 (LevelSettings_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject LevelSettings::GenEnemy(System.Int32,System.Single,System.Single)
extern "C" GameObject_t61 * LevelSettings_GenEnemy_m232 (LevelSettings_t62 * __this, int32_t ___i, float ___velocity, float ___note, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelSettings::Update()
extern "C" void LevelSettings_Update_m233 (LevelSettings_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
