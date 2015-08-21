#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1558;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1893;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t365;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1561;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1565;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1555;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t1898;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1899;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1900;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t621;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9220_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9220(__this, method) (( void (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2__ctor_m9220_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9222_gshared (Dictionary_2_t1558 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9222(__this, ___comparer, method) (( void (*) (Dictionary_2_t1558 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9222_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9224_gshared (Dictionary_2_t1558 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9224(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1558 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9224_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9226_gshared (Dictionary_2_t1558 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9226(__this, ___capacity, method) (( void (*) (Dictionary_2_t1558 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9226_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9228_gshared (Dictionary_2_t1558 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9228(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1558 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9228_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9230_gshared (Dictionary_2_t1558 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9230(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1558 *, SerializationInfo_t379 *, StreamingContext_t380 , const MethodInfo*))Dictionary_2__ctor_m9230_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9232_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9232(__this, method) (( Object_t* (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9232_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9234_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9234(__this, method) (( Object_t* (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9234_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9236_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9236(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1558 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9236_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9238_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9238(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1558 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9238_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9240_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9240(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1558 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9240_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9242_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9242(__this, ___key, method) (( bool (*) (Dictionary_2_t1558 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9242_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9244_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9244(__this, ___key, method) (( void (*) (Dictionary_2_t1558 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9244_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9246_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9246(__this, method) (( Object_t * (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9246_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9248_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9248(__this, method) (( bool (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9248_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9250_gshared (Dictionary_2_t1558 * __this, KeyValuePair_2_t1559  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9250(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1558 *, KeyValuePair_2_t1559 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9250_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9252_gshared (Dictionary_2_t1558 * __this, KeyValuePair_2_t1559  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9252(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1558 *, KeyValuePair_2_t1559 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9252_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9254_gshared (Dictionary_2_t1558 * __this, KeyValuePair_2U5BU5D_t1899* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9254(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1558 *, KeyValuePair_2U5BU5D_t1899*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9254_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9256_gshared (Dictionary_2_t1558 * __this, KeyValuePair_2_t1559  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9256(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1558 *, KeyValuePair_2_t1559 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9256_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9258_gshared (Dictionary_2_t1558 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9258(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1558 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9258_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9260_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9260(__this, method) (( Object_t * (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9260_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9262_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9262(__this, method) (( Object_t* (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9262_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9264_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9264(__this, method) (( Object_t * (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9264_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9266_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9266(__this, method) (( int32_t (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_get_Count_m9266_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9268_gshared (Dictionary_2_t1558 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9268(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1558 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m9268_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9270_gshared (Dictionary_2_t1558 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9270(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1558 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9270_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9272_gshared (Dictionary_2_t1558 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9272(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1558 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9272_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9274_gshared (Dictionary_2_t1558 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9274(__this, ___size, method) (( void (*) (Dictionary_2_t1558 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9274_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9276_gshared (Dictionary_2_t1558 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9276(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1558 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9276_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1559  Dictionary_2_make_pair_m9278_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9278(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1559  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9278_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m9280_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9280(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9280_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9282_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9282(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9282_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9284_gshared (Dictionary_2_t1558 * __this, KeyValuePair_2U5BU5D_t1899* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9284(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1558 *, KeyValuePair_2U5BU5D_t1899*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9284_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9286_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9286(__this, method) (( void (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_Resize_m9286_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9288_gshared (Dictionary_2_t1558 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9288(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1558 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m9288_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9290_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9290(__this, method) (( void (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_Clear_m9290_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9292_gshared (Dictionary_2_t1558 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9292(__this, ___key, method) (( bool (*) (Dictionary_2_t1558 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m9292_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9294_gshared (Dictionary_2_t1558 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9294(__this, ___value, method) (( bool (*) (Dictionary_2_t1558 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9294_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9296_gshared (Dictionary_2_t1558 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9296(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1558 *, SerializationInfo_t379 *, StreamingContext_t380 , const MethodInfo*))Dictionary_2_GetObjectData_m9296_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9298_gshared (Dictionary_2_t1558 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9298(__this, ___sender, method) (( void (*) (Dictionary_2_t1558 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9298_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9300_gshared (Dictionary_2_t1558 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9300(__this, ___key, method) (( bool (*) (Dictionary_2_t1558 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m9300_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9302_gshared (Dictionary_2_t1558 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9302(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1558 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9302_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t1561 * Dictionary_2_get_Keys_m9304_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9304(__this, method) (( KeyCollection_t1561 * (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_get_Keys_m9304_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1565 * Dictionary_2_get_Values_m9306_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9306(__this, method) (( ValueCollection_t1565 * (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_get_Values_m9306_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m9308_gshared (Dictionary_2_t1558 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9308(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1558 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9308_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m9310_gshared (Dictionary_2_t1558 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9310(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1558 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9310_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9312_gshared (Dictionary_2_t1558 * __this, KeyValuePair_2_t1559  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9312(__this, ___pair, method) (( bool (*) (Dictionary_2_t1558 *, KeyValuePair_2_t1559 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9312_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1563  Dictionary_2_GetEnumerator_m9314_gshared (Dictionary_2_t1558 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9314(__this, method) (( Enumerator_t1563  (*) (Dictionary_2_t1558 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9314_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t622  Dictionary_2_U3CCopyToU3Em__0_m9316_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9316(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t622  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9316_gshared)(__this /* static, unused */, ___key, ___value, method)
