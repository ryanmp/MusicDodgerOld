#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t77;
struct Touch_t77_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m1555 (Touch_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t66  Touch_get_position_m291 (Touch_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m293 (Touch_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t77_marshal(const Touch_t77& unmarshaled, Touch_t77_marshaled& marshaled);
void Touch_t77_marshal_back(const Touch_t77_marshaled& marshaled, Touch_t77& unmarshaled);
void Touch_t77_marshal_cleanup(Touch_t77_marshaled& marshaled);
