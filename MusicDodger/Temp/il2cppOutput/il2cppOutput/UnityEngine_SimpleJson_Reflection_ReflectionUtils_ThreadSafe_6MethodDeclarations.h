#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t1678;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t365;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t1676;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1698;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1527;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m10862_gshared (ThreadSafeDictionary_2_t1678 * __this, ThreadSafeDictionaryValueFactory_2_t1676 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m10862(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t1678 *, ThreadSafeDictionaryValueFactory_2_t1676 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m10862_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10864_gshared (ThreadSafeDictionary_2_t1678 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10864(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1678 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10864_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m10866_gshared (ThreadSafeDictionary_2_t1678 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m10866(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1678 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m10866_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m10868_gshared (ThreadSafeDictionary_2_t1678 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m10868(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1678 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m10868_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m10870_gshared (ThreadSafeDictionary_2_t1678 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10870(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t1678 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m10870_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m10872_gshared (ThreadSafeDictionary_2_t1678 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m10872(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1678 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m10872_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m10874_gshared (ThreadSafeDictionary_2_t1678 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m10874(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t1678 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m10874_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m10876_gshared (ThreadSafeDictionary_2_t1678 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m10876(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1678 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m10876_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m10878_gshared (ThreadSafeDictionary_2_t1678 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m10878(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1678 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m10878_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m10880_gshared (ThreadSafeDictionary_2_t1678 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m10880(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t1678 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m10880_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m10882_gshared (ThreadSafeDictionary_2_t1678 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10882(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t1678 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Add_m10882_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m10884_gshared (ThreadSafeDictionary_2_t1678 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m10884(__this, method) (( void (*) (ThreadSafeDictionary_2_t1678 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m10884_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m10886_gshared (ThreadSafeDictionary_2_t1678 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m10886(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t1678 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m10886_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m10888_gshared (ThreadSafeDictionary_2_t1678 * __this, KeyValuePair_2U5BU5D_t1698* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m10888(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t1678 *, KeyValuePair_2U5BU5D_t1698*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m10888_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m10890_gshared (ThreadSafeDictionary_2_t1678 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m10890(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t1678 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m10890_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m10892_gshared (ThreadSafeDictionary_2_t1678 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m10892(__this, method) (( bool (*) (ThreadSafeDictionary_2_t1678 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m10892_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m10894_gshared (ThreadSafeDictionary_2_t1678 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m10894(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t1678 *, KeyValuePair_2_t40 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m10894_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m10896_gshared (ThreadSafeDictionary_2_t1678 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m10896(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1678 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m10896_gshared)(__this, method)
