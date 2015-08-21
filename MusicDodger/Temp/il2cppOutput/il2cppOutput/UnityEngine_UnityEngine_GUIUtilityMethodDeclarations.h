#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIUtility
struct GUIUtility_t143;
// UnityEngine.GUISkin
struct GUISkin_t126;
// System.Exception
struct Exception_t27;

// System.Void UnityEngine.GUIUtility::.cctor()
extern "C" void GUIUtility__cctor_m470 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern "C" GUISkin_t126 * GUIUtility_GetDefaultSkin_m471 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C" GUISkin_t126 * GUIUtility_Internal_GetDefaultSkin_m472 (Object_t * __this /* static, unused */, int32_t ___skinMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
extern "C" void GUIUtility_BeginGUI_m473 (Object_t * __this /* static, unused */, int32_t ___skinMode, int32_t ___instanceID, int32_t ___useGUILayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C" void GUIUtility_Internal_ExitGUI_m474 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
extern "C" void GUIUtility_EndGUI_m475 (Object_t * __this /* static, unused */, int32_t ___layoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
extern "C" bool GUIUtility_EndGUIFromException_m476 (Object_t * __this /* static, unused */, Exception_t27 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
extern "C" void GUIUtility_CheckOnGUI_m477 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
extern "C" int32_t GUIUtility_Internal_GetGUIDepth_m478 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
