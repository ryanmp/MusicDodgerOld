#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t130;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2410;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>
struct ICollection_1_t2440;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t124;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct KeyCollection_t1921;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct ValueCollection_t323;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1906;
// System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct IDictionary_2_t2441;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t649;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>[]
struct KeyValuePair_2U5BU5D_t2442;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
struct IEnumerator_1_t2443;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t896;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_16MethodDeclarations.h"
#define Dictionary_2__ctor_m1554(__this, method) (( void (*) (Dictionary_2_t130 *, const MethodInfo*))Dictionary_2__ctor_m12160_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m12161(__this, ___comparer, method) (( void (*) (Dictionary_2_t130 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12162_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m12163(__this, ___dictionary, method) (( void (*) (Dictionary_2_t130 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12164_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Int32)
#define Dictionary_2__ctor_m12165(__this, ___capacity, method) (( void (*) (Dictionary_2_t130 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12166_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m12167(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t130 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12168_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m12169(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t130 *, SerializationInfo_t649 *, StreamingContext_t650 , const MethodInfo*))Dictionary_2__ctor_m12170_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12171(__this, method) (( Object_t* (*) (Dictionary_2_t130 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12172_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12173(__this, method) (( Object_t* (*) (Dictionary_2_t130 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12174_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12175(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t130 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12176_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12177(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t130 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12178_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m12179(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t130 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12180_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m12181(__this, ___key, method) (( bool (*) (Dictionary_2_t130 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12182_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m12183(__this, ___key, method) (( void (*) (Dictionary_2_t130 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12184_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12185(__this, method) (( bool (*) (Dictionary_2_t130 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12186_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12187(__this, method) (( Object_t * (*) (Dictionary_2_t130 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12188_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12189(__this, method) (( bool (*) (Dictionary_2_t130 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12190_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12191(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t130 *, KeyValuePair_2_t324 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12192_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12193(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t130 *, KeyValuePair_2_t324 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12194_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12195(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t130 *, KeyValuePair_2U5BU5D_t2442*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12196_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12197(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t130 *, KeyValuePair_2_t324 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12198_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12199(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t130 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12200_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12201(__this, method) (( Object_t * (*) (Dictionary_2_t130 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12202_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12203(__this, method) (( Object_t* (*) (Dictionary_2_t130 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12204_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12205(__this, method) (( Object_t * (*) (Dictionary_2_t130 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12206_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Count()
#define Dictionary_2_get_Count_m12207(__this, method) (( int32_t (*) (Dictionary_2_t130 *, const MethodInfo*))Dictionary_2_get_Count_m12208_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Item(TKey)
#define Dictionary_2_get_Item_m12209(__this, ___key, method) (( PointerEventData_t124 * (*) (Dictionary_2_t130 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m12210_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m12211(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t130 *, int32_t, PointerEventData_t124 *, const MethodInfo*))Dictionary_2_set_Item_m12212_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m12213(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t130 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12214_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m12215(__this, ___size, method) (( void (*) (Dictionary_2_t130 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12216_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m12217(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t130 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12218_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m12219(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t324  (*) (Object_t * /* static, unused */, int32_t, PointerEventData_t124 *, const MethodInfo*))Dictionary_2_make_pair_m12220_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m12221(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, PointerEventData_t124 *, const MethodInfo*))Dictionary_2_pick_key_m12222_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m12223(__this /* static, unused */, ___key, ___value, method) (( PointerEventData_t124 * (*) (Object_t * /* static, unused */, int32_t, PointerEventData_t124 *, const MethodInfo*))Dictionary_2_pick_value_m12224_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m12225(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t130 *, KeyValuePair_2U5BU5D_t2442*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12226_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Resize()
#define Dictionary_2_Resize_m12227(__this, method) (( void (*) (Dictionary_2_t130 *, const MethodInfo*))Dictionary_2_Resize_m12228_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Add(TKey,TValue)
#define Dictionary_2_Add_m12229(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t130 *, int32_t, PointerEventData_t124 *, const MethodInfo*))Dictionary_2_Add_m12230_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Clear()
#define Dictionary_2_Clear_m12231(__this, method) (( void (*) (Dictionary_2_t130 *, const MethodInfo*))Dictionary_2_Clear_m12232_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m12233(__this, ___key, method) (( bool (*) (Dictionary_2_t130 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m12234_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m12235(__this, ___value, method) (( bool (*) (Dictionary_2_t130 *, PointerEventData_t124 *, const MethodInfo*))Dictionary_2_ContainsValue_m12236_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m12237(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t130 *, SerializationInfo_t649 *, StreamingContext_t650 , const MethodInfo*))Dictionary_2_GetObjectData_m12238_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m12239(__this, ___sender, method) (( void (*) (Dictionary_2_t130 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12240_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Remove(TKey)
#define Dictionary_2_Remove_m12241(__this, ___key, method) (( bool (*) (Dictionary_2_t130 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m12242_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m12243(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t130 *, int32_t, PointerEventData_t124 **, const MethodInfo*))Dictionary_2_TryGetValue_m12244_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Keys()
#define Dictionary_2_get_Keys_m12245(__this, method) (( KeyCollection_t1921 * (*) (Dictionary_2_t130 *, const MethodInfo*))Dictionary_2_get_Keys_m12246_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Values()
#define Dictionary_2_get_Values_m1562(__this, method) (( ValueCollection_t323 * (*) (Dictionary_2_t130 *, const MethodInfo*))Dictionary_2_get_Values_m12247_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m12248(__this, ___key, method) (( int32_t (*) (Dictionary_2_t130 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12249_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m12250(__this, ___value, method) (( PointerEventData_t124 * (*) (Dictionary_2_t130 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12251_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m12252(__this, ___pair, method) (( bool (*) (Dictionary_2_t130 *, KeyValuePair_2_t324 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12253_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m1568(__this, method) (( Enumerator_t325  (*) (Dictionary_2_t130 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12254_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m12255(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t897  (*) (Object_t * /* static, unused */, int32_t, PointerEventData_t124 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12256_gshared)(__this /* static, unused */, ___key, ___value, method)
