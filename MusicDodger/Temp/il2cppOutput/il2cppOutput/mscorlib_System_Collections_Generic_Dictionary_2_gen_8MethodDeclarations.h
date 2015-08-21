#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t492;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t364;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t2002;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t1779;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t1780;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1508;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t2003;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2004;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t2005;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t621;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__18.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_21MethodDeclarations.h"
#define Dictionary_2__ctor_m11838(__this, method) (( void (*) (Dictionary_2_t492 *, const MethodInfo*))Dictionary_2__ctor_m11839_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m2548(__this, ___comparer, method) (( void (*) (Dictionary_2_t492 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11840_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m11841(__this, ___dictionary, method) (( void (*) (Dictionary_2_t492 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11842_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Int32)
#define Dictionary_2__ctor_m11843(__this, ___capacity, method) (( void (*) (Dictionary_2_t492 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11844_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m11845(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t492 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11846_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m11847(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t492 *, SerializationInfo_t379 *, StreamingContext_t380 , const MethodInfo*))Dictionary_2__ctor_m11848_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11849(__this, method) (( Object_t* (*) (Dictionary_2_t492 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11850_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11851(__this, method) (( Object_t* (*) (Dictionary_2_t492 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11852_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11853(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t492 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11854_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11855(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t492 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11856_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m11857(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t492 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11858_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m11859(__this, ___key, method) (( bool (*) (Dictionary_2_t492 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11860_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m11861(__this, ___key, method) (( void (*) (Dictionary_2_t492 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11862_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11863(__this, method) (( Object_t * (*) (Dictionary_2_t492 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11864_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11865(__this, method) (( bool (*) (Dictionary_2_t492 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11866_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11867(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t492 *, KeyValuePair_2_t1778 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11868_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11869(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t492 *, KeyValuePair_2_t1778 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11870_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11871(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t492 *, KeyValuePair_2U5BU5D_t2004*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11872_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11873(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t492 *, KeyValuePair_2_t1778 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11874_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11875(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t492 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11876_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11877(__this, method) (( Object_t * (*) (Dictionary_2_t492 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11878_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11879(__this, method) (( Object_t* (*) (Dictionary_2_t492 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11880_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11881(__this, method) (( Object_t * (*) (Dictionary_2_t492 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11882_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Count()
#define Dictionary_2_get_Count_m11883(__this, method) (( int32_t (*) (Dictionary_2_t492 *, const MethodInfo*))Dictionary_2_get_Count_m11884_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(TKey)
#define Dictionary_2_get_Item_m11885(__this, ___key, method) (( bool (*) (Dictionary_2_t492 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m11886_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m11887(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t492 *, String_t*, bool, const MethodInfo*))Dictionary_2_set_Item_m11888_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m11889(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t492 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11890_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m11891(__this, ___size, method) (( void (*) (Dictionary_2_t492 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11892_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m11893(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t492 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11894_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m11895(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1778  (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_make_pair_m11896_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m11897(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_pick_key_m11898_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m11899(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_pick_value_m11900_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m11901(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t492 *, KeyValuePair_2U5BU5D_t2004*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11902_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Resize()
#define Dictionary_2_Resize_m11903(__this, method) (( void (*) (Dictionary_2_t492 *, const MethodInfo*))Dictionary_2_Resize_m11904_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
#define Dictionary_2_Add_m11905(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t492 *, String_t*, bool, const MethodInfo*))Dictionary_2_Add_m11906_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Clear()
#define Dictionary_2_Clear_m11907(__this, method) (( void (*) (Dictionary_2_t492 *, const MethodInfo*))Dictionary_2_Clear_m11908_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m11909(__this, ___key, method) (( bool (*) (Dictionary_2_t492 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m11910_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m11911(__this, ___value, method) (( bool (*) (Dictionary_2_t492 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m11912_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m11913(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t492 *, SerializationInfo_t379 *, StreamingContext_t380 , const MethodInfo*))Dictionary_2_GetObjectData_m11914_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m11915(__this, ___sender, method) (( void (*) (Dictionary_2_t492 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11916_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Remove(TKey)
#define Dictionary_2_Remove_m11917(__this, ___key, method) (( bool (*) (Dictionary_2_t492 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m11918_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m11919(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t492 *, String_t*, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m11920_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Keys()
#define Dictionary_2_get_Keys_m11921(__this, method) (( KeyCollection_t1779 * (*) (Dictionary_2_t492 *, const MethodInfo*))Dictionary_2_get_Keys_m11922_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Values()
#define Dictionary_2_get_Values_m11923(__this, method) (( ValueCollection_t1780 * (*) (Dictionary_2_t492 *, const MethodInfo*))Dictionary_2_get_Values_m11924_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m11925(__this, ___key, method) (( String_t* (*) (Dictionary_2_t492 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11926_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m11927(__this, ___value, method) (( bool (*) (Dictionary_2_t492 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11928_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m11929(__this, ___pair, method) (( bool (*) (Dictionary_2_t492 *, KeyValuePair_2_t1778 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11930_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m11931(__this, method) (( Enumerator_t1781  (*) (Dictionary_2_t492 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11932_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m11933(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t622  (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11934_gshared)(__this /* static, unused */, ___key, ___value, method)
