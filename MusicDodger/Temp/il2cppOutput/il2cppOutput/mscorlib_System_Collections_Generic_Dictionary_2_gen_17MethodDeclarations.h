#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1932;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t637;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2410;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t1937;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1941;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1801;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t2453;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t649;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2454;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2455;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t896;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m12534_gshared (Dictionary_2_t1932 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12534(__this, method) (( void (*) (Dictionary_2_t1932 *, const MethodInfo*))Dictionary_2__ctor_m12534_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12535_gshared (Dictionary_2_t1932 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12535(__this, ___comparer, method) (( void (*) (Dictionary_2_t1932 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12535_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m12536_gshared (Dictionary_2_t1932 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m12536(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1932 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12536_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12537_gshared (Dictionary_2_t1932 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12537(__this, ___capacity, method) (( void (*) (Dictionary_2_t1932 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12537_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12538_gshared (Dictionary_2_t1932 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12538(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1932 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12538_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12539_gshared (Dictionary_2_t1932 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12539(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1932 *, SerializationInfo_t649 *, StreamingContext_t650 , const MethodInfo*))Dictionary_2__ctor_m12539_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12540_gshared (Dictionary_2_t1932 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12540(__this, method) (( Object_t* (*) (Dictionary_2_t1932 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12540_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12541_gshared (Dictionary_2_t1932 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12541(__this, method) (( Object_t* (*) (Dictionary_2_t1932 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12541_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12542_gshared (Dictionary_2_t1932 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12542(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1932 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12542_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12543_gshared (Dictionary_2_t1932 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12543(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1932 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12543_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12544_gshared (Dictionary_2_t1932 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12544(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1932 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12544_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12545_gshared (Dictionary_2_t1932 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12545(__this, ___key, method) (( bool (*) (Dictionary_2_t1932 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12545_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12546_gshared (Dictionary_2_t1932 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12546(__this, ___key, method) (( void (*) (Dictionary_2_t1932 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12546_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12547_gshared (Dictionary_2_t1932 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12547(__this, method) (( bool (*) (Dictionary_2_t1932 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12547_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12548_gshared (Dictionary_2_t1932 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12548(__this, method) (( Object_t * (*) (Dictionary_2_t1932 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12548_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12549_gshared (Dictionary_2_t1932 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12549(__this, method) (( bool (*) (Dictionary_2_t1932 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12549_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12550_gshared (Dictionary_2_t1932 * __this, KeyValuePair_2_t1935  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12550(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1932 *, KeyValuePair_2_t1935 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12550_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12551_gshared (Dictionary_2_t1932 * __this, KeyValuePair_2_t1935  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12551(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1932 *, KeyValuePair_2_t1935 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12551_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12552_gshared (Dictionary_2_t1932 * __this, KeyValuePair_2U5BU5D_t2454* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12552(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1932 *, KeyValuePair_2U5BU5D_t2454*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12552_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12553_gshared (Dictionary_2_t1932 * __this, KeyValuePair_2_t1935  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12553(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1932 *, KeyValuePair_2_t1935 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12553_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12554_gshared (Dictionary_2_t1932 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12554(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1932 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12554_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12555_gshared (Dictionary_2_t1932 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12555(__this, method) (( Object_t * (*) (Dictionary_2_t1932 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12555_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12556_gshared (Dictionary_2_t1932 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12556(__this, method) (( Object_t* (*) (Dictionary_2_t1932 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12556_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12557_gshared (Dictionary_2_t1932 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12557(__this, method) (( Object_t * (*) (Dictionary_2_t1932 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12557_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12558_gshared (Dictionary_2_t1932 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12558(__this, method) (( int32_t (*) (Dictionary_2_t1932 *, const MethodInfo*))Dictionary_2_get_Count_m12558_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12559_gshared (Dictionary_2_t1932 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12559(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1932 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12559_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12560_gshared (Dictionary_2_t1932 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12560(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1932 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m12560_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12561_gshared (Dictionary_2_t1932 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12561(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1932 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12561_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12562_gshared (Dictionary_2_t1932 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12562(__this, ___size, method) (( void (*) (Dictionary_2_t1932 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12562_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12563_gshared (Dictionary_2_t1932 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12563(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1932 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12563_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1935  Dictionary_2_make_pair_m12564_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12564(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1935  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m12564_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m12565_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m12565(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m12565_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12566_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12566(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m12566_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12567_gshared (Dictionary_2_t1932 * __this, KeyValuePair_2U5BU5D_t2454* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12567(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1932 *, KeyValuePair_2U5BU5D_t2454*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12567_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m12568_gshared (Dictionary_2_t1932 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12568(__this, method) (( void (*) (Dictionary_2_t1932 *, const MethodInfo*))Dictionary_2_Resize_m12568_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12569_gshared (Dictionary_2_t1932 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12569(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1932 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m12569_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12570_gshared (Dictionary_2_t1932 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12570(__this, method) (( void (*) (Dictionary_2_t1932 *, const MethodInfo*))Dictionary_2_Clear_m12570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12571_gshared (Dictionary_2_t1932 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12571(__this, ___key, method) (( bool (*) (Dictionary_2_t1932 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12571_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12572_gshared (Dictionary_2_t1932 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12572(__this, ___value, method) (( bool (*) (Dictionary_2_t1932 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m12572_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12573_gshared (Dictionary_2_t1932 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12573(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1932 *, SerializationInfo_t649 *, StreamingContext_t650 , const MethodInfo*))Dictionary_2_GetObjectData_m12573_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12574_gshared (Dictionary_2_t1932 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12574(__this, ___sender, method) (( void (*) (Dictionary_2_t1932 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12574_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12575_gshared (Dictionary_2_t1932 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12575(__this, ___key, method) (( bool (*) (Dictionary_2_t1932 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12575_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12576_gshared (Dictionary_2_t1932 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12576(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1932 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12576_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t1937 * Dictionary_2_get_Keys_m12577_gshared (Dictionary_2_t1932 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m12577(__this, method) (( KeyCollection_t1937 * (*) (Dictionary_2_t1932 *, const MethodInfo*))Dictionary_2_get_Keys_m12577_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1941 * Dictionary_2_get_Values_m12578_gshared (Dictionary_2_t1932 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12578(__this, method) (( ValueCollection_t1941 * (*) (Dictionary_2_t1932 *, const MethodInfo*))Dictionary_2_get_Values_m12578_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12579_gshared (Dictionary_2_t1932 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12579(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1932 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12579_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12580_gshared (Dictionary_2_t1932 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12580(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1932 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12580_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12581_gshared (Dictionary_2_t1932 * __this, KeyValuePair_2_t1935  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12581(__this, ___pair, method) (( bool (*) (Dictionary_2_t1932 *, KeyValuePair_2_t1935 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12581_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1939  Dictionary_2_GetEnumerator_m12582_gshared (Dictionary_2_t1932 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12582(__this, method) (( Enumerator_t1939  (*) (Dictionary_2_t1932 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12582_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t897  Dictionary_2_U3CCopyToU3Em__0_m12583_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12583(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t897  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12583_gshared)(__this /* static, unused */, ___key, ___value, method)
