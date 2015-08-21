#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t154;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t364;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1893;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t1595;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t1596;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1508;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t1911;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1912;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t1913;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t621;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_12MethodDeclarations.h"
#define Dictionary_2__ctor_m9585(__this, method) (( void (*) (Dictionary_2_t154 *, const MethodInfo*))Dictionary_2__ctor_m9586_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m9587(__this, ___comparer, method) (( void (*) (Dictionary_2_t154 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9588_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m9589(__this, ___dictionary, method) (( void (*) (Dictionary_2_t154 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9590_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m2560(__this, ___capacity, method) (( void (*) (Dictionary_2_t154 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9591_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m9592(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t154 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9593_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m9594(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t154 *, SerializationInfo_t379 *, StreamingContext_t380 , const MethodInfo*))Dictionary_2__ctor_m9595_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9596(__this, method) (( Object_t* (*) (Dictionary_2_t154 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9597_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9598(__this, method) (( Object_t* (*) (Dictionary_2_t154 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9599_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9600(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t154 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9601_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9602(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t154 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9603_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m9604(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t154 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9605_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m9606(__this, ___key, method) (( bool (*) (Dictionary_2_t154 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9607_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m9608(__this, ___key, method) (( void (*) (Dictionary_2_t154 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9609_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9610(__this, method) (( Object_t * (*) (Dictionary_2_t154 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9611_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9612(__this, method) (( bool (*) (Dictionary_2_t154 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9613_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9614(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t154 *, KeyValuePair_2_t1594 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9615_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9616(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t154 *, KeyValuePair_2_t1594 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9617_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9618(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t154 *, KeyValuePair_2U5BU5D_t1912*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9619_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9620(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t154 *, KeyValuePair_2_t1594 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9621_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9622(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t154 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9623_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9624(__this, method) (( Object_t * (*) (Dictionary_2_t154 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9625_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9626(__this, method) (( Object_t* (*) (Dictionary_2_t154 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9627_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9628(__this, method) (( Object_t * (*) (Dictionary_2_t154 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9629_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m9630(__this, method) (( int32_t (*) (Dictionary_2_t154 *, const MethodInfo*))Dictionary_2_get_Count_m9631_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
#define Dictionary_2_get_Item_m9632(__this, ___key, method) (( int32_t (*) (Dictionary_2_t154 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m9633_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m9634(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t154 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_set_Item_m9635_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m9636(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t154 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9637_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m9638(__this, ___size, method) (( void (*) (Dictionary_2_t154 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9639_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m9640(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t154 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9641_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m9642(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1594  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_make_pair_m9643_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m9644(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_pick_key_m9645_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m9646(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_pick_value_m9647_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m9648(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t154 *, KeyValuePair_2U5BU5D_t1912*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9649_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Resize()
#define Dictionary_2_Resize_m9650(__this, method) (( void (*) (Dictionary_2_t154 *, const MethodInfo*))Dictionary_2_Resize_m9651_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
#define Dictionary_2_Add_m9652(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t154 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_Add_m9653_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Clear()
#define Dictionary_2_Clear_m9654(__this, method) (( void (*) (Dictionary_2_t154 *, const MethodInfo*))Dictionary_2_Clear_m9655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m9656(__this, ___key, method) (( bool (*) (Dictionary_2_t154 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m9657_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m9658(__this, ___value, method) (( bool (*) (Dictionary_2_t154 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m9659_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m9660(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t154 *, SerializationInfo_t379 *, StreamingContext_t380 , const MethodInfo*))Dictionary_2_GetObjectData_m9661_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m9662(__this, ___sender, method) (( void (*) (Dictionary_2_t154 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9663_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
#define Dictionary_2_Remove_m9664(__this, ___key, method) (( bool (*) (Dictionary_2_t154 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m9665_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m9666(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t154 *, String_t*, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9667_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Keys()
#define Dictionary_2_get_Keys_m9668(__this, method) (( KeyCollection_t1595 * (*) (Dictionary_2_t154 *, const MethodInfo*))Dictionary_2_get_Keys_m9669_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Values()
#define Dictionary_2_get_Values_m9670(__this, method) (( ValueCollection_t1596 * (*) (Dictionary_2_t154 *, const MethodInfo*))Dictionary_2_get_Values_m9671_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m9672(__this, ___key, method) (( String_t* (*) (Dictionary_2_t154 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9673_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m9674(__this, ___value, method) (( int32_t (*) (Dictionary_2_t154 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9675_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m9676(__this, ___pair, method) (( bool (*) (Dictionary_2_t154 *, KeyValuePair_2_t1594 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9677_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m9678(__this, method) (( Enumerator_t1597  (*) (Dictionary_2_t154 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9679_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int32>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m9680(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t622  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9681_gshared)(__this /* static, unused */, ___key, ___value, method)
