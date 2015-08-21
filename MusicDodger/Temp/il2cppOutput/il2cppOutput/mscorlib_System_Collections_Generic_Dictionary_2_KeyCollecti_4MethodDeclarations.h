#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1561;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1558;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t1887;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Int32[]
struct Int32U5BU5D_t556;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_5.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m9328_gshared (KeyCollection_t1561 * __this, Dictionary_2_t1558 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m9328(__this, ___dictionary, method) (( void (*) (KeyCollection_t1561 *, Dictionary_2_t1558 *, const MethodInfo*))KeyCollection__ctor_m9328_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m9329_gshared (KeyCollection_t1561 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m9329(__this, ___item, method) (( void (*) (KeyCollection_t1561 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m9329_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m9330_gshared (KeyCollection_t1561 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m9330(__this, method) (( void (*) (KeyCollection_t1561 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m9330_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m9331_gshared (KeyCollection_t1561 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m9331(__this, ___item, method) (( bool (*) (KeyCollection_t1561 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m9331_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m9332_gshared (KeyCollection_t1561 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m9332(__this, ___item, method) (( bool (*) (KeyCollection_t1561 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m9332_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m9333_gshared (KeyCollection_t1561 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m9333(__this, method) (( Object_t* (*) (KeyCollection_t1561 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m9333_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m9334_gshared (KeyCollection_t1561 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m9334(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1561 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m9334_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m9335_gshared (KeyCollection_t1561 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m9335(__this, method) (( Object_t * (*) (KeyCollection_t1561 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m9335_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m9336_gshared (KeyCollection_t1561 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m9336(__this, method) (( bool (*) (KeyCollection_t1561 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m9336_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m9337_gshared (KeyCollection_t1561 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m9337(__this, method) (( Object_t * (*) (KeyCollection_t1561 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m9337_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m9338_gshared (KeyCollection_t1561 * __this, Int32U5BU5D_t556* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m9338(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1561 *, Int32U5BU5D_t556*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m9338_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1562  KeyCollection_GetEnumerator_m9339_gshared (KeyCollection_t1561 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m9339(__this, method) (( Enumerator_t1562  (*) (KeyCollection_t1561 *, const MethodInfo*))KeyCollection_GetEnumerator_m9339_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m9340_gshared (KeyCollection_t1561 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m9340(__this, method) (( int32_t (*) (KeyCollection_t1561 *, const MethodInfo*))KeyCollection_get_Count_m9340_gshared)(__this, method)
