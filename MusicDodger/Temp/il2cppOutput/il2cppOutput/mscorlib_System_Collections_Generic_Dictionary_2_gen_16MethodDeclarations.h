#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1909;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2410;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t637;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1912;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1916;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1906;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t2444;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t649;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2445;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2446;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t896;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12160_gshared (Dictionary_2_t1909 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12160(__this, method) (( void (*) (Dictionary_2_t1909 *, const MethodInfo*))Dictionary_2__ctor_m12160_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12162_gshared (Dictionary_2_t1909 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12162(__this, ___comparer, method) (( void (*) (Dictionary_2_t1909 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12162_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m12164_gshared (Dictionary_2_t1909 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m12164(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1909 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12164_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12166_gshared (Dictionary_2_t1909 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12166(__this, ___capacity, method) (( void (*) (Dictionary_2_t1909 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12166_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12168_gshared (Dictionary_2_t1909 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12168(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1909 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12168_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12170_gshared (Dictionary_2_t1909 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12170(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1909 *, SerializationInfo_t649 *, StreamingContext_t650 , const MethodInfo*))Dictionary_2__ctor_m12170_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12172_gshared (Dictionary_2_t1909 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12172(__this, method) (( Object_t* (*) (Dictionary_2_t1909 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12172_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12174_gshared (Dictionary_2_t1909 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12174(__this, method) (( Object_t* (*) (Dictionary_2_t1909 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12174_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12176_gshared (Dictionary_2_t1909 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12176(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1909 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12176_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12178_gshared (Dictionary_2_t1909 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12178(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1909 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12178_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12180_gshared (Dictionary_2_t1909 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12180(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1909 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12180_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12182_gshared (Dictionary_2_t1909 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12182(__this, ___key, method) (( bool (*) (Dictionary_2_t1909 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12182_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12184_gshared (Dictionary_2_t1909 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12184(__this, ___key, method) (( void (*) (Dictionary_2_t1909 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12184_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12186_gshared (Dictionary_2_t1909 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12186(__this, method) (( bool (*) (Dictionary_2_t1909 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12186_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12188_gshared (Dictionary_2_t1909 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12188(__this, method) (( Object_t * (*) (Dictionary_2_t1909 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12188_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12190_gshared (Dictionary_2_t1909 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12190(__this, method) (( bool (*) (Dictionary_2_t1909 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12190_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12192_gshared (Dictionary_2_t1909 * __this, KeyValuePair_2_t1910  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12192(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1909 *, KeyValuePair_2_t1910 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12192_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12194_gshared (Dictionary_2_t1909 * __this, KeyValuePair_2_t1910  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12194(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1909 *, KeyValuePair_2_t1910 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12194_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12196_gshared (Dictionary_2_t1909 * __this, KeyValuePair_2U5BU5D_t2445* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12196(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1909 *, KeyValuePair_2U5BU5D_t2445*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12196_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12198_gshared (Dictionary_2_t1909 * __this, KeyValuePair_2_t1910  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12198(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1909 *, KeyValuePair_2_t1910 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12198_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12200_gshared (Dictionary_2_t1909 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12200(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1909 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12200_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12202_gshared (Dictionary_2_t1909 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12202(__this, method) (( Object_t * (*) (Dictionary_2_t1909 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12202_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12204_gshared (Dictionary_2_t1909 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12204(__this, method) (( Object_t* (*) (Dictionary_2_t1909 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12204_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12206_gshared (Dictionary_2_t1909 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12206(__this, method) (( Object_t * (*) (Dictionary_2_t1909 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12206_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12208_gshared (Dictionary_2_t1909 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12208(__this, method) (( int32_t (*) (Dictionary_2_t1909 *, const MethodInfo*))Dictionary_2_get_Count_m12208_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12210_gshared (Dictionary_2_t1909 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12210(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1909 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m12210_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12212_gshared (Dictionary_2_t1909 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12212(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1909 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12212_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12214_gshared (Dictionary_2_t1909 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12214(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1909 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12214_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12216_gshared (Dictionary_2_t1909 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12216(__this, ___size, method) (( void (*) (Dictionary_2_t1909 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12216_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12218_gshared (Dictionary_2_t1909 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12218(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1909 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12218_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1910  Dictionary_2_make_pair_m12220_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12220(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1910  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12220_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m12222_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m12222(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m12222_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12224_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12224(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12224_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12226_gshared (Dictionary_2_t1909 * __this, KeyValuePair_2U5BU5D_t2445* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12226(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1909 *, KeyValuePair_2U5BU5D_t2445*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12226_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12228_gshared (Dictionary_2_t1909 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12228(__this, method) (( void (*) (Dictionary_2_t1909 *, const MethodInfo*))Dictionary_2_Resize_m12228_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12230_gshared (Dictionary_2_t1909 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12230(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1909 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m12230_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12232_gshared (Dictionary_2_t1909 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12232(__this, method) (( void (*) (Dictionary_2_t1909 *, const MethodInfo*))Dictionary_2_Clear_m12232_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12234_gshared (Dictionary_2_t1909 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12234(__this, ___key, method) (( bool (*) (Dictionary_2_t1909 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m12234_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12236_gshared (Dictionary_2_t1909 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12236(__this, ___value, method) (( bool (*) (Dictionary_2_t1909 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12236_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12238_gshared (Dictionary_2_t1909 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12238(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1909 *, SerializationInfo_t649 *, StreamingContext_t650 , const MethodInfo*))Dictionary_2_GetObjectData_m12238_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12240_gshared (Dictionary_2_t1909 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12240(__this, ___sender, method) (( void (*) (Dictionary_2_t1909 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12240_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12242_gshared (Dictionary_2_t1909 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12242(__this, ___key, method) (( bool (*) (Dictionary_2_t1909 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m12242_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12244_gshared (Dictionary_2_t1909 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12244(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1909 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12244_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t1912 * Dictionary_2_get_Keys_m12246_gshared (Dictionary_2_t1909 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m12246(__this, method) (( KeyCollection_t1912 * (*) (Dictionary_2_t1909 *, const MethodInfo*))Dictionary_2_get_Keys_m12246_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1916 * Dictionary_2_get_Values_m12247_gshared (Dictionary_2_t1909 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12247(__this, method) (( ValueCollection_t1916 * (*) (Dictionary_2_t1909 *, const MethodInfo*))Dictionary_2_get_Values_m12247_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m12249_gshared (Dictionary_2_t1909 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12249(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1909 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12249_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12251_gshared (Dictionary_2_t1909 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12251(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1909 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12251_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12253_gshared (Dictionary_2_t1909 * __this, KeyValuePair_2_t1910  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12253(__this, ___pair, method) (( bool (*) (Dictionary_2_t1909 *, KeyValuePair_2_t1910 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12253_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1914  Dictionary_2_GetEnumerator_m12254_gshared (Dictionary_2_t1909 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12254(__this, method) (( Enumerator_t1914  (*) (Dictionary_2_t1909 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12254_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t897  Dictionary_2_U3CCopyToU3Em__0_m12256_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12256(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t897  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12256_gshared)(__this /* static, unused */, ___key, ___value, method)
