﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CultureAwareComparer
struct CultureAwareComparer_t1683;
// System.Globalization.CultureInfo
struct CultureInfo_t674;
// System.String
struct String_t;

// System.Void System.CultureAwareComparer::.ctor(System.Globalization.CultureInfo,System.Boolean)
extern "C" void CultureAwareComparer__ctor_m10234 (CultureAwareComparer_t1683 * __this, CultureInfo_t674 * ___ci, bool ___ignore_case, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::Compare(System.String,System.String)
extern "C" int32_t CultureAwareComparer_Compare_m10235 (CultureAwareComparer_t1683 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CultureAwareComparer::Equals(System.String,System.String)
extern "C" bool CultureAwareComparer_Equals_m10236 (CultureAwareComparer_t1683 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::GetHashCode(System.String)
extern "C" int32_t CultureAwareComparer_GetHashCode_m10237 (CultureAwareComparer_t1683 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;