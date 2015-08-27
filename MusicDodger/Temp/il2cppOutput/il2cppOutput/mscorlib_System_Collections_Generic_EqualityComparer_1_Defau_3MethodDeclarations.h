#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t1972;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m13116_gshared (DefaultComparer_t1972 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m13116(__this, method) (( void (*) (DefaultComparer_t1972 *, const MethodInfo*))DefaultComparer__ctor_m13116_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13117_gshared (DefaultComparer_t1972 * __this, UIVertex_t206  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m13117(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1972 *, UIVertex_t206 , const MethodInfo*))DefaultComparer_GetHashCode_m13117_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13118_gshared (DefaultComparer_t1972 * __this, UIVertex_t206  ___x, UIVertex_t206  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m13118(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1972 *, UIVertex_t206 , UIVertex_t206 , const MethodInfo*))DefaultComparer_Equals_m13118_gshared)(__this, ___x, ___y, method)
