#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t1632;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t1624;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t1934;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Int64[]
struct Int64U5BU5D_t1449;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_13.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m10311_gshared (ValueCollection_t1632 * __this, Dictionary_2_t1624 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m10311(__this, ___dictionary, method) (( void (*) (ValueCollection_t1632 *, Dictionary_2_t1624 *, const MethodInfo*))ValueCollection__ctor_m10311_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m10312_gshared (ValueCollection_t1632 * __this, int64_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m10312(__this, ___item, method) (( void (*) (ValueCollection_t1632 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m10312_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m10313_gshared (ValueCollection_t1632 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m10313(__this, method) (( void (*) (ValueCollection_t1632 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m10313_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m10314_gshared (ValueCollection_t1632 * __this, int64_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m10314(__this, ___item, method) (( bool (*) (ValueCollection_t1632 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m10314_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m10315_gshared (ValueCollection_t1632 * __this, int64_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m10315(__this, ___item, method) (( bool (*) (ValueCollection_t1632 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m10315_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m10316_gshared (ValueCollection_t1632 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m10316(__this, method) (( Object_t* (*) (ValueCollection_t1632 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m10316_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m10317_gshared (ValueCollection_t1632 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m10317(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1632 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m10317_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m10318_gshared (ValueCollection_t1632 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m10318(__this, method) (( Object_t * (*) (ValueCollection_t1632 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m10318_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m10319_gshared (ValueCollection_t1632 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m10319(__this, method) (( bool (*) (ValueCollection_t1632 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m10319_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m10320_gshared (ValueCollection_t1632 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m10320(__this, method) (( Object_t * (*) (ValueCollection_t1632 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m10320_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m10321_gshared (ValueCollection_t1632 * __this, Int64U5BU5D_t1449* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m10321(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1632 *, Int64U5BU5D_t1449*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m10321_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t1633  ValueCollection_GetEnumerator_m10322_gshared (ValueCollection_t1632 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m10322(__this, method) (( Enumerator_t1633  (*) (ValueCollection_t1632 *, const MethodInfo*))ValueCollection_GetEnumerator_m10322_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m10323_gshared (ValueCollection_t1632 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m10323(__this, method) (( int32_t (*) (ValueCollection_t1632 *, const MethodInfo*))ValueCollection_get_Count_m10323_gshared)(__this, method)
