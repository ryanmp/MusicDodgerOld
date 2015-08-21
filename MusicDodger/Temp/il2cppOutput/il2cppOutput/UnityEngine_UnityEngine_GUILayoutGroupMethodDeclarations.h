#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t131;
// UnityEngine.RectOffset
struct RectOffset_t138;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t348;
// UnityEngine.GUIStyle
struct GUIStyle_t134;
// System.String
struct String_t;

// System.Void UnityEngine.GUILayoutGroup::.ctor()
extern "C" void GUILayoutGroup__ctor_m454 (GUILayoutGroup_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
extern "C" RectOffset_t138 * GUILayoutGroup_get_margin_m455 (GUILayoutGroup_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutGroup_ApplyOptions_m456 (GUILayoutGroup_t131 * __this, GUILayoutOptionU5BU5D_t348* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutGroup_ApplyStyleSettings_m457 (GUILayoutGroup_t131 * __this, GUIStyle_t134 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C" void GUILayoutGroup_ResetCursor_m458 (GUILayoutGroup_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
extern "C" void GUILayoutGroup_CalcWidth_m459 (GUILayoutGroup_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
extern "C" void GUILayoutGroup_SetHorizontal_m460 (GUILayoutGroup_t131 * __this, float ___x, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern "C" void GUILayoutGroup_CalcHeight_m461 (GUILayoutGroup_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern "C" void GUILayoutGroup_SetVertical_m462 (GUILayoutGroup_t131 * __this, float ___y, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutGroup::ToString()
extern "C" String_t* GUILayoutGroup_ToString_m463 (GUILayoutGroup_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
