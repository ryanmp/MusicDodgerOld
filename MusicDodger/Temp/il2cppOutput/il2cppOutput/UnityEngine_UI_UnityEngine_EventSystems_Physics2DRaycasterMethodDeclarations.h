#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.Physics2DRaycaster
struct Physics2DRaycaster_t135;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t124;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t125;

// System.Void UnityEngine.EventSystems.Physics2DRaycaster::.ctor()
extern "C" void Physics2DRaycaster__ctor_m560 (Physics2DRaycaster_t135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.Physics2DRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void Physics2DRaycaster_Raycast_m561 (Physics2DRaycaster_t135 * __this, PointerEventData_t124 * ___eventData, List_1_t125 * ___resultAppendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
