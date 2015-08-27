#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t432;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t636;
// System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>
struct ICollection_1_t2531;
// System.Object
struct Object_t;
// UnityEngine.GUIStyle
struct GUIStyle_t420;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>
struct KeyCollection_t2080;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t659;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1799;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.GUIStyle>
struct IDictionary_2_t2532;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t649;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>[]
struct KeyValuePair_2U5BU5D_t2533;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
struct IEnumerator_1_t2534;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t896;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15MethodDeclarations.h"
#define Dictionary_2__ctor_m14518(__this, method) (( void (*) (Dictionary_2_t432 *, const MethodInfo*))Dictionary_2__ctor_m10703_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m3276(__this, ___comparer, method) (( void (*) (Dictionary_2_t432 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10705_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m14519(__this, ___dictionary, method) (( void (*) (Dictionary_2_t432 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10707_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Int32)
#define Dictionary_2__ctor_m14520(__this, ___capacity, method) (( void (*) (Dictionary_2_t432 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10709_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m14521(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t432 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10711_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m14522(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t432 *, SerializationInfo_t649 *, StreamingContext_t650 , const MethodInfo*))Dictionary_2__ctor_m10713_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14523(__this, method) (( Object_t* (*) (Dictionary_2_t432 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10715_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14524(__this, method) (( Object_t* (*) (Dictionary_2_t432 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10717_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14525(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t432 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10719_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14526(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t432 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10721_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m14527(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t432 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10723_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m14528(__this, ___key, method) (( bool (*) (Dictionary_2_t432 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10725_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m14529(__this, ___key, method) (( void (*) (Dictionary_2_t432 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10727_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14530(__this, method) (( bool (*) (Dictionary_2_t432 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m10729_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14531(__this, method) (( Object_t * (*) (Dictionary_2_t432 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10731_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14532(__this, method) (( bool (*) (Dictionary_2_t432 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10733_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14533(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t432 *, KeyValuePair_2_t2079 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10735_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14534(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t432 *, KeyValuePair_2_t2079 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10737_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14535(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t432 *, KeyValuePair_2U5BU5D_t2533*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10739_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14536(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t432 *, KeyValuePair_2_t2079 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10741_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14537(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t432 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10743_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14538(__this, method) (( Object_t * (*) (Dictionary_2_t432 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10745_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14539(__this, method) (( Object_t* (*) (Dictionary_2_t432 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10747_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14540(__this, method) (( Object_t * (*) (Dictionary_2_t432 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10749_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Count()
#define Dictionary_2_get_Count_m14541(__this, method) (( int32_t (*) (Dictionary_2_t432 *, const MethodInfo*))Dictionary_2_get_Count_m10751_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Item(TKey)
#define Dictionary_2_get_Item_m14542(__this, ___key, method) (( GUIStyle_t420 * (*) (Dictionary_2_t432 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m10753_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m14543(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t432 *, String_t*, GUIStyle_t420 *, const MethodInfo*))Dictionary_2_set_Item_m10755_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m14544(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t432 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10757_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m14545(__this, ___size, method) (( void (*) (Dictionary_2_t432 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10759_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m14546(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t432 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10761_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m14547(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2079  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t420 *, const MethodInfo*))Dictionary_2_make_pair_m10763_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m14548(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t420 *, const MethodInfo*))Dictionary_2_pick_key_m10765_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m14549(__this /* static, unused */, ___key, ___value, method) (( GUIStyle_t420 * (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t420 *, const MethodInfo*))Dictionary_2_pick_value_m10767_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m14550(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t432 *, KeyValuePair_2U5BU5D_t2533*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10769_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Resize()
#define Dictionary_2_Resize_m14551(__this, method) (( void (*) (Dictionary_2_t432 *, const MethodInfo*))Dictionary_2_Resize_m10771_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Add(TKey,TValue)
#define Dictionary_2_Add_m14552(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t432 *, String_t*, GUIStyle_t420 *, const MethodInfo*))Dictionary_2_Add_m10773_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Clear()
#define Dictionary_2_Clear_m14553(__this, method) (( void (*) (Dictionary_2_t432 *, const MethodInfo*))Dictionary_2_Clear_m10775_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m14554(__this, ___key, method) (( bool (*) (Dictionary_2_t432 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m10777_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m14555(__this, ___value, method) (( bool (*) (Dictionary_2_t432 *, GUIStyle_t420 *, const MethodInfo*))Dictionary_2_ContainsValue_m10779_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m14556(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t432 *, SerializationInfo_t649 *, StreamingContext_t650 , const MethodInfo*))Dictionary_2_GetObjectData_m10781_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m14557(__this, ___sender, method) (( void (*) (Dictionary_2_t432 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10783_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Remove(TKey)
#define Dictionary_2_Remove_m14558(__this, ___key, method) (( bool (*) (Dictionary_2_t432 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m10785_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m14559(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t432 *, String_t*, GUIStyle_t420 **, const MethodInfo*))Dictionary_2_TryGetValue_m10787_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Keys()
#define Dictionary_2_get_Keys_m14560(__this, method) (( KeyCollection_t2080 * (*) (Dictionary_2_t432 *, const MethodInfo*))Dictionary_2_get_Keys_m10788_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Values()
#define Dictionary_2_get_Values_m3277(__this, method) (( ValueCollection_t659 * (*) (Dictionary_2_t432 *, const MethodInfo*))Dictionary_2_get_Values_m10790_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m14561(__this, ___key, method) (( String_t* (*) (Dictionary_2_t432 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10792_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m14562(__this, ___value, method) (( GUIStyle_t420 * (*) (Dictionary_2_t432 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10794_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m14563(__this, ___pair, method) (( bool (*) (Dictionary_2_t432 *, KeyValuePair_2_t2079 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10796_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m14564(__this, method) (( Enumerator_t2081  (*) (Dictionary_2_t432 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10797_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m14565(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t897  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t420 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10799_gshared)(__this /* static, unused */, ___key, ___value, method)
