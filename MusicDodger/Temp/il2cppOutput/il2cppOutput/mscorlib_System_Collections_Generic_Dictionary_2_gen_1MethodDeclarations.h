#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t144;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t362;
// System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>
struct ICollection_1_t1903;
// System.Object
struct Object_t;
// UnityEngine.GUIStyle
struct GUIStyle_t130;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>
struct KeyCollection_t1576;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t388;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1506;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.GUIStyle>
struct IDictionary_2_t1904;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t377;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>[]
struct KeyValuePair_2U5BU5D_t1905;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
struct IEnumerator_1_t1906;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t619;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
#define Dictionary_2__ctor_m9475(__this, method) (( void (*) (Dictionary_2_t144 *, const MethodInfo*))Dictionary_2__ctor_m8697_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m1466(__this, ___comparer, method) (( void (*) (Dictionary_2_t144 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8699_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m9476(__this, ___dictionary, method) (( void (*) (Dictionary_2_t144 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8701_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Int32)
#define Dictionary_2__ctor_m9477(__this, ___capacity, method) (( void (*) (Dictionary_2_t144 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m8703_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m9478(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t144 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8705_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m9479(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t144 *, SerializationInfo_t377 *, StreamingContext_t378 , const MethodInfo*))Dictionary_2__ctor_m8707_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9480(__this, method) (( Object_t* (*) (Dictionary_2_t144 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8709_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9481(__this, method) (( Object_t* (*) (Dictionary_2_t144 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8711_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9482(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t144 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m8713_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9483(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t144 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m8715_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m9484(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t144 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m8717_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m9485(__this, ___key, method) (( bool (*) (Dictionary_2_t144 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m8719_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m9486(__this, ___key, method) (( void (*) (Dictionary_2_t144 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m8721_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9487(__this, method) (( Object_t * (*) (Dictionary_2_t144 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8723_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9488(__this, method) (( bool (*) (Dictionary_2_t144 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8725_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9489(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t144 *, KeyValuePair_2_t1575 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8727_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9490(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t144 *, KeyValuePair_2_t1575 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8729_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9491(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t144 *, KeyValuePair_2U5BU5D_t1905*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8731_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9492(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t144 *, KeyValuePair_2_t1575 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8733_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9493(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t144 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m8735_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9494(__this, method) (( Object_t * (*) (Dictionary_2_t144 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8737_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9495(__this, method) (( Object_t* (*) (Dictionary_2_t144 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8739_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9496(__this, method) (( Object_t * (*) (Dictionary_2_t144 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8741_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Count()
#define Dictionary_2_get_Count_m9497(__this, method) (( int32_t (*) (Dictionary_2_t144 *, const MethodInfo*))Dictionary_2_get_Count_m8743_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Item(TKey)
#define Dictionary_2_get_Item_m9498(__this, ___key, method) (( GUIStyle_t130 * (*) (Dictionary_2_t144 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m8745_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m9499(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t144 *, String_t*, GUIStyle_t130 *, const MethodInfo*))Dictionary_2_set_Item_m8747_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m9500(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t144 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m8749_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m9501(__this, ___size, method) (( void (*) (Dictionary_2_t144 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m8751_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m9502(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t144 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m8753_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m9503(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1575  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t130 *, const MethodInfo*))Dictionary_2_make_pair_m8755_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m9504(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t130 *, const MethodInfo*))Dictionary_2_pick_key_m8757_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m9505(__this /* static, unused */, ___key, ___value, method) (( GUIStyle_t130 * (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t130 *, const MethodInfo*))Dictionary_2_pick_value_m8759_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m9506(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t144 *, KeyValuePair_2U5BU5D_t1905*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m8761_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Resize()
#define Dictionary_2_Resize_m9507(__this, method) (( void (*) (Dictionary_2_t144 *, const MethodInfo*))Dictionary_2_Resize_m8763_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Add(TKey,TValue)
#define Dictionary_2_Add_m9508(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t144 *, String_t*, GUIStyle_t130 *, const MethodInfo*))Dictionary_2_Add_m8765_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Clear()
#define Dictionary_2_Clear_m9509(__this, method) (( void (*) (Dictionary_2_t144 *, const MethodInfo*))Dictionary_2_Clear_m8767_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m9510(__this, ___key, method) (( bool (*) (Dictionary_2_t144 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m8769_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m9511(__this, ___value, method) (( bool (*) (Dictionary_2_t144 *, GUIStyle_t130 *, const MethodInfo*))Dictionary_2_ContainsValue_m8771_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m9512(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t144 *, SerializationInfo_t377 *, StreamingContext_t378 , const MethodInfo*))Dictionary_2_GetObjectData_m8773_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m9513(__this, ___sender, method) (( void (*) (Dictionary_2_t144 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m8775_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Remove(TKey)
#define Dictionary_2_Remove_m9514(__this, ___key, method) (( bool (*) (Dictionary_2_t144 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m8777_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m9515(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t144 *, String_t*, GUIStyle_t130 **, const MethodInfo*))Dictionary_2_TryGetValue_m8779_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Keys()
#define Dictionary_2_get_Keys_m9516(__this, method) (( KeyCollection_t1576 * (*) (Dictionary_2_t144 *, const MethodInfo*))Dictionary_2_get_Keys_m8780_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Values()
#define Dictionary_2_get_Values_m1467(__this, method) (( ValueCollection_t388 * (*) (Dictionary_2_t144 *, const MethodInfo*))Dictionary_2_get_Values_m8782_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m9517(__this, ___key, method) (( String_t* (*) (Dictionary_2_t144 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m8784_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m9518(__this, ___value, method) (( GUIStyle_t130 * (*) (Dictionary_2_t144 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m8786_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m9519(__this, ___pair, method) (( bool (*) (Dictionary_2_t144 *, KeyValuePair_2_t1575 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m8788_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m9520(__this, method) (( Enumerator_t1577  (*) (Dictionary_2_t144 *, const MethodInfo*))Dictionary_2_GetEnumerator_m8789_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m9521(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t620  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t130 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m8791_gshared)(__this /* static, unused */, ___key, ___value, method)
