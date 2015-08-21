#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Attribute
struct Attribute_t166;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t430;

// System.Void System.Attribute::.ctor()
extern "C" void Attribute__ctor_m1473 (Attribute_t166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::CheckParameters(System.Object,System.Type)
extern "C" void Attribute_CheckParameters_m3630 (Object_t * __this /* static, unused */, Object_t * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
extern "C" Attribute_t166 * Attribute_GetCustomAttribute_m3631 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C" Attribute_t166 * Attribute_GetCustomAttribute_m3632 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Attribute::GetHashCode()
extern "C" int32_t Attribute_GetHashCode_m1600 (Attribute_t166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type)
extern "C" bool Attribute_IsDefined_m3633 (Object_t * __this /* static, unused */, ParameterInfo_t430 * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
extern "C" bool Attribute_IsDefined_m3634 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C" bool Attribute_IsDefined_m3635 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type,System.Boolean)
extern "C" bool Attribute_IsDefined_m3636 (Object_t * __this /* static, unused */, ParameterInfo_t430 * ___element, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::Equals(System.Object)
extern "C" bool Attribute_Equals_m3637 (Attribute_t166 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
