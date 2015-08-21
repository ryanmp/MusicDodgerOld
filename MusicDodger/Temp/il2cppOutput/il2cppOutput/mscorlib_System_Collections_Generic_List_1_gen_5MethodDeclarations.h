#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t133;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t132;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t1902;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t1572;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
#define List_1__ctor_m1464(__this, method) (( void (*) (List_1_t133 *, const MethodInfo*))List_1__ctor_m1528_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m9439(__this, ___capacity, method) (( void (*) (List_1_t133 *, int32_t, const MethodInfo*))List_1__ctor_m8612_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m9440(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8614_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9441(__this, method) (( Object_t* (*) (List_1_t133 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8616_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9442(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t133 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8618_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9443(__this, method) (( Object_t * (*) (List_1_t133 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9444(__this, ___item, method) (( int32_t (*) (List_1_t133 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8622_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9445(__this, ___item, method) (( bool (*) (List_1_t133 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8624_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9446(__this, ___item, method) (( int32_t (*) (List_1_t133 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8626_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9447(__this, ___index, ___item, method) (( void (*) (List_1_t133 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8628_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9448(__this, ___item, method) (( void (*) (List_1_t133 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8630_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9449(__this, method) (( bool (*) (List_1_t133 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8632_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9450(__this, method) (( Object_t * (*) (List_1_t133 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8634_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9451(__this, ___index, method) (( Object_t * (*) (List_1_t133 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8636_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9452(__this, ___index, ___value, method) (( void (*) (List_1_t133 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8638_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m9453(__this, ___item, method) (( void (*) (List_1_t133 *, GUILayoutEntry_t132 *, const MethodInfo*))List_1_Add_m8640_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9454(__this, ___newCount, method) (( void (*) (List_1_t133 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8642_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m9455(__this, method) (( void (*) (List_1_t133 *, const MethodInfo*))List_1_Clear_m8644_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m9456(__this, ___item, method) (( bool (*) (List_1_t133 *, GUILayoutEntry_t132 *, const MethodInfo*))List_1_Contains_m8646_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9457(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t133 *, GUILayoutEntryU5BU5D_t1572*, int32_t, const MethodInfo*))List_1_CopyTo_m8648_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m1459(__this, method) (( Enumerator_t386  (*) (List_1_t133 *, const MethodInfo*))List_1_GetEnumerator_m8649_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m9458(__this, ___item, method) (( int32_t (*) (List_1_t133 *, GUILayoutEntry_t132 *, const MethodInfo*))List_1_IndexOf_m8651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9459(__this, ___start, ___delta, method) (( void (*) (List_1_t133 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8653_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9460(__this, ___index, method) (( void (*) (List_1_t133 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8655_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m9461(__this, ___index, ___item, method) (( void (*) (List_1_t133 *, int32_t, GUILayoutEntry_t132 *, const MethodInfo*))List_1_Insert_m8657_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m9462(__this, ___item, method) (( bool (*) (List_1_t133 *, GUILayoutEntry_t132 *, const MethodInfo*))List_1_Remove_m8659_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9463(__this, ___index, method) (( void (*) (List_1_t133 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8661_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m9464(__this, method) (( GUILayoutEntryU5BU5D_t1572* (*) (List_1_t133 *, const MethodInfo*))List_1_ToArray_m8663_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m9465(__this, method) (( int32_t (*) (List_1_t133 *, const MethodInfo*))List_1_get_Capacity_m8665_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9466(__this, ___value, method) (( void (*) (List_1_t133 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8667_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m9467(__this, method) (( int32_t (*) (List_1_t133 *, const MethodInfo*))List_1_get_Count_m8669_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m9468(__this, ___index, method) (( GUILayoutEntry_t132 * (*) (List_1_t133 *, int32_t, const MethodInfo*))List_1_get_Item_m8671_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m9469(__this, ___index, ___value, method) (( void (*) (List_1_t133 *, int32_t, GUILayoutEntry_t132 *, const MethodInfo*))List_1_set_Item_m8673_gshared)(__this, ___index, ___value, method)
