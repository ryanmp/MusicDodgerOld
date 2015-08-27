#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct List_1_t516;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.MatchDirectConnectInfo
struct MatchDirectConnectInfo_t515;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct IEnumerator_1_t2568;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct ICollection_1_t2569;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct IEnumerable_1_t2570;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct ReadOnlyCollection_1_t2153;
// UnityEngine.Networking.Match.MatchDirectConnectInfo[]
struct MatchDirectConnectInfoU5BU5D_t2151;
// System.Predicate`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct Predicate_1_t2154;
// System.Comparison`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct Comparison_1_t2156;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_20MethodDeclarations.h"
#define List_1__ctor_m15646(__this, method) (( void (*) (List_1_t516 *, const MethodInfo*))List_1__ctor_m3336_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.ctor(System.Int32)
#define List_1__ctor_m15647(__this, ___capacity, method) (( void (*) (List_1_t516 *, int32_t, const MethodInfo*))List_1__ctor_m10453_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::.cctor()
#define List_1__cctor_m15648(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10455_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15649(__this, method) (( Object_t* (*) (List_1_t516 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m15650(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t516 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15651(__this, method) (( Object_t * (*) (List_1_t516 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10461_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m15652(__this, ___item, method) (( int32_t (*) (List_1_t516 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10463_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m15653(__this, ___item, method) (( bool (*) (List_1_t516 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10465_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m15654(__this, ___item, method) (( int32_t (*) (List_1_t516 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10467_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m15655(__this, ___index, ___item, method) (( void (*) (List_1_t516 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10469_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m15656(__this, ___item, method) (( void (*) (List_1_t516 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10471_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15657(__this, method) (( bool (*) (List_1_t516 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10473_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15658(__this, method) (( bool (*) (List_1_t516 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10475_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m15659(__this, method) (( Object_t * (*) (List_1_t516 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10477_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m15660(__this, method) (( bool (*) (List_1_t516 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10479_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m15661(__this, method) (( bool (*) (List_1_t516 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10481_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m15662(__this, ___index, method) (( Object_t * (*) (List_1_t516 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10483_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m15663(__this, ___index, ___value, method) (( void (*) (List_1_t516 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10485_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Add(T)
#define List_1_Add_m15664(__this, ___item, method) (( void (*) (List_1_t516 *, MatchDirectConnectInfo_t515 *, const MethodInfo*))List_1_Add_m10487_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m15665(__this, ___newCount, method) (( void (*) (List_1_t516 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10489_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m15666(__this, ___collection, method) (( void (*) (List_1_t516 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m15667(__this, ___enumerable, method) (( void (*) (List_1_t516 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10493_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m15668(__this, ___collection, method) (( void (*) (List_1_t516 *, Object_t*, const MethodInfo*))List_1_AddRange_m10495_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::AsReadOnly()
#define List_1_AsReadOnly_m15669(__this, method) (( ReadOnlyCollection_1_t2153 * (*) (List_1_t516 *, const MethodInfo*))List_1_AsReadOnly_m10497_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Clear()
#define List_1_Clear_m15670(__this, method) (( void (*) (List_1_t516 *, const MethodInfo*))List_1_Clear_m10499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Contains(T)
#define List_1_Contains_m15671(__this, ___item, method) (( bool (*) (List_1_t516 *, MatchDirectConnectInfo_t515 *, const MethodInfo*))List_1_Contains_m10501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m15672(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t516 *, MatchDirectConnectInfoU5BU5D_t2151*, int32_t, const MethodInfo*))List_1_CopyTo_m10503_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m15673(__this, ___match, method) (( MatchDirectConnectInfo_t515 * (*) (List_1_t516 *, Predicate_1_t2154 *, const MethodInfo*))List_1_Find_m10505_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m15674(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2154 *, const MethodInfo*))List_1_CheckMatch_m10507_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m15675(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t516 *, int32_t, int32_t, Predicate_1_t2154 *, const MethodInfo*))List_1_GetIndex_m10509_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
#define List_1_GetEnumerator_m15676(__this, method) (( Enumerator_t2155  (*) (List_1_t516 *, const MethodInfo*))List_1_GetEnumerator_m10510_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::IndexOf(T)
#define List_1_IndexOf_m15677(__this, ___item, method) (( int32_t (*) (List_1_t516 *, MatchDirectConnectInfo_t515 *, const MethodInfo*))List_1_IndexOf_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m15678(__this, ___start, ___delta, method) (( void (*) (List_1_t516 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10514_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m15679(__this, ___index, method) (( void (*) (List_1_t516 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Insert(System.Int32,T)
#define List_1_Insert_m15680(__this, ___index, ___item, method) (( void (*) (List_1_t516 *, int32_t, MatchDirectConnectInfo_t515 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m15681(__this, ___collection, method) (( void (*) (List_1_t516 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10520_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Remove(T)
#define List_1_Remove_m15682(__this, ___item, method) (( bool (*) (List_1_t516 *, MatchDirectConnectInfo_t515 *, const MethodInfo*))List_1_Remove_m10522_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m15683(__this, ___match, method) (( int32_t (*) (List_1_t516 *, Predicate_1_t2154 *, const MethodInfo*))List_1_RemoveAll_m10524_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m15684(__this, ___index, method) (( void (*) (List_1_t516 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10526_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Reverse()
#define List_1_Reverse_m15685(__this, method) (( void (*) (List_1_t516 *, const MethodInfo*))List_1_Reverse_m10528_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Sort()
#define List_1_Sort_m15686(__this, method) (( void (*) (List_1_t516 *, const MethodInfo*))List_1_Sort_m10530_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m15687(__this, ___comparison, method) (( void (*) (List_1_t516 *, Comparison_1_t2156 *, const MethodInfo*))List_1_Sort_m10532_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::ToArray()
#define List_1_ToArray_m15688(__this, method) (( MatchDirectConnectInfoU5BU5D_t2151* (*) (List_1_t516 *, const MethodInfo*))List_1_ToArray_m10534_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::TrimExcess()
#define List_1_TrimExcess_m15689(__this, method) (( void (*) (List_1_t516 *, const MethodInfo*))List_1_TrimExcess_m10536_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Capacity()
#define List_1_get_Capacity_m15690(__this, method) (( int32_t (*) (List_1_t516 *, const MethodInfo*))List_1_get_Capacity_m10538_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m15691(__this, ___value, method) (( void (*) (List_1_t516 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10540_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
#define List_1_get_Count_m15692(__this, method) (( int32_t (*) (List_1_t516 *, const MethodInfo*))List_1_get_Count_m10542_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Item(System.Int32)
#define List_1_get_Item_m15693(__this, ___index, method) (( MatchDirectConnectInfo_t515 * (*) (List_1_t516 *, int32_t, const MethodInfo*))List_1_get_Item_m10544_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m15694(__this, ___index, ___value, method) (( void (*) (List_1_t516 *, int32_t, MatchDirectConnectInfo_t515 *, const MethodInfo*))List_1_set_Item_m10546_gshared)(__this, ___index, ___value, method)
