#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2168;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>
struct ICollection_1_t2574;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t637;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct KeyCollection_t2172;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ValueCollection_t2176;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t2165;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct IDictionary_2_t2579;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t649;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>[]
struct KeyValuePair_2U5BU5D_t2580;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
struct IEnumerator_1_t2581;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t896;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m15832_gshared (Dictionary_2_t2168 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15832(__this, method) (( void (*) (Dictionary_2_t2168 *, const MethodInfo*))Dictionary_2__ctor_m15832_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15834_gshared (Dictionary_2_t2168 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15834(__this, ___comparer, method) (( void (*) (Dictionary_2_t2168 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15834_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m15836_gshared (Dictionary_2_t2168 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m15836(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2168 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15836_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15838_gshared (Dictionary_2_t2168 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15838(__this, ___capacity, method) (( void (*) (Dictionary_2_t2168 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15838_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15840_gshared (Dictionary_2_t2168 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15840(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2168 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15840_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15842_gshared (Dictionary_2_t2168 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15842(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2168 *, SerializationInfo_t649 *, StreamingContext_t650 , const MethodInfo*))Dictionary_2__ctor_m15842_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15844_gshared (Dictionary_2_t2168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15844(__this, method) (( Object_t* (*) (Dictionary_2_t2168 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15844_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15846_gshared (Dictionary_2_t2168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15846(__this, method) (( Object_t* (*) (Dictionary_2_t2168 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15846_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15848_gshared (Dictionary_2_t2168 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15848(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2168 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15848_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15850_gshared (Dictionary_2_t2168 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15850(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2168 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15850_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15852_gshared (Dictionary_2_t2168 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15852(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2168 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15852_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15854_gshared (Dictionary_2_t2168 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15854(__this, ___key, method) (( bool (*) (Dictionary_2_t2168 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15854_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15856_gshared (Dictionary_2_t2168 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15856(__this, ___key, method) (( void (*) (Dictionary_2_t2168 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15856_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15858_gshared (Dictionary_2_t2168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15858(__this, method) (( bool (*) (Dictionary_2_t2168 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15858_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15860_gshared (Dictionary_2_t2168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15860(__this, method) (( Object_t * (*) (Dictionary_2_t2168 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15860_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15862_gshared (Dictionary_2_t2168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15862(__this, method) (( bool (*) (Dictionary_2_t2168 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15862_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15864_gshared (Dictionary_2_t2168 * __this, KeyValuePair_2_t2169  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15864(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2168 *, KeyValuePair_2_t2169 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15864_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15866_gshared (Dictionary_2_t2168 * __this, KeyValuePair_2_t2169  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15866(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2168 *, KeyValuePair_2_t2169 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15866_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15868_gshared (Dictionary_2_t2168 * __this, KeyValuePair_2U5BU5D_t2580* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15868(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2168 *, KeyValuePair_2U5BU5D_t2580*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15868_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15870_gshared (Dictionary_2_t2168 * __this, KeyValuePair_2_t2169  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15870(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2168 *, KeyValuePair_2_t2169 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15870_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15872_gshared (Dictionary_2_t2168 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15872(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2168 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15872_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15874_gshared (Dictionary_2_t2168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15874(__this, method) (( Object_t * (*) (Dictionary_2_t2168 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15874_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15876_gshared (Dictionary_2_t2168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15876(__this, method) (( Object_t* (*) (Dictionary_2_t2168 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15876_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15878_gshared (Dictionary_2_t2168 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15878(__this, method) (( Object_t * (*) (Dictionary_2_t2168 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15878_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15880_gshared (Dictionary_2_t2168 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15880(__this, method) (( int32_t (*) (Dictionary_2_t2168 *, const MethodInfo*))Dictionary_2_get_Count_m15880_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m15882_gshared (Dictionary_2_t2168 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15882(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2168 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m15882_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15884_gshared (Dictionary_2_t2168 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15884(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2168 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m15884_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15886_gshared (Dictionary_2_t2168 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15886(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2168 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15886_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15888_gshared (Dictionary_2_t2168 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15888(__this, ___size, method) (( void (*) (Dictionary_2_t2168 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15888_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15890_gshared (Dictionary_2_t2168 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15890(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2168 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15890_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2169  Dictionary_2_make_pair_m15892_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15892(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2169  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m15892_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m15894_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m15894(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m15894_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m15896_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15896(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m15896_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15898_gshared (Dictionary_2_t2168 * __this, KeyValuePair_2U5BU5D_t2580* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15898(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2168 *, KeyValuePair_2U5BU5D_t2580*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15898_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m15900_gshared (Dictionary_2_t2168 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15900(__this, method) (( void (*) (Dictionary_2_t2168 *, const MethodInfo*))Dictionary_2_Resize_m15900_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15902_gshared (Dictionary_2_t2168 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15902(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2168 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m15902_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m15904_gshared (Dictionary_2_t2168 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15904(__this, method) (( void (*) (Dictionary_2_t2168 *, const MethodInfo*))Dictionary_2_Clear_m15904_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15906_gshared (Dictionary_2_t2168 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15906(__this, ___key, method) (( bool (*) (Dictionary_2_t2168 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m15906_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15908_gshared (Dictionary_2_t2168 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15908(__this, ___value, method) (( bool (*) (Dictionary_2_t2168 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m15908_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15910_gshared (Dictionary_2_t2168 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15910(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2168 *, SerializationInfo_t649 *, StreamingContext_t650 , const MethodInfo*))Dictionary_2_GetObjectData_m15910_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15912_gshared (Dictionary_2_t2168 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15912(__this, ___sender, method) (( void (*) (Dictionary_2_t2168 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15912_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15914_gshared (Dictionary_2_t2168 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15914(__this, ___key, method) (( bool (*) (Dictionary_2_t2168 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m15914_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15916_gshared (Dictionary_2_t2168 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15916(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2168 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m15916_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Keys()
extern "C" KeyCollection_t2172 * Dictionary_2_get_Keys_m15918_gshared (Dictionary_2_t2168 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m15918(__this, method) (( KeyCollection_t2172 * (*) (Dictionary_2_t2168 *, const MethodInfo*))Dictionary_2_get_Keys_m15918_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Values()
extern "C" ValueCollection_t2176 * Dictionary_2_get_Values_m15920_gshared (Dictionary_2_t2168 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15920(__this, method) (( ValueCollection_t2176 * (*) (Dictionary_2_t2168 *, const MethodInfo*))Dictionary_2_get_Values_m15920_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m15922_gshared (Dictionary_2_t2168 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15922(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t2168 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15922_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m15924_gshared (Dictionary_2_t2168 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15924(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2168 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15924_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15926_gshared (Dictionary_2_t2168 * __this, KeyValuePair_2_t2169  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15926(__this, ___pair, method) (( bool (*) (Dictionary_2_t2168 *, KeyValuePair_2_t2169 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15926_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetEnumerator()
extern "C" Enumerator_t2174  Dictionary_2_GetEnumerator_m15928_gshared (Dictionary_2_t2168 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15928(__this, method) (( Enumerator_t2174  (*) (Dictionary_2_t2168 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15928_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t897  Dictionary_2_U3CCopyToU3Em__0_m15930_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15930(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t897  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15930_gshared)(__this /* static, unused */, ___key, ___value, method)
