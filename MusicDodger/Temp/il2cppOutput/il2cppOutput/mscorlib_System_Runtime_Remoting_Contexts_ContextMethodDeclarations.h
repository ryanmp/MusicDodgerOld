#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Contexts.Context
struct Context_t1130;
// System.Runtime.Remoting.Contexts.IContextProperty
struct IContextProperty_t1457;
// System.String
struct String_t;

// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
extern "C" void Context__cctor_m6448 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
extern "C" void Context_Finalize_m6449 (Context_t1130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::get_DefaultContext()
extern "C" Context_t1130 * Context_get_DefaultContext_m6450 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
extern "C" bool Context_get_IsDefaultContext_m6451 (Context_t1130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
extern "C" Object_t * Context_GetProperty_m6452 (Context_t1130 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Contexts.Context::ToString()
extern "C" String_t* Context_ToString_m6453 (Context_t1130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
