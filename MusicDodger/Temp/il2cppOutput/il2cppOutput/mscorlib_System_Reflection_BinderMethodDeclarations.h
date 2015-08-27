#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Binder
struct Binder_t706;
// System.Reflection.MethodBase
struct MethodBase_t709;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1730;
// System.Object[]
struct ObjectU5BU5D_t321;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t707;
// System.Globalization.CultureInfo
struct CultureInfo_t674;
// System.String[]
struct StringU5BU5D_t45;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t539;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t702;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t699;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m7961 (Binder_t706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C" void Binder__cctor_m7962 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t706 * Binder_get_DefaultBinder_m7963 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C" bool Binder_ConvertArgs_m7964 (Object_t * __this /* static, unused */, Binder_t706 * ___binder, ObjectU5BU5D_t321* ___args, ParameterInfoU5BU5D_t699* ___pinfo, CultureInfo_t674 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m7965 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t709 * Binder_FindMostDerivedMatch_m7966 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t1730* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
