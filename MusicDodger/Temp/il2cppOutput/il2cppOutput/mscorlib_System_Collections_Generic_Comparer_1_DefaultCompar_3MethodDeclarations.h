#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t1873;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12645_gshared (DefaultComparer_t1873 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12645(__this, method) (( void (*) (DefaultComparer_t1873 *, const MethodInfo*))DefaultComparer__ctor_m12645_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12646_gshared (DefaultComparer_t1873 * __this, Guid_t44  ___x, Guid_t44  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12646(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t1873 *, Guid_t44 , Guid_t44 , const MethodInfo*))DefaultComparer_Compare_m12646_gshared)(__this, ___x, ___y, method)
