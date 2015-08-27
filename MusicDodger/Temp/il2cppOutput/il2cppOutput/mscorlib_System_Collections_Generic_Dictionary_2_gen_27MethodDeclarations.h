#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t832;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2410;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t2323;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t2327;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1906;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t2652;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t649;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2653;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t2654;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t896;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_28.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m17682_gshared (Dictionary_2_t832 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17682(__this, method) (( void (*) (Dictionary_2_t832 *, const MethodInfo*))Dictionary_2__ctor_m17682_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17683_gshared (Dictionary_2_t832 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17683(__this, ___comparer, method) (( void (*) (Dictionary_2_t832 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17683_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m17684_gshared (Dictionary_2_t832 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m17684(__this, ___dictionary, method) (( void (*) (Dictionary_2_t832 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17684_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17685_gshared (Dictionary_2_t832 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17685(__this, ___capacity, method) (( void (*) (Dictionary_2_t832 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17685_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17686_gshared (Dictionary_2_t832 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17686(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t832 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17686_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17687_gshared (Dictionary_2_t832 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17687(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t832 *, SerializationInfo_t649 *, StreamingContext_t650 , const MethodInfo*))Dictionary_2__ctor_m17687_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17688_gshared (Dictionary_2_t832 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17688(__this, method) (( Object_t* (*) (Dictionary_2_t832 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17688_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17689_gshared (Dictionary_2_t832 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17689(__this, method) (( Object_t* (*) (Dictionary_2_t832 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17689_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17690_gshared (Dictionary_2_t832 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17690(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t832 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17690_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17691_gshared (Dictionary_2_t832 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17691(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t832 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17691_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17692_gshared (Dictionary_2_t832 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17692(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t832 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17692_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17693_gshared (Dictionary_2_t832 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17693(__this, ___key, method) (( bool (*) (Dictionary_2_t832 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17693_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17694_gshared (Dictionary_2_t832 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17694(__this, ___key, method) (( void (*) (Dictionary_2_t832 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17694_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17695_gshared (Dictionary_2_t832 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17695(__this, method) (( bool (*) (Dictionary_2_t832 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17695_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17696_gshared (Dictionary_2_t832 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17696(__this, method) (( Object_t * (*) (Dictionary_2_t832 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17696_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17697_gshared (Dictionary_2_t832 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17697(__this, method) (( bool (*) (Dictionary_2_t832 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17697_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17698_gshared (Dictionary_2_t832 * __this, KeyValuePair_2_t2321  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17698(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t832 *, KeyValuePair_2_t2321 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17698_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17699_gshared (Dictionary_2_t832 * __this, KeyValuePair_2_t2321  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17699(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t832 *, KeyValuePair_2_t2321 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17699_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17700_gshared (Dictionary_2_t832 * __this, KeyValuePair_2U5BU5D_t2653* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17700(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t832 *, KeyValuePair_2U5BU5D_t2653*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17700_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17701_gshared (Dictionary_2_t832 * __this, KeyValuePair_2_t2321  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17701(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t832 *, KeyValuePair_2_t2321 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17701_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17702_gshared (Dictionary_2_t832 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17702(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t832 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17702_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17703_gshared (Dictionary_2_t832 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17703(__this, method) (( Object_t * (*) (Dictionary_2_t832 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17703_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17704_gshared (Dictionary_2_t832 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17704(__this, method) (( Object_t* (*) (Dictionary_2_t832 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17704_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17705_gshared (Dictionary_2_t832 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17705(__this, method) (( Object_t * (*) (Dictionary_2_t832 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17705_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17706_gshared (Dictionary_2_t832 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17706(__this, method) (( int32_t (*) (Dictionary_2_t832 *, const MethodInfo*))Dictionary_2_get_Count_m17706_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m17707_gshared (Dictionary_2_t832 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17707(__this, ___key, method) (( int32_t (*) (Dictionary_2_t832 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m17707_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17708_gshared (Dictionary_2_t832 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17708(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t832 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m17708_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17709_gshared (Dictionary_2_t832 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17709(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t832 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17709_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17710_gshared (Dictionary_2_t832 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17710(__this, ___size, method) (( void (*) (Dictionary_2_t832 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17710_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17711_gshared (Dictionary_2_t832 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17711(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t832 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17711_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2321  Dictionary_2_make_pair_m17712_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17712(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2321  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m17712_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m17713_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m17713(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m17713_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m17714_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17714(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m17714_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17715_gshared (Dictionary_2_t832 * __this, KeyValuePair_2U5BU5D_t2653* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17715(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t832 *, KeyValuePair_2U5BU5D_t2653*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17715_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m17716_gshared (Dictionary_2_t832 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17716(__this, method) (( void (*) (Dictionary_2_t832 *, const MethodInfo*))Dictionary_2_Resize_m17716_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17717_gshared (Dictionary_2_t832 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17717(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t832 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m17717_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m17718_gshared (Dictionary_2_t832 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17718(__this, method) (( void (*) (Dictionary_2_t832 *, const MethodInfo*))Dictionary_2_Clear_m17718_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17719_gshared (Dictionary_2_t832 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17719(__this, ___key, method) (( bool (*) (Dictionary_2_t832 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m17719_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17720_gshared (Dictionary_2_t832 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17720(__this, ___value, method) (( bool (*) (Dictionary_2_t832 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m17720_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17721_gshared (Dictionary_2_t832 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17721(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t832 *, SerializationInfo_t649 *, StreamingContext_t650 , const MethodInfo*))Dictionary_2_GetObjectData_m17721_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17722_gshared (Dictionary_2_t832 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17722(__this, ___sender, method) (( void (*) (Dictionary_2_t832 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17722_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17723_gshared (Dictionary_2_t832 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17723(__this, ___key, method) (( bool (*) (Dictionary_2_t832 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m17723_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17724_gshared (Dictionary_2_t832 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17724(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t832 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m17724_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t2323 * Dictionary_2_get_Keys_m17725_gshared (Dictionary_2_t832 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m17725(__this, method) (( KeyCollection_t2323 * (*) (Dictionary_2_t832 *, const MethodInfo*))Dictionary_2_get_Keys_m17725_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t2327 * Dictionary_2_get_Values_m17726_gshared (Dictionary_2_t832 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17726(__this, method) (( ValueCollection_t2327 * (*) (Dictionary_2_t832 *, const MethodInfo*))Dictionary_2_get_Values_m17726_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m17727_gshared (Dictionary_2_t832 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17727(__this, ___key, method) (( int32_t (*) (Dictionary_2_t832 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17727_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m17728_gshared (Dictionary_2_t832 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17728(__this, ___value, method) (( int32_t (*) (Dictionary_2_t832 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17728_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17729_gshared (Dictionary_2_t832 * __this, KeyValuePair_2_t2321  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17729(__this, ___pair, method) (( bool (*) (Dictionary_2_t832 *, KeyValuePair_2_t2321 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17729_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2325  Dictionary_2_GetEnumerator_m17730_gshared (Dictionary_2_t832 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17730(__this, method) (( Enumerator_t2325  (*) (Dictionary_2_t832 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17730_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t897  Dictionary_2_U3CCopyToU3Em__0_m17731_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17731(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t897  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17731_gshared)(__this /* static, unused */, ___key, ___value, method)
