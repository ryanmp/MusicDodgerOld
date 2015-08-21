#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t1619;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m10149_gshared (DefaultComparer_t1619 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10149(__this, method) (( void (*) (DefaultComparer_t1619 *, const MethodInfo*))DefaultComparer__ctor_m10149_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10150_gshared (DefaultComparer_t1619 * __this, UILineInfo_t219  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10150(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1619 *, UILineInfo_t219 , const MethodInfo*))DefaultComparer_GetHashCode_m10150_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10151_gshared (DefaultComparer_t1619 * __this, UILineInfo_t219  ___x, UILineInfo_t219  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10151(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1619 *, UILineInfo_t219 , UILineInfo_t219 , const MethodInfo*))DefaultComparer_Equals_m10151_gshared)(__this, ___x, ___y, method)
