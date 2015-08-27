﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Single>
struct Collection_1_t1842;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Single[]
struct SingleU5BU5D_t54;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t2415;
// System.Collections.Generic.IList`1<System.Single>
struct IList_1_t1840;

// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::.ctor()
extern "C" void Collection_1__ctor_m11294_gshared (Collection_1_t1842 * __this, const MethodInfo* method);
#define Collection_1__ctor_m11294(__this, method) (( void (*) (Collection_1_t1842 *, const MethodInfo*))Collection_1__ctor_m11294_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11295_gshared (Collection_1_t1842 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11295(__this, method) (( bool (*) (Collection_1_t1842 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11295_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m11296_gshared (Collection_1_t1842 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m11296(__this, ___array, ___index, method) (( void (*) (Collection_1_t1842 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m11296_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m11297_gshared (Collection_1_t1842 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m11297(__this, method) (( Object_t * (*) (Collection_1_t1842 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m11297_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m11298_gshared (Collection_1_t1842 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m11298(__this, ___value, method) (( int32_t (*) (Collection_1_t1842 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m11298_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m11299_gshared (Collection_1_t1842 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m11299(__this, ___value, method) (( bool (*) (Collection_1_t1842 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m11299_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m11300_gshared (Collection_1_t1842 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m11300(__this, ___value, method) (( int32_t (*) (Collection_1_t1842 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m11300_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m11301_gshared (Collection_1_t1842 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m11301(__this, ___index, ___value, method) (( void (*) (Collection_1_t1842 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m11301_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m11302_gshared (Collection_1_t1842 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m11302(__this, ___value, method) (( void (*) (Collection_1_t1842 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m11302_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m11303_gshared (Collection_1_t1842 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m11303(__this, method) (( bool (*) (Collection_1_t1842 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m11303_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m11304_gshared (Collection_1_t1842 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m11304(__this, method) (( Object_t * (*) (Collection_1_t1842 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m11304_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m11305_gshared (Collection_1_t1842 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m11305(__this, method) (( bool (*) (Collection_1_t1842 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m11305_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m11306_gshared (Collection_1_t1842 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m11306(__this, method) (( bool (*) (Collection_1_t1842 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m11306_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m11307_gshared (Collection_1_t1842 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m11307(__this, ___index, method) (( Object_t * (*) (Collection_1_t1842 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m11307_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m11308_gshared (Collection_1_t1842 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m11308(__this, ___index, ___value, method) (( void (*) (Collection_1_t1842 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m11308_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Add(T)
extern "C" void Collection_1_Add_m11309_gshared (Collection_1_t1842 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Add_m11309(__this, ___item, method) (( void (*) (Collection_1_t1842 *, float, const MethodInfo*))Collection_1_Add_m11309_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Clear()
extern "C" void Collection_1_Clear_m11310_gshared (Collection_1_t1842 * __this, const MethodInfo* method);
#define Collection_1_Clear_m11310(__this, method) (( void (*) (Collection_1_t1842 *, const MethodInfo*))Collection_1_Clear_m11310_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::ClearItems()
extern "C" void Collection_1_ClearItems_m11311_gshared (Collection_1_t1842 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m11311(__this, method) (( void (*) (Collection_1_t1842 *, const MethodInfo*))Collection_1_ClearItems_m11311_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::Contains(T)
extern "C" bool Collection_1_Contains_m11312_gshared (Collection_1_t1842 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Contains_m11312(__this, ___item, method) (( bool (*) (Collection_1_t1842 *, float, const MethodInfo*))Collection_1_Contains_m11312_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m11313_gshared (Collection_1_t1842 * __this, SingleU5BU5D_t54* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m11313(__this, ___array, ___index, method) (( void (*) (Collection_1_t1842 *, SingleU5BU5D_t54*, int32_t, const MethodInfo*))Collection_1_CopyTo_m11313_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Single>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m11314_gshared (Collection_1_t1842 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m11314(__this, method) (( Object_t* (*) (Collection_1_t1842 *, const MethodInfo*))Collection_1_GetEnumerator_m11314_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m11315_gshared (Collection_1_t1842 * __this, float ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m11315(__this, ___item, method) (( int32_t (*) (Collection_1_t1842 *, float, const MethodInfo*))Collection_1_IndexOf_m11315_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m11316_gshared (Collection_1_t1842 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_Insert_m11316(__this, ___index, ___item, method) (( void (*) (Collection_1_t1842 *, int32_t, float, const MethodInfo*))Collection_1_Insert_m11316_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m11317_gshared (Collection_1_t1842 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m11317(__this, ___index, ___item, method) (( void (*) (Collection_1_t1842 *, int32_t, float, const MethodInfo*))Collection_1_InsertItem_m11317_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::Remove(T)
extern "C" bool Collection_1_Remove_m11318_gshared (Collection_1_t1842 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Remove_m11318(__this, ___item, method) (( bool (*) (Collection_1_t1842 *, float, const MethodInfo*))Collection_1_Remove_m11318_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m11319_gshared (Collection_1_t1842 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m11319(__this, ___index, method) (( void (*) (Collection_1_t1842 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m11319_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m11320_gshared (Collection_1_t1842 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m11320(__this, ___index, method) (( void (*) (Collection_1_t1842 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m11320_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::get_Count()
extern "C" int32_t Collection_1_get_Count_m11321_gshared (Collection_1_t1842 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m11321(__this, method) (( int32_t (*) (Collection_1_t1842 *, const MethodInfo*))Collection_1_get_Count_m11321_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Single>::get_Item(System.Int32)
extern "C" float Collection_1_get_Item_m11322_gshared (Collection_1_t1842 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m11322(__this, ___index, method) (( float (*) (Collection_1_t1842 *, int32_t, const MethodInfo*))Collection_1_get_Item_m11322_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m11323_gshared (Collection_1_t1842 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define Collection_1_set_Item_m11323(__this, ___index, ___value, method) (( void (*) (Collection_1_t1842 *, int32_t, float, const MethodInfo*))Collection_1_set_Item_m11323_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m11324_gshared (Collection_1_t1842 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_SetItem_m11324(__this, ___index, ___item, method) (( void (*) (Collection_1_t1842 *, int32_t, float, const MethodInfo*))Collection_1_SetItem_m11324_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m11325_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m11325(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m11325_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Single>::ConvertItem(System.Object)
extern "C" float Collection_1_ConvertItem_m11326_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m11326(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m11326_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m11327_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m11327(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m11327_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m11328_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m11328(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m11328_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m11329_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m11329(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m11329_gshared)(__this /* static, unused */, ___list, method)
