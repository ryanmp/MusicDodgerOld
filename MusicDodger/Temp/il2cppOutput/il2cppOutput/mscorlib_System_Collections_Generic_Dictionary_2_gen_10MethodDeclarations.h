#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1510;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t363;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t1515;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1519;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1508;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t1882;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t377;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1696;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1525;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t619;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m8697_gshared (Dictionary_2_t1510 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m8697(__this, method) (( void (*) (Dictionary_2_t1510 *, const MethodInfo*))Dictionary_2__ctor_m8697_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8699_gshared (Dictionary_2_t1510 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8699(__this, ___comparer, method) (( void (*) (Dictionary_2_t1510 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8699_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m8701_gshared (Dictionary_2_t1510 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m8701(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1510 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8701_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m8703_gshared (Dictionary_2_t1510 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m8703(__this, ___capacity, method) (( void (*) (Dictionary_2_t1510 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m8703_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8705_gshared (Dictionary_2_t1510 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8705(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1510 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8705_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m8707_gshared (Dictionary_2_t1510 * __this, SerializationInfo_t377 * ___info, StreamingContext_t378  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m8707(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1510 *, SerializationInfo_t377 *, StreamingContext_t378 , const MethodInfo*))Dictionary_2__ctor_m8707_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8709_gshared (Dictionary_2_t1510 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8709(__this, method) (( Object_t* (*) (Dictionary_2_t1510 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8709_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8711_gshared (Dictionary_2_t1510 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8711(__this, method) (( Object_t* (*) (Dictionary_2_t1510 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8711_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m8713_gshared (Dictionary_2_t1510 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m8713(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1510 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m8713_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m8715_gshared (Dictionary_2_t1510 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m8715(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1510 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m8715_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m8717_gshared (Dictionary_2_t1510 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m8717(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1510 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m8717_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m8719_gshared (Dictionary_2_t1510 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m8719(__this, ___key, method) (( bool (*) (Dictionary_2_t1510 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m8719_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m8721_gshared (Dictionary_2_t1510 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m8721(__this, ___key, method) (( void (*) (Dictionary_2_t1510 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m8721_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8723_gshared (Dictionary_2_t1510 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8723(__this, method) (( Object_t * (*) (Dictionary_2_t1510 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8723_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8725_gshared (Dictionary_2_t1510 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8725(__this, method) (( bool (*) (Dictionary_2_t1510 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8725_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8727_gshared (Dictionary_2_t1510 * __this, KeyValuePair_2_t40  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8727(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1510 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8727_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8729_gshared (Dictionary_2_t1510 * __this, KeyValuePair_2_t40  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8729(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1510 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8729_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8731_gshared (Dictionary_2_t1510 * __this, KeyValuePair_2U5BU5D_t1696* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8731(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1510 *, KeyValuePair_2U5BU5D_t1696*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8731_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8733_gshared (Dictionary_2_t1510 * __this, KeyValuePair_2_t40  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8733(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1510 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8733_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m8735_gshared (Dictionary_2_t1510 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m8735(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1510 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m8735_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8737_gshared (Dictionary_2_t1510 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8737(__this, method) (( Object_t * (*) (Dictionary_2_t1510 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8737_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8739_gshared (Dictionary_2_t1510 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8739(__this, method) (( Object_t* (*) (Dictionary_2_t1510 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8739_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8741_gshared (Dictionary_2_t1510 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8741(__this, method) (( Object_t * (*) (Dictionary_2_t1510 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8741_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m8743_gshared (Dictionary_2_t1510 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m8743(__this, method) (( int32_t (*) (Dictionary_2_t1510 *, const MethodInfo*))Dictionary_2_get_Count_m8743_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m8745_gshared (Dictionary_2_t1510 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m8745(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1510 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m8745_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m8747_gshared (Dictionary_2_t1510 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m8747(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1510 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m8747_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m8749_gshared (Dictionary_2_t1510 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m8749(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1510 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m8749_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m8751_gshared (Dictionary_2_t1510 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m8751(__this, ___size, method) (( void (*) (Dictionary_2_t1510 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m8751_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m8753_gshared (Dictionary_2_t1510 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m8753(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1510 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m8753_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t40  Dictionary_2_make_pair_m8755_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m8755(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t40  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m8755_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m8757_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m8757(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m8757_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m8759_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m8759(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m8759_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m8761_gshared (Dictionary_2_t1510 * __this, KeyValuePair_2U5BU5D_t1696* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m8761(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1510 *, KeyValuePair_2U5BU5D_t1696*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m8761_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m8763_gshared (Dictionary_2_t1510 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m8763(__this, method) (( void (*) (Dictionary_2_t1510 *, const MethodInfo*))Dictionary_2_Resize_m8763_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m8765_gshared (Dictionary_2_t1510 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m8765(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1510 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m8765_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m8767_gshared (Dictionary_2_t1510 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m8767(__this, method) (( void (*) (Dictionary_2_t1510 *, const MethodInfo*))Dictionary_2_Clear_m8767_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m8769_gshared (Dictionary_2_t1510 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m8769(__this, ___key, method) (( bool (*) (Dictionary_2_t1510 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m8769_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m8771_gshared (Dictionary_2_t1510 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m8771(__this, ___value, method) (( bool (*) (Dictionary_2_t1510 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m8771_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m8773_gshared (Dictionary_2_t1510 * __this, SerializationInfo_t377 * ___info, StreamingContext_t378  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m8773(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1510 *, SerializationInfo_t377 *, StreamingContext_t378 , const MethodInfo*))Dictionary_2_GetObjectData_m8773_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m8775_gshared (Dictionary_2_t1510 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m8775(__this, ___sender, method) (( void (*) (Dictionary_2_t1510 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m8775_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m8777_gshared (Dictionary_2_t1510 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m8777(__this, ___key, method) (( bool (*) (Dictionary_2_t1510 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m8777_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m8779_gshared (Dictionary_2_t1510 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m8779(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1510 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m8779_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t1515 * Dictionary_2_get_Keys_m8780_gshared (Dictionary_2_t1510 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m8780(__this, method) (( KeyCollection_t1515 * (*) (Dictionary_2_t1510 *, const MethodInfo*))Dictionary_2_get_Keys_m8780_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1519 * Dictionary_2_get_Values_m8782_gshared (Dictionary_2_t1510 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m8782(__this, method) (( ValueCollection_t1519 * (*) (Dictionary_2_t1510 *, const MethodInfo*))Dictionary_2_get_Values_m8782_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m8784_gshared (Dictionary_2_t1510 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m8784(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1510 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m8784_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m8786_gshared (Dictionary_2_t1510 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m8786(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1510 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m8786_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m8788_gshared (Dictionary_2_t1510 * __this, KeyValuePair_2_t40  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m8788(__this, ___pair, method) (( bool (*) (Dictionary_2_t1510 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m8788_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1517  Dictionary_2_GetEnumerator_m8789_gshared (Dictionary_2_t1510 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m8789(__this, method) (( Enumerator_t1517  (*) (Dictionary_2_t1510 *, const MethodInfo*))Dictionary_2_GetEnumerator_m8789_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t620  Dictionary_2_U3CCopyToU3Em__0_m8791_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m8791(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t620  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m8791_gshared)(__this /* static, unused */, ___key, ___value, method)
