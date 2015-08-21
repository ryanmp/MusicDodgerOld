#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t1676;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t363;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t1674;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1696;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1525;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m10851_gshared (ThreadSafeDictionary_2_t1676 * __this, ThreadSafeDictionaryValueFactory_2_t1674 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m10851(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t1676 *, ThreadSafeDictionaryValueFactory_2_t1674 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m10851_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10853_gshared (ThreadSafeDictionary_2_t1676 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10853(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1676 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10853_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m10855_gshared (ThreadSafeDictionary_2_t1676 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m10855(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1676 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m10855_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m10857_gshared (ThreadSafeDictionary_2_t1676 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m10857(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1676 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m10857_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m10859_gshared (ThreadSafeDictionary_2_t1676 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10859(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t1676 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m10859_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m10861_gshared (ThreadSafeDictionary_2_t1676 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m10861(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1676 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m10861_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m10863_gshared (ThreadSafeDictionary_2_t1676 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m10863(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t1676 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m10863_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m10865_gshared (ThreadSafeDictionary_2_t1676 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m10865(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1676 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m10865_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m10867_gshared (ThreadSafeDictionary_2_t1676 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m10867(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1676 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m10867_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m10869_gshared (ThreadSafeDictionary_2_t1676 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m10869(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t1676 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m10869_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m10871_gshared (ThreadSafeDictionary_2_t1676 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10871(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t1676 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Add_m10871_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m10873_gshared (ThreadSafeDictionary_2_t1676 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m10873(__this, method) (( void (*) (ThreadSafeDictionary_2_t1676 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m10873_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m10875_gshared (ThreadSafeDictionary_2_t1676 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m10875(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t1676 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m10875_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m10877_gshared (ThreadSafeDictionary_2_t1676 * __this, KeyValuePair_2U5BU5D_t1696* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m10877(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t1676 *, KeyValuePair_2U5BU5D_t1696*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m10877_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m10879_gshared (ThreadSafeDictionary_2_t1676 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m10879(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t1676 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m10879_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m10881_gshared (ThreadSafeDictionary_2_t1676 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m10881(__this, method) (( bool (*) (ThreadSafeDictionary_2_t1676 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m10881_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m10883_gshared (ThreadSafeDictionary_2_t1676 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m10883(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t1676 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m10883_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m10885_gshared (ThreadSafeDictionary_2_t1676 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m10885(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1676 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m10885_gshared)(__this, method)
