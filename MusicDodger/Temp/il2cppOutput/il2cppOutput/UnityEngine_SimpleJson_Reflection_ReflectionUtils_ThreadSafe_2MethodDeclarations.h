#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ThreadSafeDictionary_2_t418;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t1953;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ICollection_1_t1960;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct IDictionary_2_t372;
// System.Type
struct Type_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ThreadSafeDictionaryValueFactory_2_t417;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>[]
struct KeyValuePair_2U5BU5D_t1961;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>>
struct IEnumerator_1_t1962;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_6MethodDeclarations.h"
#define ThreadSafeDictionary_2__ctor_m1571(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t418 *, ThreadSafeDictionaryValueFactory_2_t417 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m10862_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::System.Collections.IEnumerable.GetEnumerator()
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10955(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t418 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10864_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Get(TKey)
#define ThreadSafeDictionary_2_Get_m10956(__this, ___key, method) (( Object_t* (*) (ThreadSafeDictionary_2_t418 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m10866_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::AddValue(TKey)
#define ThreadSafeDictionary_2_AddValue_m10957(__this, ___key, method) (( Object_t* (*) (ThreadSafeDictionary_2_t418 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m10868_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Add(TKey,TValue)
#define ThreadSafeDictionary_2_Add_m10958(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t418 *, Type_t *, Object_t*, const MethodInfo*))ThreadSafeDictionary_2_Add_m10870_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Keys()
#define ThreadSafeDictionary_2_get_Keys_m10959(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t418 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m10872_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::TryGetValue(TKey,TValue&)
#define ThreadSafeDictionary_2_TryGetValue_m10960(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t418 *, Type_t *, Object_t**, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m10874_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Values()
#define ThreadSafeDictionary_2_get_Values_m10961(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t418 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m10876_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Item(TKey)
#define ThreadSafeDictionary_2_get_Item_m10962(__this, ___key, method) (( Object_t* (*) (ThreadSafeDictionary_2_t418 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m10878_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::set_Item(TKey,TValue)
#define ThreadSafeDictionary_2_set_Item_m10963(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t418 *, Type_t *, Object_t*, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m10880_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Add_m10964(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t418 *, KeyValuePair_2_t1686 , const MethodInfo*))ThreadSafeDictionary_2_Add_m10882_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Clear()
#define ThreadSafeDictionary_2_Clear_m10965(__this, method) (( void (*) (ThreadSafeDictionary_2_t418 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m10884_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Contains_m10966(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t418 *, KeyValuePair_2_t1686 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m10886_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define ThreadSafeDictionary_2_CopyTo_m10967(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t418 *, KeyValuePair_2U5BU5D_t1961*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m10888_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Count()
#define ThreadSafeDictionary_2_get_Count_m10968(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t418 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m10890_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_IsReadOnly()
#define ThreadSafeDictionary_2_get_IsReadOnly_m10969(__this, method) (( bool (*) (ThreadSafeDictionary_2_t418 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m10892_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Remove_m10970(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t418 *, KeyValuePair_2_t1686 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m10894_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::GetEnumerator()
#define ThreadSafeDictionary_2_GetEnumerator_m10971(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t418 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m10896_gshared)(__this, method)
