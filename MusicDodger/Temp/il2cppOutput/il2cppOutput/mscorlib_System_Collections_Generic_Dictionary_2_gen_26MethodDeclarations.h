#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2296;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t637;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t2642;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t2300;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2304;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1801;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t2646;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t649;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2647;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2648;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t896;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__22.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m17415_gshared (Dictionary_2_t2296 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17415(__this, method) (( void (*) (Dictionary_2_t2296 *, const MethodInfo*))Dictionary_2__ctor_m17415_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17416_gshared (Dictionary_2_t2296 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17416(__this, ___comparer, method) (( void (*) (Dictionary_2_t2296 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17416_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m17418_gshared (Dictionary_2_t2296 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m17418(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2296 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17418_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17420_gshared (Dictionary_2_t2296 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17420(__this, ___capacity, method) (( void (*) (Dictionary_2_t2296 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17420_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17422_gshared (Dictionary_2_t2296 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17422(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2296 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17422_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17424_gshared (Dictionary_2_t2296 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17424(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2296 *, SerializationInfo_t649 *, StreamingContext_t650 , const MethodInfo*))Dictionary_2__ctor_m17424_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17426_gshared (Dictionary_2_t2296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17426(__this, method) (( Object_t* (*) (Dictionary_2_t2296 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17426_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17428_gshared (Dictionary_2_t2296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17428(__this, method) (( Object_t* (*) (Dictionary_2_t2296 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17428_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17430_gshared (Dictionary_2_t2296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17430(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2296 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17430_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17432_gshared (Dictionary_2_t2296 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17432(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2296 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17432_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17434_gshared (Dictionary_2_t2296 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17434(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2296 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17434_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17436_gshared (Dictionary_2_t2296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17436(__this, ___key, method) (( bool (*) (Dictionary_2_t2296 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17436_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17438_gshared (Dictionary_2_t2296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17438(__this, ___key, method) (( void (*) (Dictionary_2_t2296 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17438_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17440_gshared (Dictionary_2_t2296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17440(__this, method) (( bool (*) (Dictionary_2_t2296 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17440_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17442_gshared (Dictionary_2_t2296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17442(__this, method) (( Object_t * (*) (Dictionary_2_t2296 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17442_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17444_gshared (Dictionary_2_t2296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17444(__this, method) (( bool (*) (Dictionary_2_t2296 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17444_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17446_gshared (Dictionary_2_t2296 * __this, KeyValuePair_2_t2297  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17446(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2296 *, KeyValuePair_2_t2297 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17446_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17448_gshared (Dictionary_2_t2296 * __this, KeyValuePair_2_t2297  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17448(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2296 *, KeyValuePair_2_t2297 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17448_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17450_gshared (Dictionary_2_t2296 * __this, KeyValuePair_2U5BU5D_t2647* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17450(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2296 *, KeyValuePair_2U5BU5D_t2647*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17450_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17452_gshared (Dictionary_2_t2296 * __this, KeyValuePair_2_t2297  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17452(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2296 *, KeyValuePair_2_t2297 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17452_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17454_gshared (Dictionary_2_t2296 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17454(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2296 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17454_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17456_gshared (Dictionary_2_t2296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17456(__this, method) (( Object_t * (*) (Dictionary_2_t2296 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17456_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17458_gshared (Dictionary_2_t2296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17458(__this, method) (( Object_t* (*) (Dictionary_2_t2296 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17458_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17460_gshared (Dictionary_2_t2296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17460(__this, method) (( Object_t * (*) (Dictionary_2_t2296 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17460_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17462_gshared (Dictionary_2_t2296 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17462(__this, method) (( int32_t (*) (Dictionary_2_t2296 *, const MethodInfo*))Dictionary_2_get_Count_m17462_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m17464_gshared (Dictionary_2_t2296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17464(__this, ___key, method) (( bool (*) (Dictionary_2_t2296 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17464_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17466_gshared (Dictionary_2_t2296 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17466(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2296 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m17466_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17468_gshared (Dictionary_2_t2296 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17468(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2296 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17468_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17470_gshared (Dictionary_2_t2296 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17470(__this, ___size, method) (( void (*) (Dictionary_2_t2296 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17470_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17472_gshared (Dictionary_2_t2296 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17472(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2296 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17472_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2297  Dictionary_2_make_pair_m17474_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17474(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2297  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m17474_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m17476_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m17476(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m17476_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m17478_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17478(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m17478_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17480_gshared (Dictionary_2_t2296 * __this, KeyValuePair_2U5BU5D_t2647* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17480(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2296 *, KeyValuePair_2U5BU5D_t2647*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17480_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m17482_gshared (Dictionary_2_t2296 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17482(__this, method) (( void (*) (Dictionary_2_t2296 *, const MethodInfo*))Dictionary_2_Resize_m17482_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17484_gshared (Dictionary_2_t2296 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17484(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2296 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m17484_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m17486_gshared (Dictionary_2_t2296 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17486(__this, method) (( void (*) (Dictionary_2_t2296 *, const MethodInfo*))Dictionary_2_Clear_m17486_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17488_gshared (Dictionary_2_t2296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17488(__this, ___key, method) (( bool (*) (Dictionary_2_t2296 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17488_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17490_gshared (Dictionary_2_t2296 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17490(__this, ___value, method) (( bool (*) (Dictionary_2_t2296 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m17490_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17492_gshared (Dictionary_2_t2296 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17492(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2296 *, SerializationInfo_t649 *, StreamingContext_t650 , const MethodInfo*))Dictionary_2_GetObjectData_m17492_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17494_gshared (Dictionary_2_t2296 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17494(__this, ___sender, method) (( void (*) (Dictionary_2_t2296 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17494_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17496_gshared (Dictionary_2_t2296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17496(__this, ___key, method) (( bool (*) (Dictionary_2_t2296 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17496_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17498_gshared (Dictionary_2_t2296 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17498(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2296 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m17498_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t2300 * Dictionary_2_get_Keys_m17500_gshared (Dictionary_2_t2296 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m17500(__this, method) (( KeyCollection_t2300 * (*) (Dictionary_2_t2296 *, const MethodInfo*))Dictionary_2_get_Keys_m17500_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2304 * Dictionary_2_get_Values_m17502_gshared (Dictionary_2_t2296 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17502(__this, method) (( ValueCollection_t2304 * (*) (Dictionary_2_t2296 *, const MethodInfo*))Dictionary_2_get_Values_m17502_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17504_gshared (Dictionary_2_t2296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17504(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2296 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17504_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m17506_gshared (Dictionary_2_t2296 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17506(__this, ___value, method) (( bool (*) (Dictionary_2_t2296 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17506_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17508_gshared (Dictionary_2_t2296 * __this, KeyValuePair_2_t2297  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17508(__this, ___pair, method) (( bool (*) (Dictionary_2_t2296 *, KeyValuePair_2_t2297 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17508_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2302  Dictionary_2_GetEnumerator_m17510_gshared (Dictionary_2_t2296 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17510(__this, method) (( Enumerator_t2302  (*) (Dictionary_2_t2296 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17510_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t897  Dictionary_2_U3CCopyToU3Em__0_m17512_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17512(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t897  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17512_gshared)(__this /* static, unused */, ___key, ___value, method)
