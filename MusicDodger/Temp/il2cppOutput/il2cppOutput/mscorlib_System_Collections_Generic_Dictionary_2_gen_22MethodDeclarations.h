#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t555;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1891;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t1787;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t1791;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1553;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t2010;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t377;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2011;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t2012;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t619;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m12089_gshared (Dictionary_2_t555 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12089(__this, method) (( void (*) (Dictionary_2_t555 *, const MethodInfo*))Dictionary_2__ctor_m12089_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12090_gshared (Dictionary_2_t555 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12090(__this, ___comparer, method) (( void (*) (Dictionary_2_t555 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12090_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m12091_gshared (Dictionary_2_t555 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m12091(__this, ___dictionary, method) (( void (*) (Dictionary_2_t555 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12091_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12092_gshared (Dictionary_2_t555 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12092(__this, ___capacity, method) (( void (*) (Dictionary_2_t555 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12092_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12093_gshared (Dictionary_2_t555 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12093(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t555 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12093_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12094_gshared (Dictionary_2_t555 * __this, SerializationInfo_t377 * ___info, StreamingContext_t378  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12094(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t555 *, SerializationInfo_t377 *, StreamingContext_t378 , const MethodInfo*))Dictionary_2__ctor_m12094_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12095_gshared (Dictionary_2_t555 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12095(__this, method) (( Object_t* (*) (Dictionary_2_t555 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12095_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12096_gshared (Dictionary_2_t555 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12096(__this, method) (( Object_t* (*) (Dictionary_2_t555 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12096_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12097_gshared (Dictionary_2_t555 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12097(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t555 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12097_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12098_gshared (Dictionary_2_t555 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12098(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t555 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12098_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12099_gshared (Dictionary_2_t555 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12099(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t555 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12099_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12100_gshared (Dictionary_2_t555 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12100(__this, ___key, method) (( bool (*) (Dictionary_2_t555 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12100_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12101_gshared (Dictionary_2_t555 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12101(__this, ___key, method) (( void (*) (Dictionary_2_t555 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12101_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12102_gshared (Dictionary_2_t555 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12102(__this, method) (( Object_t * (*) (Dictionary_2_t555 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12102_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12103_gshared (Dictionary_2_t555 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12103(__this, method) (( bool (*) (Dictionary_2_t555 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12103_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12104_gshared (Dictionary_2_t555 * __this, KeyValuePair_2_t1785  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12104(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t555 *, KeyValuePair_2_t1785 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12104_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12105_gshared (Dictionary_2_t555 * __this, KeyValuePair_2_t1785  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12105(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t555 *, KeyValuePair_2_t1785 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12105_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12106_gshared (Dictionary_2_t555 * __this, KeyValuePair_2U5BU5D_t2011* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12106(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t555 *, KeyValuePair_2U5BU5D_t2011*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12106_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12107_gshared (Dictionary_2_t555 * __this, KeyValuePair_2_t1785  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12107(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t555 *, KeyValuePair_2_t1785 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12107_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12108_gshared (Dictionary_2_t555 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12108(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t555 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12108_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12109_gshared (Dictionary_2_t555 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12109(__this, method) (( Object_t * (*) (Dictionary_2_t555 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12109_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12110_gshared (Dictionary_2_t555 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12110(__this, method) (( Object_t* (*) (Dictionary_2_t555 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12110_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12111_gshared (Dictionary_2_t555 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12111(__this, method) (( Object_t * (*) (Dictionary_2_t555 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12111_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12112_gshared (Dictionary_2_t555 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12112(__this, method) (( int32_t (*) (Dictionary_2_t555 *, const MethodInfo*))Dictionary_2_get_Count_m12112_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12113_gshared (Dictionary_2_t555 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12113(__this, ___key, method) (( int32_t (*) (Dictionary_2_t555 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m12113_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12114_gshared (Dictionary_2_t555 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12114(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t555 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m12114_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12115_gshared (Dictionary_2_t555 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12115(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t555 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12115_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12116_gshared (Dictionary_2_t555 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12116(__this, ___size, method) (( void (*) (Dictionary_2_t555 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12116_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12117_gshared (Dictionary_2_t555 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12117(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t555 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12117_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1785  Dictionary_2_make_pair_m12118_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12118(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1785  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m12118_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m12119_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m12119(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m12119_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12120_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12120(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m12120_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12121_gshared (Dictionary_2_t555 * __this, KeyValuePair_2U5BU5D_t2011* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12121(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t555 *, KeyValuePair_2U5BU5D_t2011*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12121_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m12122_gshared (Dictionary_2_t555 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12122(__this, method) (( void (*) (Dictionary_2_t555 *, const MethodInfo*))Dictionary_2_Resize_m12122_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12123_gshared (Dictionary_2_t555 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12123(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t555 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m12123_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12124_gshared (Dictionary_2_t555 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12124(__this, method) (( void (*) (Dictionary_2_t555 *, const MethodInfo*))Dictionary_2_Clear_m12124_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12125_gshared (Dictionary_2_t555 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12125(__this, ___key, method) (( bool (*) (Dictionary_2_t555 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m12125_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12126_gshared (Dictionary_2_t555 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12126(__this, ___value, method) (( bool (*) (Dictionary_2_t555 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m12126_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12127_gshared (Dictionary_2_t555 * __this, SerializationInfo_t377 * ___info, StreamingContext_t378  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12127(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t555 *, SerializationInfo_t377 *, StreamingContext_t378 , const MethodInfo*))Dictionary_2_GetObjectData_m12127_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12128_gshared (Dictionary_2_t555 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12128(__this, ___sender, method) (( void (*) (Dictionary_2_t555 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12128_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12129_gshared (Dictionary_2_t555 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12129(__this, ___key, method) (( bool (*) (Dictionary_2_t555 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m12129_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12130_gshared (Dictionary_2_t555 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12130(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t555 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12130_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t1787 * Dictionary_2_get_Keys_m12131_gshared (Dictionary_2_t555 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m12131(__this, method) (( KeyCollection_t1787 * (*) (Dictionary_2_t555 *, const MethodInfo*))Dictionary_2_get_Keys_m12131_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t1791 * Dictionary_2_get_Values_m12132_gshared (Dictionary_2_t555 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12132(__this, method) (( ValueCollection_t1791 * (*) (Dictionary_2_t555 *, const MethodInfo*))Dictionary_2_get_Values_m12132_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m12133_gshared (Dictionary_2_t555 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12133(__this, ___key, method) (( int32_t (*) (Dictionary_2_t555 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12133_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12134_gshared (Dictionary_2_t555 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12134(__this, ___value, method) (( int32_t (*) (Dictionary_2_t555 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12134_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12135_gshared (Dictionary_2_t555 * __this, KeyValuePair_2_t1785  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12135(__this, ___pair, method) (( bool (*) (Dictionary_2_t555 *, KeyValuePair_2_t1785 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12135_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1789  Dictionary_2_GetEnumerator_m12136_gshared (Dictionary_2_t555 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12136(__this, method) (( Enumerator_t1789  (*) (Dictionary_2_t555 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12136_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t620  Dictionary_2_U3CCopyToU3Em__0_m12137_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12137(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t620  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12137_gshared)(__this /* static, unused */, ___key, ___value, method)
