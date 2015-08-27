#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
struct EqualityComparer_1_t2400;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void EqualityComparer_1__ctor_m18209_gshared (EqualityComparer_1_t2400 * __this, const MethodInfo* method);
#define EqualityComparer_1__ctor_m18209(__this, method) (( void (*) (EqualityComparer_1_t2400 *, const MethodInfo*))EqualityComparer_1__ctor_m18209_gshared)(__this, method)
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.cctor()
extern "C" void EqualityComparer_1__cctor_m18210_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1__cctor_m18210(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1__cctor_m18210_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m18211_gshared (EqualityComparer_1_t2400 * __this, Object_t * ___obj, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m18211(__this, ___obj, method) (( int32_t (*) (EqualityComparer_1_t2400 *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m18211_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m18212_gshared (EqualityComparer_1_t2400 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m18212(__this, ___x, ___y, method) (( bool (*) (EqualityComparer_1_t2400 *, Object_t *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m18212_gshared)(__this, ___x, ___y, method)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::get_Default()
extern "C" EqualityComparer_1_t2400 * EqualityComparer_1_get_Default_m18213_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1_get_Default_m18213(__this /* static, unused */, method) (( EqualityComparer_1_t2400 * (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1_get_Default_m18213_gshared)(__this /* static, unused */, method)
