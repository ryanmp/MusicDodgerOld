#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t124;
// UnityEngine.GUISkin
struct GUISkin_t122;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t120;
// UnityEngine.GUIStyle
struct GUIStyle_t130;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m411 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m412 (Object_t * __this /* static, unused */, DateTime_t125  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m413 (Object_t * __this /* static, unused */, GUISkin_t122 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t122 * GUI_get_skin_m414 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m415 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m416 (Object_t * __this /* static, unused */, WindowFunction_t120 * ___func, int32_t ___id, GUISkin_t122 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t130 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
