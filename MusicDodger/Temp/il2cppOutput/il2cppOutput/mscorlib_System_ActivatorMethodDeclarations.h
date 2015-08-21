#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Activator
struct Activator_t1344;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t270;
// System.Reflection.Binder
struct Binder_t438;
// System.Globalization.CultureInfo
struct CultureInfo_t405;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Object System.Activator::CreateInstance(System.Type)
extern "C" Object_t * Activator_CreateInstance_m7725 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
extern "C" Object_t * Activator_CreateInstance_m7726 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t270* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[],System.Object[])
extern "C" Object_t * Activator_CreateInstance_m7727 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t270* ___args, ObjectU5BU5D_t270* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo,System.Object[])
extern "C" Object_t * Activator_CreateInstance_m7728 (Object_t * __this /* static, unused */, Type_t * ___type, int32_t ___bindingAttr, Binder_t438 * ___binder, ObjectU5BU5D_t270* ___args, CultureInfo_t405 * ___culture, ObjectU5BU5D_t270* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Boolean)
extern "C" Object_t * Activator_CreateInstance_m2553 (Object_t * __this /* static, unused */, Type_t * ___type, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Activator::CheckType(System.Type)
extern "C" void Activator_CheckType_m7729 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Activator::CheckAbstractType(System.Type)
extern "C" void Activator_CheckAbstractType_m7730 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstanceInternal(System.Type)
extern "C" Object_t * Activator_CreateInstanceInternal_m7731 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
