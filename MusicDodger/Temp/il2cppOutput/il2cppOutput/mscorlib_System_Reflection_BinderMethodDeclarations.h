#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Binder
struct Binder_t438;
// System.Reflection.MethodBase
struct MethodBase_t441;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1453;
// System.Object[]
struct ObjectU5BU5D_t270;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t439;
// System.Globalization.CultureInfo
struct CultureInfo_t405;
// System.String[]
struct StringU5BU5D_t45;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t267;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t434;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t431;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m6138 (Binder_t438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m6139 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t438 * Binder_get_DefaultBinder_m6140 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m6141 (Object_t * __this /* static, unused */, Binder_t438 * ___binder, ObjectU5BU5D_t270* ___args, ParameterInfoU5BU5D_t431* ___pinfo, CultureInfo_t405 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m6142 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t441 * Binder_FindMostDerivedMatch_m6143 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1453* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
