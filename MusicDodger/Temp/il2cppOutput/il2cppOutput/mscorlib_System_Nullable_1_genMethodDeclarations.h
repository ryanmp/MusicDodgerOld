#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1738;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m10407_gshared (Nullable_1_t1738 * __this, TimeSpan_t800  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m10407(__this, ___value, method) (( void (*) (Nullable_1_t1738 *, TimeSpan_t800 , const MethodInfo*))Nullable_1__ctor_m10407_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m10408_gshared (Nullable_1_t1738 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m10408(__this, method) (( bool (*) (Nullable_1_t1738 *, const MethodInfo*))Nullable_1_get_HasValue_m10408_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t800  Nullable_1_get_Value_m10409_gshared (Nullable_1_t1738 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m10409(__this, method) (( TimeSpan_t800  (*) (Nullable_1_t1738 *, const MethodInfo*))Nullable_1_get_Value_m10409_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m18179_gshared (Nullable_1_t1738 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m18179(__this, ___other, method) (( bool (*) (Nullable_1_t1738 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m18179_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m18180_gshared (Nullable_1_t1738 * __this, Nullable_1_t1738  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m18180(__this, ___other, method) (( bool (*) (Nullable_1_t1738 *, Nullable_1_t1738 , const MethodInfo*))Nullable_1_Equals_m18180_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m18181_gshared (Nullable_1_t1738 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m18181(__this, method) (( int32_t (*) (Nullable_1_t1738 *, const MethodInfo*))Nullable_1_GetHashCode_m18181_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m18182_gshared (Nullable_1_t1738 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m18182(__this, method) (( String_t* (*) (Nullable_1_t1738 *, const MethodInfo*))Nullable_1_ToString_m18182_gshared)(__this, method)
