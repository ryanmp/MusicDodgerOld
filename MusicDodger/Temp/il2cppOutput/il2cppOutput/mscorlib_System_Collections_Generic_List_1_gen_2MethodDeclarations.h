#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t53;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t1885;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Int32[]
struct Int32U5BU5D_t554;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m240_gshared (List_1_t53 * __this, const MethodInfo* method);
#define List_1__ctor_m240(__this, method) (( void (*) (List_1_t53 *, const MethodInfo*))List_1__ctor_m240_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m8954_gshared (List_1_t53 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m8954(__this, ___capacity, method) (( void (*) (List_1_t53 *, int32_t, const MethodInfo*))List_1__ctor_m8954_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m8955_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m8955(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8955_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8956_gshared (List_1_t53 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8956(__this, method) (( Object_t* (*) (List_1_t53 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8956_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m8957_gshared (List_1_t53 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m8957(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t53 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8957_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m8958_gshared (List_1_t53 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m8958(__this, method) (( Object_t * (*) (List_1_t53 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8958_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m8959_gshared (List_1_t53 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m8959(__this, ___item, method) (( int32_t (*) (List_1_t53 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8959_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m8960_gshared (List_1_t53 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m8960(__this, ___item, method) (( bool (*) (List_1_t53 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8960_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m8961_gshared (List_1_t53 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m8961(__this, ___item, method) (( int32_t (*) (List_1_t53 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8961_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m8962_gshared (List_1_t53 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m8962(__this, ___index, ___item, method) (( void (*) (List_1_t53 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8962_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m8963_gshared (List_1_t53 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m8963(__this, ___item, method) (( void (*) (List_1_t53 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8963_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8964_gshared (List_1_t53 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8964(__this, method) (( bool (*) (List_1_t53 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8964_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m8965_gshared (List_1_t53 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m8965(__this, method) (( Object_t * (*) (List_1_t53 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8965_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m8966_gshared (List_1_t53 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m8966(__this, ___index, method) (( Object_t * (*) (List_1_t53 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8966_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m8967_gshared (List_1_t53 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m8967(__this, ___index, ___value, method) (( void (*) (List_1_t53 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8967_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m8968_gshared (List_1_t53 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m8968(__this, ___item, method) (( void (*) (List_1_t53 *, int32_t, const MethodInfo*))List_1_Add_m8968_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m8969_gshared (List_1_t53 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m8969(__this, ___newCount, method) (( void (*) (List_1_t53 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8969_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m8970_gshared (List_1_t53 * __this, const MethodInfo* method);
#define List_1_Clear_m8970(__this, method) (( void (*) (List_1_t53 *, const MethodInfo*))List_1_Clear_m8970_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m8971_gshared (List_1_t53 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m8971(__this, ___item, method) (( bool (*) (List_1_t53 *, int32_t, const MethodInfo*))List_1_Contains_m8971_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m8972_gshared (List_1_t53 * __this, Int32U5BU5D_t554* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m8972(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t53 *, Int32U5BU5D_t554*, int32_t, const MethodInfo*))List_1_CopyTo_m8972_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t1528  List_1_GetEnumerator_m8973_gshared (List_1_t53 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m8973(__this, method) (( Enumerator_t1528  (*) (List_1_t53 *, const MethodInfo*))List_1_GetEnumerator_m8973_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m8974_gshared (List_1_t53 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m8974(__this, ___item, method) (( int32_t (*) (List_1_t53 *, int32_t, const MethodInfo*))List_1_IndexOf_m8974_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m8975_gshared (List_1_t53 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m8975(__this, ___start, ___delta, method) (( void (*) (List_1_t53 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8975_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m8976_gshared (List_1_t53 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m8976(__this, ___index, method) (( void (*) (List_1_t53 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8976_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m8977_gshared (List_1_t53 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m8977(__this, ___index, ___item, method) (( void (*) (List_1_t53 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m8977_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m8978_gshared (List_1_t53 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m8978(__this, ___item, method) (( bool (*) (List_1_t53 *, int32_t, const MethodInfo*))List_1_Remove_m8978_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m8979_gshared (List_1_t53 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m8979(__this, ___index, method) (( void (*) (List_1_t53 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8979_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t554* List_1_ToArray_m8980_gshared (List_1_t53 * __this, const MethodInfo* method);
#define List_1_ToArray_m8980(__this, method) (( Int32U5BU5D_t554* (*) (List_1_t53 *, const MethodInfo*))List_1_ToArray_m8980_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m8981_gshared (List_1_t53 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m8981(__this, method) (( int32_t (*) (List_1_t53 *, const MethodInfo*))List_1_get_Capacity_m8981_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m8982_gshared (List_1_t53 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m8982(__this, ___value, method) (( void (*) (List_1_t53 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8982_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m8983_gshared (List_1_t53 * __this, const MethodInfo* method);
#define List_1_get_Count_m8983(__this, method) (( int32_t (*) (List_1_t53 *, const MethodInfo*))List_1_get_Count_m8983_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m8984_gshared (List_1_t53 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m8984(__this, ___index, method) (( int32_t (*) (List_1_t53 *, int32_t, const MethodInfo*))List_1_get_Item_m8984_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m8985_gshared (List_1_t53 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m8985(__this, ___index, ___value, method) (( void (*) (List_1_t53 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m8985_gshared)(__this, ___index, ___value, method)
