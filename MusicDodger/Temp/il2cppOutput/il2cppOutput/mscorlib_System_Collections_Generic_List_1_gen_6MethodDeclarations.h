#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t174;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1885;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.String[]
struct StringU5BU5D_t45;
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
#define List_1__ctor_m1505(__this, method) (( void (*) (List_1_t174 *, const MethodInfo*))List_1__ctor_m1539_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
#define List_1__ctor_m9907(__this, ___capacity, method) (( void (*) (List_1_t174 *, int32_t, const MethodInfo*))List_1__ctor_m8623_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.String>::.cctor()
#define List_1__cctor_m9908(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8625_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9909(__this, method) (( Object_t* (*) (List_1_t174 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8627_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9910(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t174 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8629_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9911(__this, method) (( Object_t * (*) (List_1_t174 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9912(__this, ___item, method) (( int32_t (*) (List_1_t174 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8633_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9913(__this, ___item, method) (( bool (*) (List_1_t174 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8635_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9914(__this, ___item, method) (( int32_t (*) (List_1_t174 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8637_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9915(__this, ___index, ___item, method) (( void (*) (List_1_t174 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8639_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9916(__this, ___item, method) (( void (*) (List_1_t174 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8641_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9917(__this, method) (( bool (*) (List_1_t174 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8643_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9918(__this, method) (( Object_t * (*) (List_1_t174 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8645_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9919(__this, ___index, method) (( Object_t * (*) (List_1_t174 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8647_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9920(__this, ___index, ___value, method) (( void (*) (List_1_t174 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8649_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
#define List_1_Add_m9921(__this, ___item, method) (( void (*) (List_1_t174 *, String_t*, const MethodInfo*))List_1_Add_m8651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9922(__this, ___newCount, method) (( void (*) (List_1_t174 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8653_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
#define List_1_Clear_m9923(__this, method) (( void (*) (List_1_t174 *, const MethodInfo*))List_1_Clear_m8655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
#define List_1_Contains_m9924(__this, ___item, method) (( bool (*) (List_1_t174 *, String_t*, const MethodInfo*))List_1_Contains_m8657_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9925(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t174 *, StringU5BU5D_t45*, int32_t, const MethodInfo*))List_1_CopyTo_m8659_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m9926(__this, method) (( Enumerator_t1602  (*) (List_1_t174 *, const MethodInfo*))List_1_GetEnumerator_m8660_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
#define List_1_IndexOf_m9927(__this, ___item, method) (( int32_t (*) (List_1_t174 *, String_t*, const MethodInfo*))List_1_IndexOf_m8662_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9928(__this, ___start, ___delta, method) (( void (*) (List_1_t174 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8664_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9929(__this, ___index, method) (( void (*) (List_1_t174 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8666_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,T)
#define List_1_Insert_m9930(__this, ___index, ___item, method) (( void (*) (List_1_t174 *, int32_t, String_t*, const MethodInfo*))List_1_Insert_m8668_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
#define List_1_Remove_m9931(__this, ___item, method) (( bool (*) (List_1_t174 *, String_t*, const MethodInfo*))List_1_Remove_m8670_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9932(__this, ___index, method) (( void (*) (List_1_t174 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8672_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m8569(__this, method) (( StringU5BU5D_t45* (*) (List_1_t174 *, const MethodInfo*))List_1_ToArray_m8674_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Capacity()
#define List_1_get_Capacity_m9933(__this, method) (( int32_t (*) (List_1_t174 *, const MethodInfo*))List_1_get_Capacity_m8676_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9934(__this, ___value, method) (( void (*) (List_1_t174 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8678_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m9935(__this, method) (( int32_t (*) (List_1_t174 *, const MethodInfo*))List_1_get_Count_m8680_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
#define List_1_get_Item_m9936(__this, ___index, method) (( String_t* (*) (List_1_t174 *, int32_t, const MethodInfo*))List_1_get_Item_m8682_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
#define List_1_set_Item_m9937(__this, ___index, ___value, method) (( void (*) (List_1_t174 *, int32_t, String_t*, const MethodInfo*))List_1_set_Item_m8684_gshared)(__this, ___index, ___value, method)
