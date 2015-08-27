#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t2193;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t637;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t2191;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2213;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1817;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m16219_gshared (ThreadSafeDictionary_2_t2193 * __this, ThreadSafeDictionaryValueFactory_2_t2191 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m16219(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t2193 *, ThreadSafeDictionaryValueFactory_2_t2191 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m16219_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m16221_gshared (ThreadSafeDictionary_2_t2193 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m16221(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2193 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m16221_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m16223_gshared (ThreadSafeDictionary_2_t2193 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m16223(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2193 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m16223_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m16225_gshared (ThreadSafeDictionary_2_t2193 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m16225(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2193 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m16225_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m16227_gshared (ThreadSafeDictionary_2_t2193 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m16227(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2193 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m16227_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m16229_gshared (ThreadSafeDictionary_2_t2193 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m16229(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2193 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m16229_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m16231_gshared (ThreadSafeDictionary_2_t2193 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m16231(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t2193 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m16231_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m16233_gshared (ThreadSafeDictionary_2_t2193 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m16233(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2193 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m16233_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m16235_gshared (ThreadSafeDictionary_2_t2193 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m16235(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2193 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m16235_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m16237_gshared (ThreadSafeDictionary_2_t2193 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m16237(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2193 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m16237_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m16239_gshared (ThreadSafeDictionary_2_t2193 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m16239(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t2193 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Add_m16239_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m16241_gshared (ThreadSafeDictionary_2_t2193 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m16241(__this, method) (( void (*) (ThreadSafeDictionary_2_t2193 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m16241_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m16243_gshared (ThreadSafeDictionary_2_t2193 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m16243(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2193 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m16243_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m16245_gshared (ThreadSafeDictionary_2_t2193 * __this, KeyValuePair_2U5BU5D_t2213* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m16245(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t2193 *, KeyValuePair_2U5BU5D_t2213*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m16245_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m16247_gshared (ThreadSafeDictionary_2_t2193 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m16247(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t2193 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m16247_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m16249_gshared (ThreadSafeDictionary_2_t2193 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m16249(__this, method) (( bool (*) (ThreadSafeDictionary_2_t2193 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m16249_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m16251_gshared (ThreadSafeDictionary_2_t2193 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m16251(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2193 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m16251_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m16253_gshared (ThreadSafeDictionary_2_t2193 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m16253(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2193 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m16253_gshared)(__this, method)
