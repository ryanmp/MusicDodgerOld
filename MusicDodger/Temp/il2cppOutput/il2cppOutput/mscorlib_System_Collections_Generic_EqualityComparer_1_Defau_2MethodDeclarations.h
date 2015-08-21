#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t1613;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m10058_gshared (DefaultComparer_t1613 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10058(__this, method) (( void (*) (DefaultComparer_t1613 *, const MethodInfo*))DefaultComparer__ctor_m10058_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10059_gshared (DefaultComparer_t1613 * __this, UIVertex_t229  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10059(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1613 *, UIVertex_t229 , const MethodInfo*))DefaultComparer_GetHashCode_m10059_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10060_gshared (DefaultComparer_t1613 * __this, UIVertex_t229  ___x, UIVertex_t229  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10060(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1613 *, UIVertex_t229 , UIVertex_t229 , const MethodInfo*))DefaultComparer_Equals_m10060_gshared)(__this, ___x, ___y, method)
