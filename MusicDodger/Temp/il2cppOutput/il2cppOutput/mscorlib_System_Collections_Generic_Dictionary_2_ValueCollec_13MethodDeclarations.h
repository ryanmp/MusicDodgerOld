﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
struct Enumerator_t1631;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t1622;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10313_gshared (Enumerator_t1631 * __this, Dictionary_2_t1622 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m10313(__this, ___host, method) (( void (*) (Enumerator_t1631 *, Dictionary_2_t1622 *, const MethodInfo*))Enumerator__ctor_m10313_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10314_gshared (Enumerator_t1631 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10314(__this, method) (( Object_t * (*) (Enumerator_t1631 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10314_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m10315_gshared (Enumerator_t1631 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10315(__this, method) (( void (*) (Enumerator_t1631 *, const MethodInfo*))Enumerator_Dispose_m10315_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10316_gshared (Enumerator_t1631 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10316(__this, method) (( bool (*) (Enumerator_t1631 *, const MethodInfo*))Enumerator_MoveNext_m10316_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" int64_t Enumerator_get_Current_m10317_gshared (Enumerator_t1631 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10317(__this, method) (( int64_t (*) (Enumerator_t1631 *, const MethodInfo*))Enumerator_get_Current_m10317_gshared)(__this, method)
