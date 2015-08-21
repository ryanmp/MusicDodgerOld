#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1700;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t365;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t1980;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t1701;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t1705;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1510;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t1981;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t1982;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t1983;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t621;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m11196_gshared (Dictionary_2_t1700 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11196(__this, method) (( void (*) (Dictionary_2_t1700 *, const MethodInfo*))Dictionary_2__ctor_m11196_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11198_gshared (Dictionary_2_t1700 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11198(__this, ___comparer, method) (( void (*) (Dictionary_2_t1700 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11198_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11200_gshared (Dictionary_2_t1700 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11200(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1700 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11200_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11202_gshared (Dictionary_2_t1700 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11202(__this, ___capacity, method) (( void (*) (Dictionary_2_t1700 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11202_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11204_gshared (Dictionary_2_t1700 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11204(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1700 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11204_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11206_gshared (Dictionary_2_t1700 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11206(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1700 *, SerializationInfo_t379 *, StreamingContext_t380 , const MethodInfo*))Dictionary_2__ctor_m11206_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11208_gshared (Dictionary_2_t1700 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11208(__this, method) (( Object_t* (*) (Dictionary_2_t1700 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11208_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11210_gshared (Dictionary_2_t1700 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11210(__this, method) (( Object_t* (*) (Dictionary_2_t1700 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11210_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11212_gshared (Dictionary_2_t1700 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11212(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1700 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11212_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11214_gshared (Dictionary_2_t1700 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11214(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1700 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11214_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11216_gshared (Dictionary_2_t1700 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11216(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1700 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11216_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11218_gshared (Dictionary_2_t1700 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11218(__this, ___key, method) (( bool (*) (Dictionary_2_t1700 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11218_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11220_gshared (Dictionary_2_t1700 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11220(__this, ___key, method) (( void (*) (Dictionary_2_t1700 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11220_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11222_gshared (Dictionary_2_t1700 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11222(__this, method) (( Object_t * (*) (Dictionary_2_t1700 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11222_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11224_gshared (Dictionary_2_t1700 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11224(__this, method) (( bool (*) (Dictionary_2_t1700 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11224_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11226_gshared (Dictionary_2_t1700 * __this, KeyValuePair_2_t1674  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11226(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1700 *, KeyValuePair_2_t1674 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11226_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11228_gshared (Dictionary_2_t1700 * __this, KeyValuePair_2_t1674  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11228(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1700 *, KeyValuePair_2_t1674 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11228_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11230_gshared (Dictionary_2_t1700 * __this, KeyValuePair_2U5BU5D_t1982* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11230(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1700 *, KeyValuePair_2U5BU5D_t1982*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11230_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11232_gshared (Dictionary_2_t1700 * __this, KeyValuePair_2_t1674  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11232(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1700 *, KeyValuePair_2_t1674 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11232_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11234_gshared (Dictionary_2_t1700 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11234(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1700 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11234_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11236_gshared (Dictionary_2_t1700 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11236(__this, method) (( Object_t * (*) (Dictionary_2_t1700 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11236_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11238_gshared (Dictionary_2_t1700 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11238(__this, method) (( Object_t* (*) (Dictionary_2_t1700 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11238_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11240_gshared (Dictionary_2_t1700 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11240(__this, method) (( Object_t * (*) (Dictionary_2_t1700 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11240_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11242_gshared (Dictionary_2_t1700 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11242(__this, method) (( int32_t (*) (Dictionary_2_t1700 *, const MethodInfo*))Dictionary_2_get_Count_m11242_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t40  Dictionary_2_get_Item_m11244_gshared (Dictionary_2_t1700 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11244(__this, ___key, method) (( KeyValuePair_2_t40  (*) (Dictionary_2_t1700 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11244_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11246_gshared (Dictionary_2_t1700 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11246(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1700 *, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_set_Item_m11246_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11248_gshared (Dictionary_2_t1700 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11248(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1700 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11248_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11250_gshared (Dictionary_2_t1700 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11250(__this, ___size, method) (( void (*) (Dictionary_2_t1700 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11250_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11252_gshared (Dictionary_2_t1700 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11252(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1700 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11252_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1674  Dictionary_2_make_pair_m11254_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11254(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1674  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_make_pair_m11254_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11256_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11256(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_pick_key_m11256_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t40  Dictionary_2_pick_value_m11258_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11258(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t40  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_pick_value_m11258_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11260_gshared (Dictionary_2_t1700 * __this, KeyValuePair_2U5BU5D_t1982* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11260(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1700 *, KeyValuePair_2U5BU5D_t1982*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11260_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m11262_gshared (Dictionary_2_t1700 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11262(__this, method) (( void (*) (Dictionary_2_t1700 *, const MethodInfo*))Dictionary_2_Resize_m11262_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11264_gshared (Dictionary_2_t1700 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11264(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1700 *, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_Add_m11264_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m11266_gshared (Dictionary_2_t1700 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11266(__this, method) (( void (*) (Dictionary_2_t1700 *, const MethodInfo*))Dictionary_2_Clear_m11266_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11268_gshared (Dictionary_2_t1700 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11268(__this, ___key, method) (( bool (*) (Dictionary_2_t1700 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11268_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11270_gshared (Dictionary_2_t1700 * __this, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11270(__this, ___value, method) (( bool (*) (Dictionary_2_t1700 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_ContainsValue_m11270_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11272_gshared (Dictionary_2_t1700 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11272(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1700 *, SerializationInfo_t379 *, StreamingContext_t380 , const MethodInfo*))Dictionary_2_GetObjectData_m11272_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11274_gshared (Dictionary_2_t1700 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11274(__this, ___sender, method) (( void (*) (Dictionary_2_t1700 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11274_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11276_gshared (Dictionary_2_t1700 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11276(__this, ___key, method) (( bool (*) (Dictionary_2_t1700 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11276_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11278_gshared (Dictionary_2_t1700 * __this, Object_t * ___key, KeyValuePair_2_t40 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11278(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1700 *, Object_t *, KeyValuePair_2_t40 *, const MethodInfo*))Dictionary_2_TryGetValue_m11278_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t1701 * Dictionary_2_get_Keys_m11280_gshared (Dictionary_2_t1700 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11280(__this, method) (( KeyCollection_t1701 * (*) (Dictionary_2_t1700 *, const MethodInfo*))Dictionary_2_get_Keys_m11280_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t1705 * Dictionary_2_get_Values_m11282_gshared (Dictionary_2_t1700 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11282(__this, method) (( ValueCollection_t1705 * (*) (Dictionary_2_t1700 *, const MethodInfo*))Dictionary_2_get_Values_m11282_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11284_gshared (Dictionary_2_t1700 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11284(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1700 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11284_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t40  Dictionary_2_ToTValue_m11286_gshared (Dictionary_2_t1700 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11286(__this, ___value, method) (( KeyValuePair_2_t40  (*) (Dictionary_2_t1700 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11286_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11288_gshared (Dictionary_2_t1700 * __this, KeyValuePair_2_t1674  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11288(__this, ___pair, method) (( bool (*) (Dictionary_2_t1700 *, KeyValuePair_2_t1674 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11288_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t1703  Dictionary_2_GetEnumerator_m11290_gshared (Dictionary_2_t1700 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11290(__this, method) (( Enumerator_t1703  (*) (Dictionary_2_t1700 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11290_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t622  Dictionary_2_U3CCopyToU3Em__0_m11292_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11292(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t622  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11292_gshared)(__this /* static, unused */, ___key, ___value, method)
