#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2131;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t637;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t2558;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t2135;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2139;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1801;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t2562;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t649;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t2563;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t2564;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t896;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m15398_gshared (Dictionary_2_t2131 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15398(__this, method) (( void (*) (Dictionary_2_t2131 *, const MethodInfo*))Dictionary_2__ctor_m15398_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15400_gshared (Dictionary_2_t2131 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15400(__this, ___comparer, method) (( void (*) (Dictionary_2_t2131 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15400_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m15402_gshared (Dictionary_2_t2131 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m15402(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2131 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15402_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15404_gshared (Dictionary_2_t2131 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15404(__this, ___capacity, method) (( void (*) (Dictionary_2_t2131 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15404_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15406_gshared (Dictionary_2_t2131 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15406(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2131 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15406_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15408_gshared (Dictionary_2_t2131 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15408(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2131 *, SerializationInfo_t649 *, StreamingContext_t650 , const MethodInfo*))Dictionary_2__ctor_m15408_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15410_gshared (Dictionary_2_t2131 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15410(__this, method) (( Object_t* (*) (Dictionary_2_t2131 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15410_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15412_gshared (Dictionary_2_t2131 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15412(__this, method) (( Object_t* (*) (Dictionary_2_t2131 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15412_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15414_gshared (Dictionary_2_t2131 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15414(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2131 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15414_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15416_gshared (Dictionary_2_t2131 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15416(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2131 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15416_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15418_gshared (Dictionary_2_t2131 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15418(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2131 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15418_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15420_gshared (Dictionary_2_t2131 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15420(__this, ___key, method) (( bool (*) (Dictionary_2_t2131 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15420_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15422_gshared (Dictionary_2_t2131 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15422(__this, ___key, method) (( void (*) (Dictionary_2_t2131 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15422_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15424_gshared (Dictionary_2_t2131 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15424(__this, method) (( bool (*) (Dictionary_2_t2131 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15424_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15426_gshared (Dictionary_2_t2131 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15426(__this, method) (( Object_t * (*) (Dictionary_2_t2131 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15426_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15428_gshared (Dictionary_2_t2131 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15428(__this, method) (( bool (*) (Dictionary_2_t2131 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15428_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15430_gshared (Dictionary_2_t2131 * __this, KeyValuePair_2_t2132  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15430(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2131 *, KeyValuePair_2_t2132 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15430_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15432_gshared (Dictionary_2_t2131 * __this, KeyValuePair_2_t2132  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15432(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2131 *, KeyValuePair_2_t2132 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15432_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15434_gshared (Dictionary_2_t2131 * __this, KeyValuePair_2U5BU5D_t2563* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15434(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2131 *, KeyValuePair_2U5BU5D_t2563*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15434_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15436_gshared (Dictionary_2_t2131 * __this, KeyValuePair_2_t2132  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15436(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2131 *, KeyValuePair_2_t2132 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15436_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15438_gshared (Dictionary_2_t2131 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15438(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2131 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15438_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15440_gshared (Dictionary_2_t2131 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15440(__this, method) (( Object_t * (*) (Dictionary_2_t2131 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15440_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15442_gshared (Dictionary_2_t2131 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15442(__this, method) (( Object_t* (*) (Dictionary_2_t2131 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15442_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15444_gshared (Dictionary_2_t2131 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15444(__this, method) (( Object_t * (*) (Dictionary_2_t2131 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15444_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15446_gshared (Dictionary_2_t2131 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15446(__this, method) (( int32_t (*) (Dictionary_2_t2131 *, const MethodInfo*))Dictionary_2_get_Count_m15446_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m15448_gshared (Dictionary_2_t2131 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15448(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2131 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m15448_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15450_gshared (Dictionary_2_t2131 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15450(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2131 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m15450_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15452_gshared (Dictionary_2_t2131 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15452(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2131 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15452_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15454_gshared (Dictionary_2_t2131 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15454(__this, ___size, method) (( void (*) (Dictionary_2_t2131 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15454_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15456_gshared (Dictionary_2_t2131 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15456(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2131 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15456_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2132  Dictionary_2_make_pair_m15458_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15458(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2132  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m15458_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m15460_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m15460(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m15460_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m15462_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15462(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m15462_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15464_gshared (Dictionary_2_t2131 * __this, KeyValuePair_2U5BU5D_t2563* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15464(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2131 *, KeyValuePair_2U5BU5D_t2563*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15464_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m15466_gshared (Dictionary_2_t2131 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15466(__this, method) (( void (*) (Dictionary_2_t2131 *, const MethodInfo*))Dictionary_2_Resize_m15466_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15468_gshared (Dictionary_2_t2131 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15468(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2131 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m15468_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m15470_gshared (Dictionary_2_t2131 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15470(__this, method) (( void (*) (Dictionary_2_t2131 *, const MethodInfo*))Dictionary_2_Clear_m15470_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15472_gshared (Dictionary_2_t2131 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15472(__this, ___key, method) (( bool (*) (Dictionary_2_t2131 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m15472_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15474_gshared (Dictionary_2_t2131 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15474(__this, ___value, method) (( bool (*) (Dictionary_2_t2131 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m15474_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15476_gshared (Dictionary_2_t2131 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15476(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2131 *, SerializationInfo_t649 *, StreamingContext_t650 , const MethodInfo*))Dictionary_2_GetObjectData_m15476_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15478_gshared (Dictionary_2_t2131 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15478(__this, ___sender, method) (( void (*) (Dictionary_2_t2131 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15478_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15480_gshared (Dictionary_2_t2131 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15480(__this, ___key, method) (( bool (*) (Dictionary_2_t2131 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m15480_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15482_gshared (Dictionary_2_t2131 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15482(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2131 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m15482_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2135 * Dictionary_2_get_Keys_m15484_gshared (Dictionary_2_t2131 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m15484(__this, method) (( KeyCollection_t2135 * (*) (Dictionary_2_t2131 *, const MethodInfo*))Dictionary_2_get_Keys_m15484_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2139 * Dictionary_2_get_Values_m15486_gshared (Dictionary_2_t2131 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15486(__this, method) (( ValueCollection_t2139 * (*) (Dictionary_2_t2131 *, const MethodInfo*))Dictionary_2_get_Values_m15486_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m15488_gshared (Dictionary_2_t2131 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15488(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2131 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15488_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m15490_gshared (Dictionary_2_t2131 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15490(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2131 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15490_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15492_gshared (Dictionary_2_t2131 * __this, KeyValuePair_2_t2132  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15492(__this, ___pair, method) (( bool (*) (Dictionary_2_t2131 *, KeyValuePair_2_t2132 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15492_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2137  Dictionary_2_GetEnumerator_m15494_gshared (Dictionary_2_t2131 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15494(__this, method) (( Enumerator_t2137  (*) (Dictionary_2_t2131 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15494_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t897  Dictionary_2_U3CCopyToU3Em__0_m15496_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15496(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t897  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15496_gshared)(__this /* static, unused */, ___key, ___value, method)
