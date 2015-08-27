#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1783;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object[]
struct ObjectU5BU5D_t321;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2037;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1781;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m10583_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1__ctor_m10583(__this, method) (( void (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1__ctor_m10583_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10584_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10584(__this, method) (( bool (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10584_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m10585_gshared (Collection_1_t1783 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m10585(__this, ___array, ___index, method) (( void (*) (Collection_1_t1783 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m10585_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m10586_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m10586(__this, method) (( Object_t * (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m10586_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m10587_gshared (Collection_1_t1783 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m10587(__this, ___value, method) (( int32_t (*) (Collection_1_t1783 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m10587_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m10588_gshared (Collection_1_t1783 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m10588(__this, ___value, method) (( bool (*) (Collection_1_t1783 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m10588_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m10589_gshared (Collection_1_t1783 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m10589(__this, ___value, method) (( int32_t (*) (Collection_1_t1783 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m10589_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m10590_gshared (Collection_1_t1783 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m10590(__this, ___index, ___value, method) (( void (*) (Collection_1_t1783 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m10590_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m10591_gshared (Collection_1_t1783 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m10591(__this, ___value, method) (( void (*) (Collection_1_t1783 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m10591_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m10592_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m10592(__this, method) (( bool (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m10592_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m10593_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m10593(__this, method) (( Object_t * (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m10593_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m10594_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m10594(__this, method) (( bool (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m10594_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m10595_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m10595(__this, method) (( bool (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m10595_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m10596_gshared (Collection_1_t1783 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m10596(__this, ___index, method) (( Object_t * (*) (Collection_1_t1783 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m10596_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m10597_gshared (Collection_1_t1783 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m10597(__this, ___index, ___value, method) (( void (*) (Collection_1_t1783 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m10597_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m10598_gshared (Collection_1_t1783 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m10598(__this, ___item, method) (( void (*) (Collection_1_t1783 *, Object_t *, const MethodInfo*))Collection_1_Add_m10598_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m10599_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_Clear_m10599(__this, method) (( void (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_Clear_m10599_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m10600_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m10600(__this, method) (( void (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_ClearItems_m10600_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m10601_gshared (Collection_1_t1783 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m10601(__this, ___item, method) (( bool (*) (Collection_1_t1783 *, Object_t *, const MethodInfo*))Collection_1_Contains_m10601_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m10602_gshared (Collection_1_t1783 * __this, ObjectU5BU5D_t321* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m10602(__this, ___array, ___index, method) (( void (*) (Collection_1_t1783 *, ObjectU5BU5D_t321*, int32_t, const MethodInfo*))Collection_1_CopyTo_m10602_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m10603_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m10603(__this, method) (( Object_t* (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_GetEnumerator_m10603_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m10604_gshared (Collection_1_t1783 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m10604(__this, ___item, method) (( int32_t (*) (Collection_1_t1783 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m10604_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m10605_gshared (Collection_1_t1783 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m10605(__this, ___index, ___item, method) (( void (*) (Collection_1_t1783 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m10605_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m10606_gshared (Collection_1_t1783 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m10606(__this, ___index, ___item, method) (( void (*) (Collection_1_t1783 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m10606_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m10607_gshared (Collection_1_t1783 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m10607(__this, ___item, method) (( bool (*) (Collection_1_t1783 *, Object_t *, const MethodInfo*))Collection_1_Remove_m10607_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m10608_gshared (Collection_1_t1783 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m10608(__this, ___index, method) (( void (*) (Collection_1_t1783 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m10608_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m10609_gshared (Collection_1_t1783 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m10609(__this, ___index, method) (( void (*) (Collection_1_t1783 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m10609_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m10610_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m10610(__this, method) (( int32_t (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_get_Count_m10610_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m10611_gshared (Collection_1_t1783 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m10611(__this, ___index, method) (( Object_t * (*) (Collection_1_t1783 *, int32_t, const MethodInfo*))Collection_1_get_Item_m10611_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m10612_gshared (Collection_1_t1783 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m10612(__this, ___index, ___value, method) (( void (*) (Collection_1_t1783 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m10612_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m10613_gshared (Collection_1_t1783 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m10613(__this, ___index, ___item, method) (( void (*) (Collection_1_t1783 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m10613_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m10614_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m10614(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m10614_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m10615_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m10615(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m10615_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m10616_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m10616(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m10616_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m10617_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m10617(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m10617_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m10618_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m10618(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m10618_gshared)(__this /* static, unused */, ___list, method)
