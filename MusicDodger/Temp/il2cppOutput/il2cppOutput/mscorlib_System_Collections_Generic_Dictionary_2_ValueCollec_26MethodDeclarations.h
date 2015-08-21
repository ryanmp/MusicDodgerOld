#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>
struct Enumerator_t1771;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1762;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11998_gshared (Enumerator_t1771 * __this, Dictionary_2_t1762 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m11998(__this, ___host, method) (( void (*) (Enumerator_t1771 *, Dictionary_2_t1762 *, const MethodInfo*))Enumerator__ctor_m11998_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11999_gshared (Enumerator_t1771 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11999(__this, method) (( Object_t * (*) (Enumerator_t1771 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11999_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m12000_gshared (Enumerator_t1771 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12000(__this, method) (( void (*) (Enumerator_t1771 *, const MethodInfo*))Enumerator_Dispose_m12000_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12001_gshared (Enumerator_t1771 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12001(__this, method) (( bool (*) (Enumerator_t1771 *, const MethodInfo*))Enumerator_MoveNext_m12001_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" bool Enumerator_get_Current_m12002_gshared (Enumerator_t1771 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12002(__this, method) (( bool (*) (Enumerator_t1771 *, const MethodInfo*))Enumerator_get_Current_m12002_gshared)(__this, method)
