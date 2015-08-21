#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t1770;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1762;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t2009;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Boolean[]
struct BooleanU5BU5D_t493;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_26.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m11985_gshared (ValueCollection_t1770 * __this, Dictionary_2_t1762 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m11985(__this, ___dictionary, method) (( void (*) (ValueCollection_t1770 *, Dictionary_2_t1762 *, const MethodInfo*))ValueCollection__ctor_m11985_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11986_gshared (ValueCollection_t1770 * __this, bool ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11986(__this, ___item, method) (( void (*) (ValueCollection_t1770 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11986_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11987_gshared (ValueCollection_t1770 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11987(__this, method) (( void (*) (ValueCollection_t1770 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11987_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11988_gshared (ValueCollection_t1770 * __this, bool ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11988(__this, ___item, method) (( bool (*) (ValueCollection_t1770 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11988_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11989_gshared (ValueCollection_t1770 * __this, bool ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11989(__this, ___item, method) (( bool (*) (ValueCollection_t1770 *, bool, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11989_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11990_gshared (ValueCollection_t1770 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11990(__this, method) (( Object_t* (*) (ValueCollection_t1770 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11990_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m11991_gshared (ValueCollection_t1770 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m11991(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1770 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m11991_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11992_gshared (ValueCollection_t1770 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11992(__this, method) (( Object_t * (*) (ValueCollection_t1770 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11992_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11993_gshared (ValueCollection_t1770 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11993(__this, method) (( bool (*) (ValueCollection_t1770 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11993_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m11994_gshared (ValueCollection_t1770 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m11994(__this, method) (( Object_t * (*) (ValueCollection_t1770 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m11994_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m11995_gshared (ValueCollection_t1770 * __this, BooleanU5BU5D_t493* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m11995(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1770 *, BooleanU5BU5D_t493*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m11995_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t1771  ValueCollection_GetEnumerator_m11996_gshared (ValueCollection_t1770 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m11996(__this, method) (( Enumerator_t1771  (*) (ValueCollection_t1770 *, const MethodInfo*))ValueCollection_GetEnumerator_m11996_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m11997_gshared (ValueCollection_t1770 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m11997(__this, method) (( int32_t (*) (ValueCollection_t1770 *, const MethodInfo*))ValueCollection_get_Count_m11997_gshared)(__this, method)
