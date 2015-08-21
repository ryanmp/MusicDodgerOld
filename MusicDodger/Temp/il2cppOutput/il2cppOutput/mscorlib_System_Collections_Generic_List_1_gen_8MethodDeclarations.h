#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t220;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t1922;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t354;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m10004_gshared (List_1_t220 * __this, const MethodInfo* method);
#define List_1__ctor_m10004(__this, method) (( void (*) (List_1_t220 *, const MethodInfo*))List_1__ctor_m10004_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1502_gshared (List_1_t220 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1502(__this, ___capacity, method) (( void (*) (List_1_t220 *, int32_t, const MethodInfo*))List_1__ctor_m1502_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m10005_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10005(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10005_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10006_gshared (List_1_t220 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10006(__this, method) (( Object_t* (*) (List_1_t220 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10006_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10007_gshared (List_1_t220 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10007(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t220 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10007_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10008_gshared (List_1_t220 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10008(__this, method) (( Object_t * (*) (List_1_t220 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10008_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10009_gshared (List_1_t220 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10009(__this, ___item, method) (( int32_t (*) (List_1_t220 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10009_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10010_gshared (List_1_t220 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10010(__this, ___item, method) (( bool (*) (List_1_t220 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10010_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10011_gshared (List_1_t220 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10011(__this, ___item, method) (( int32_t (*) (List_1_t220 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10011_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10012_gshared (List_1_t220 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10012(__this, ___index, ___item, method) (( void (*) (List_1_t220 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10012_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10013_gshared (List_1_t220 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10013(__this, ___item, method) (( void (*) (List_1_t220 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10013_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10014_gshared (List_1_t220 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10014(__this, method) (( bool (*) (List_1_t220 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10014_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10015_gshared (List_1_t220 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10015(__this, method) (( Object_t * (*) (List_1_t220 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10015_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10016_gshared (List_1_t220 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10016(__this, ___index, method) (( Object_t * (*) (List_1_t220 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10016_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10017_gshared (List_1_t220 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10017(__this, ___index, ___value, method) (( void (*) (List_1_t220 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10017_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m10018_gshared (List_1_t220 * __this, UIVertex_t227  ___item, const MethodInfo* method);
#define List_1_Add_m10018(__this, ___item, method) (( void (*) (List_1_t220 *, UIVertex_t227 , const MethodInfo*))List_1_Add_m10018_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10019_gshared (List_1_t220 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10019(__this, ___newCount, method) (( void (*) (List_1_t220 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10019_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m10020_gshared (List_1_t220 * __this, const MethodInfo* method);
#define List_1_Clear_m10020(__this, method) (( void (*) (List_1_t220 *, const MethodInfo*))List_1_Clear_m10020_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m10021_gshared (List_1_t220 * __this, UIVertex_t227  ___item, const MethodInfo* method);
#define List_1_Contains_m10021(__this, ___item, method) (( bool (*) (List_1_t220 *, UIVertex_t227 , const MethodInfo*))List_1_Contains_m10021_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10022_gshared (List_1_t220 * __this, UIVertexU5BU5D_t354* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10022(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t220 *, UIVertexU5BU5D_t354*, int32_t, const MethodInfo*))List_1_CopyTo_m10022_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t1609  List_1_GetEnumerator_m10023_gshared (List_1_t220 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10023(__this, method) (( Enumerator_t1609  (*) (List_1_t220 *, const MethodInfo*))List_1_GetEnumerator_m10023_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10024_gshared (List_1_t220 * __this, UIVertex_t227  ___item, const MethodInfo* method);
#define List_1_IndexOf_m10024(__this, ___item, method) (( int32_t (*) (List_1_t220 *, UIVertex_t227 , const MethodInfo*))List_1_IndexOf_m10024_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10025_gshared (List_1_t220 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10025(__this, ___start, ___delta, method) (( void (*) (List_1_t220 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10025_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10026_gshared (List_1_t220 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10026(__this, ___index, method) (( void (*) (List_1_t220 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10026_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10027_gshared (List_1_t220 * __this, int32_t ___index, UIVertex_t227  ___item, const MethodInfo* method);
#define List_1_Insert_m10027(__this, ___index, ___item, method) (( void (*) (List_1_t220 *, int32_t, UIVertex_t227 , const MethodInfo*))List_1_Insert_m10027_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m10028_gshared (List_1_t220 * __this, UIVertex_t227  ___item, const MethodInfo* method);
#define List_1_Remove_m10028(__this, ___item, method) (( bool (*) (List_1_t220 *, UIVertex_t227 , const MethodInfo*))List_1_Remove_m10028_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10029_gshared (List_1_t220 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10029(__this, ___index, method) (( void (*) (List_1_t220 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10029_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t354* List_1_ToArray_m10030_gshared (List_1_t220 * __this, const MethodInfo* method);
#define List_1_ToArray_m10030(__this, method) (( UIVertexU5BU5D_t354* (*) (List_1_t220 *, const MethodInfo*))List_1_ToArray_m10030_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10031_gshared (List_1_t220 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10031(__this, method) (( int32_t (*) (List_1_t220 *, const MethodInfo*))List_1_get_Capacity_m10031_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10032_gshared (List_1_t220 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10032(__this, ___value, method) (( void (*) (List_1_t220 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10032_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m10033_gshared (List_1_t220 * __this, const MethodInfo* method);
#define List_1_get_Count_m10033(__this, method) (( int32_t (*) (List_1_t220 *, const MethodInfo*))List_1_get_Count_m10033_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t227  List_1_get_Item_m10034_gshared (List_1_t220 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10034(__this, ___index, method) (( UIVertex_t227  (*) (List_1_t220 *, int32_t, const MethodInfo*))List_1_get_Item_m10034_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10035_gshared (List_1_t220 * __this, int32_t ___index, UIVertex_t227  ___value, const MethodInfo* method);
#define List_1_set_Item_m10035(__this, ___index, ___value, method) (( void (*) (List_1_t220 *, int32_t, UIVertex_t227 , const MethodInfo*))List_1_set_Item_m10035_gshared)(__this, ___index, ___value, method)
