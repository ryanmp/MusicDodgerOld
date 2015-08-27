#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t1775;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2037;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m10414_gshared (Stack_1_t1775 * __this, const MethodInfo* method);
#define Stack_1__ctor_m10414(__this, method) (( void (*) (Stack_1_t1775 *, const MethodInfo*))Stack_1__ctor_m10414_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m10416_gshared (Stack_1_t1775 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m10416(__this, method) (( bool (*) (Stack_1_t1775 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m10416_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m10418_gshared (Stack_1_t1775 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m10418(__this, method) (( Object_t * (*) (Stack_1_t1775 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m10418_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m10420_gshared (Stack_1_t1775 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m10420(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t1775 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m10420_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10422_gshared (Stack_1_t1775 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10422(__this, method) (( Object_t* (*) (Stack_1_t1775 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10422_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m10424_gshared (Stack_1_t1775 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m10424(__this, method) (( Object_t * (*) (Stack_1_t1775 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m10424_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m10425_gshared (Stack_1_t1775 * __this, const MethodInfo* method);
#define Stack_1_Peek_m10425(__this, method) (( Object_t * (*) (Stack_1_t1775 *, const MethodInfo*))Stack_1_Peek_m10425_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m10426_gshared (Stack_1_t1775 * __this, const MethodInfo* method);
#define Stack_1_Pop_m10426(__this, method) (( Object_t * (*) (Stack_1_t1775 *, const MethodInfo*))Stack_1_Pop_m10426_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m10427_gshared (Stack_1_t1775 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m10427(__this, ___t, method) (( void (*) (Stack_1_t1775 *, Object_t *, const MethodInfo*))Stack_1_Push_m10427_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m10429_gshared (Stack_1_t1775 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m10429(__this, method) (( int32_t (*) (Stack_1_t1775 *, const MethodInfo*))Stack_1_get_Count_m10429_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1777  Stack_1_GetEnumerator_m10431_gshared (Stack_1_t1775 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m10431(__this, method) (( Enumerator_t1777  (*) (Stack_1_t1775 *, const MethodInfo*))Stack_1_GetEnumerator_m10431_gshared)(__this, method)
