﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t539;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.MethodInfo::.ctor()
extern "C" void MethodInfo__ctor_m8013 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Reflection.MethodInfo::get_MemberType()
extern "C" int32_t MethodInfo_get_MemberType_m8014 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MethodInfo::get_ReturnType()
extern "C" Type_t * MethodInfo_get_ReturnType_m8015 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[])
extern "C" MethodInfo_t * MethodInfo_MakeGenericMethod_m8016 (MethodInfo_t * __this, TypeU5BU5D_t539* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodInfo::GetGenericArguments()
extern "C" TypeU5BU5D_t539* MethodInfo_GetGenericArguments_m8017 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethod()
extern "C" bool MethodInfo_get_IsGenericMethod_m8018 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethodDefinition()
extern "C" bool MethodInfo_get_IsGenericMethodDefinition_m8019 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_ContainsGenericParameters()
extern "C" bool MethodInfo_get_ContainsGenericParameters_m8020 (MethodInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
