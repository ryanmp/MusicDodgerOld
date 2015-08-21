#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Component
struct Component_t69;
// UnityEngine.Transform
struct Transform_t73;
// UnityEngine.GameObject
struct GameObject_t58;
// System.Type
struct Type_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m905 (Component_t69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t73 * Component_get_transform_m255 (Component_t69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t58 * Component_get_gameObject_m240 (Component_t69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void Component_GetComponentFastPath_m906 (Component_t69 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
