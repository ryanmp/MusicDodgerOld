﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t1653;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>
struct ICollection_1_t1939;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t365;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct KeyCollection_t1657;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ValueCollection_t1661;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t1650;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct IDictionary_2_t1944;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>[]
struct KeyValuePair_2U5BU5D_t1945;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
struct IEnumerator_1_t1946;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t621;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m10484_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10484(__this, method) (( void (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2__ctor_m10484_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10486_gshared (Dictionary_2_t1653 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10486(__this, ___comparer, method) (( void (*) (Dictionary_2_t1653 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10486_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m10488_gshared (Dictionary_2_t1653 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m10488(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1653 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10488_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10490_gshared (Dictionary_2_t1653 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10490(__this, ___capacity, method) (( void (*) (Dictionary_2_t1653 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10490_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10492_gshared (Dictionary_2_t1653 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10492(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1653 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10492_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10494_gshared (Dictionary_2_t1653 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10494(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1653 *, SerializationInfo_t379 *, StreamingContext_t380 , const MethodInfo*))Dictionary_2__ctor_m10494_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10496_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10496(__this, method) (( Object_t* (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10496_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10498_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10498(__this, method) (( Object_t* (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10498_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10500_gshared (Dictionary_2_t1653 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10500(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1653 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10500_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10502_gshared (Dictionary_2_t1653 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10502(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1653 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10502_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10504_gshared (Dictionary_2_t1653 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10504(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1653 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10504_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10506_gshared (Dictionary_2_t1653 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10506(__this, ___key, method) (( bool (*) (Dictionary_2_t1653 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10506_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10508_gshared (Dictionary_2_t1653 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10508(__this, ___key, method) (( void (*) (Dictionary_2_t1653 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10508_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10510_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10510(__this, method) (( Object_t * (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10510_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10512_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10512(__this, method) (( bool (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10512_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10514_gshared (Dictionary_2_t1653 * __this, KeyValuePair_2_t1654  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10514(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1653 *, KeyValuePair_2_t1654 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10514_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10516_gshared (Dictionary_2_t1653 * __this, KeyValuePair_2_t1654  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10516(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1653 *, KeyValuePair_2_t1654 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10516_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10518_gshared (Dictionary_2_t1653 * __this, KeyValuePair_2U5BU5D_t1945* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10518(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1653 *, KeyValuePair_2U5BU5D_t1945*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10518_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10520_gshared (Dictionary_2_t1653 * __this, KeyValuePair_2_t1654  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10520(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1653 *, KeyValuePair_2_t1654 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10520_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10522_gshared (Dictionary_2_t1653 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10522(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1653 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10522_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10524_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10524(__this, method) (( Object_t * (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10524_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10526_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10526(__this, method) (( Object_t* (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10526_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10528_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10528(__this, method) (( Object_t * (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10528_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10530_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10530(__this, method) (( int32_t (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_get_Count_m10530_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m10532_gshared (Dictionary_2_t1653 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10532(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1653 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m10532_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10534_gshared (Dictionary_2_t1653 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10534(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1653 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m10534_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10536_gshared (Dictionary_2_t1653 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10536(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1653 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10536_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10538_gshared (Dictionary_2_t1653 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10538(__this, ___size, method) (( void (*) (Dictionary_2_t1653 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10538_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10540_gshared (Dictionary_2_t1653 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10540(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1653 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10540_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1654  Dictionary_2_make_pair_m10542_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10542(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1654  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m10542_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m10544_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m10544(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m10544_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m10546_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10546(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m10546_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10548_gshared (Dictionary_2_t1653 * __this, KeyValuePair_2U5BU5D_t1945* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10548(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1653 *, KeyValuePair_2U5BU5D_t1945*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10548_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m10550_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10550(__this, method) (( void (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_Resize_m10550_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10552_gshared (Dictionary_2_t1653 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10552(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1653 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m10552_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m10554_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10554(__this, method) (( void (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_Clear_m10554_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10556_gshared (Dictionary_2_t1653 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10556(__this, ___key, method) (( bool (*) (Dictionary_2_t1653 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m10556_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10558_gshared (Dictionary_2_t1653 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10558(__this, ___value, method) (( bool (*) (Dictionary_2_t1653 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m10558_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10560_gshared (Dictionary_2_t1653 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10560(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1653 *, SerializationInfo_t379 *, StreamingContext_t380 , const MethodInfo*))Dictionary_2_GetObjectData_m10560_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10562_gshared (Dictionary_2_t1653 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10562(__this, ___sender, method) (( void (*) (Dictionary_2_t1653 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10562_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10564_gshared (Dictionary_2_t1653 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10564(__this, ___key, method) (( bool (*) (Dictionary_2_t1653 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m10564_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10566_gshared (Dictionary_2_t1653 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10566(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1653 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m10566_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Keys()
extern "C" KeyCollection_t1657 * Dictionary_2_get_Keys_m10568_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m10568(__this, method) (( KeyCollection_t1657 * (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_get_Keys_m10568_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Values()
extern "C" ValueCollection_t1661 * Dictionary_2_get_Values_m10570_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10570(__this, method) (( ValueCollection_t1661 * (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_get_Values_m10570_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m10572_gshared (Dictionary_2_t1653 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10572(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t1653 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10572_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m10574_gshared (Dictionary_2_t1653 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10574(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1653 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10574_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10576_gshared (Dictionary_2_t1653 * __this, KeyValuePair_2_t1654  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10576(__this, ___pair, method) (( bool (*) (Dictionary_2_t1653 *, KeyValuePair_2_t1654 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10576_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetEnumerator()
extern "C" Enumerator_t1659  Dictionary_2_GetEnumerator_m10578_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10578(__this, method) (( Enumerator_t1659  (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10578_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t622  Dictionary_2_U3CCopyToU3Em__0_m10580_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10580(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t622  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10580_gshared)(__this /* static, unused */, ___key, ___value, method)
