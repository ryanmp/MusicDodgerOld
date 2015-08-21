#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t1611;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m10047_gshared (DefaultComparer_t1611 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10047(__this, method) (( void (*) (DefaultComparer_t1611 *, const MethodInfo*))DefaultComparer__ctor_m10047_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10048_gshared (DefaultComparer_t1611 * __this, UIVertex_t227  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10048(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1611 *, UIVertex_t227 , const MethodInfo*))DefaultComparer_GetHashCode_m10048_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10049_gshared (DefaultComparer_t1611 * __this, UIVertex_t227  ___x, UIVertex_t227  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10049(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1611 *, UIVertex_t227 , UIVertex_t227 , const MethodInfo*))DefaultComparer_Equals_m10049_gshared)(__this, ___x, ___y, method)
