#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1459;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m8568_gshared (Nullable_1_t1459 * __this, TimeSpan_t523  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m8568(__this, ___value, method) (( void (*) (Nullable_1_t1459 *, TimeSpan_t523 , const MethodInfo*))Nullable_1__ctor_m8568_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m8569_gshared (Nullable_1_t1459 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m8569(__this, method) (( bool (*) (Nullable_1_t1459 *, const MethodInfo*))Nullable_1_get_HasValue_m8569_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t523  Nullable_1_get_Value_m8570_gshared (Nullable_1_t1459 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m8570(__this, method) (( TimeSpan_t523  (*) (Nullable_1_t1459 *, const MethodInfo*))Nullable_1_get_Value_m8570_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m12625_gshared (Nullable_1_t1459 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m12625(__this, ___other, method) (( bool (*) (Nullable_1_t1459 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m12625_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m12626_gshared (Nullable_1_t1459 * __this, Nullable_1_t1459  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m12626(__this, ___other, method) (( bool (*) (Nullable_1_t1459 *, Nullable_1_t1459 , const MethodInfo*))Nullable_1_Equals_m12626_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m12627_gshared (Nullable_1_t1459 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m12627(__this, method) (( int32_t (*) (Nullable_1_t1459 *, const MethodInfo*))Nullable_1_GetHashCode_m12627_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m12628_gshared (Nullable_1_t1459 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m12628(__this, method) (( String_t* (*) (Nullable_1_t1459 *, const MethodInfo*))Nullable_1_ToString_m12628_gshared)(__this, method)
