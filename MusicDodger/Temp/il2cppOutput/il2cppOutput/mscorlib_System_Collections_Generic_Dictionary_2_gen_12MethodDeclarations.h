#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1582;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t365;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1893;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t1585;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1589;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1510;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t1914;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1915;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t1916;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t621;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m9586_gshared (Dictionary_2_t1582 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9586(__this, method) (( void (*) (Dictionary_2_t1582 *, const MethodInfo*))Dictionary_2__ctor_m9586_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9588_gshared (Dictionary_2_t1582 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9588(__this, ___comparer, method) (( void (*) (Dictionary_2_t1582 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9588_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9590_gshared (Dictionary_2_t1582 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9590(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1582 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9590_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9591_gshared (Dictionary_2_t1582 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9591(__this, ___capacity, method) (( void (*) (Dictionary_2_t1582 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9591_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9593_gshared (Dictionary_2_t1582 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9593(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1582 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9593_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9595_gshared (Dictionary_2_t1582 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9595(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1582 *, SerializationInfo_t379 *, StreamingContext_t380 , const MethodInfo*))Dictionary_2__ctor_m9595_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9597_gshared (Dictionary_2_t1582 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9597(__this, method) (( Object_t* (*) (Dictionary_2_t1582 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9597_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9599_gshared (Dictionary_2_t1582 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9599(__this, method) (( Object_t* (*) (Dictionary_2_t1582 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9599_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9601_gshared (Dictionary_2_t1582 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9601(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1582 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9601_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9603_gshared (Dictionary_2_t1582 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9603(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1582 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9603_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9605_gshared (Dictionary_2_t1582 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9605(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1582 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9605_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9607_gshared (Dictionary_2_t1582 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9607(__this, ___key, method) (( bool (*) (Dictionary_2_t1582 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9607_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9609_gshared (Dictionary_2_t1582 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9609(__this, ___key, method) (( void (*) (Dictionary_2_t1582 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9609_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9611_gshared (Dictionary_2_t1582 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9611(__this, method) (( Object_t * (*) (Dictionary_2_t1582 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9611_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9613_gshared (Dictionary_2_t1582 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9613(__this, method) (( bool (*) (Dictionary_2_t1582 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9613_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9615_gshared (Dictionary_2_t1582 * __this, KeyValuePair_2_t1583  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9615(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1582 *, KeyValuePair_2_t1583 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9615_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9617_gshared (Dictionary_2_t1582 * __this, KeyValuePair_2_t1583  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9617(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1582 *, KeyValuePair_2_t1583 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9617_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9619_gshared (Dictionary_2_t1582 * __this, KeyValuePair_2U5BU5D_t1915* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9619(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1582 *, KeyValuePair_2U5BU5D_t1915*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9619_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9621_gshared (Dictionary_2_t1582 * __this, KeyValuePair_2_t1583  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9621(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1582 *, KeyValuePair_2_t1583 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9621_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9623_gshared (Dictionary_2_t1582 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9623(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1582 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9623_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9625_gshared (Dictionary_2_t1582 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9625(__this, method) (( Object_t * (*) (Dictionary_2_t1582 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9625_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9627_gshared (Dictionary_2_t1582 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9627(__this, method) (( Object_t* (*) (Dictionary_2_t1582 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9627_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9629_gshared (Dictionary_2_t1582 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9629(__this, method) (( Object_t * (*) (Dictionary_2_t1582 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9629_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9631_gshared (Dictionary_2_t1582 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9631(__this, method) (( int32_t (*) (Dictionary_2_t1582 *, const MethodInfo*))Dictionary_2_get_Count_m9631_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m9633_gshared (Dictionary_2_t1582 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9633(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1582 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9633_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9635_gshared (Dictionary_2_t1582 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9635(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1582 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m9635_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9637_gshared (Dictionary_2_t1582 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9637(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1582 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9637_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9639_gshared (Dictionary_2_t1582 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9639(__this, ___size, method) (( void (*) (Dictionary_2_t1582 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9639_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9641_gshared (Dictionary_2_t1582 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9641(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1582 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9641_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1583  Dictionary_2_make_pair_m9643_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9643(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1583  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m9643_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m9645_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9645(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m9645_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m9647_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9647(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m9647_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9649_gshared (Dictionary_2_t1582 * __this, KeyValuePair_2U5BU5D_t1915* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9649(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1582 *, KeyValuePair_2U5BU5D_t1915*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9649_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m9651_gshared (Dictionary_2_t1582 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9651(__this, method) (( void (*) (Dictionary_2_t1582 *, const MethodInfo*))Dictionary_2_Resize_m9651_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9653_gshared (Dictionary_2_t1582 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9653(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1582 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m9653_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m9655_gshared (Dictionary_2_t1582 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9655(__this, method) (( void (*) (Dictionary_2_t1582 *, const MethodInfo*))Dictionary_2_Clear_m9655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9657_gshared (Dictionary_2_t1582 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9657(__this, ___key, method) (( bool (*) (Dictionary_2_t1582 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9657_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9659_gshared (Dictionary_2_t1582 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9659(__this, ___value, method) (( bool (*) (Dictionary_2_t1582 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m9659_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9661_gshared (Dictionary_2_t1582 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9661(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1582 *, SerializationInfo_t379 *, StreamingContext_t380 , const MethodInfo*))Dictionary_2_GetObjectData_m9661_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9663_gshared (Dictionary_2_t1582 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9663(__this, ___sender, method) (( void (*) (Dictionary_2_t1582 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9663_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9665_gshared (Dictionary_2_t1582 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9665(__this, ___key, method) (( bool (*) (Dictionary_2_t1582 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9665_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9667_gshared (Dictionary_2_t1582 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9667(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1582 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9667_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t1585 * Dictionary_2_get_Keys_m9669_gshared (Dictionary_2_t1582 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9669(__this, method) (( KeyCollection_t1585 * (*) (Dictionary_2_t1582 *, const MethodInfo*))Dictionary_2_get_Keys_m9669_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1589 * Dictionary_2_get_Values_m9671_gshared (Dictionary_2_t1582 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9671(__this, method) (( ValueCollection_t1589 * (*) (Dictionary_2_t1582 *, const MethodInfo*))Dictionary_2_get_Values_m9671_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9673_gshared (Dictionary_2_t1582 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9673(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1582 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9673_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m9675_gshared (Dictionary_2_t1582 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9675(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1582 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9675_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9677_gshared (Dictionary_2_t1582 * __this, KeyValuePair_2_t1583  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9677(__this, ___pair, method) (( bool (*) (Dictionary_2_t1582 *, KeyValuePair_2_t1583 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9677_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1587  Dictionary_2_GetEnumerator_m9679_gshared (Dictionary_2_t1582 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9679(__this, method) (( Enumerator_t1587  (*) (Dictionary_2_t1582 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9679_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t622  Dictionary_2_U3CCopyToU3Em__0_m9681_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9681(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t622  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9681_gshared)(__this /* static, unused */, ___key, ___value, method)
