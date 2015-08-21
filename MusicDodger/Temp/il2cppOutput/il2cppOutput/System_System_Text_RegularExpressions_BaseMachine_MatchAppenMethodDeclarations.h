#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t540;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.Match
struct Match_t539;
// System.Text.StringBuilder
struct StringBuilder_t368;
// System.IAsyncResult
struct IAsyncResult_t118;
// System.AsyncCallback
struct AsyncCallback_t119;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::.ctor(System.Object,System.IntPtr)
extern "C" void MatchAppendEvaluator__ctor_m2036 (MatchAppendEvaluator_t540 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::Invoke(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C" void MatchAppendEvaluator_Invoke_m2037 (MatchAppendEvaluator_t540 * __this, Match_t539 * ___match, StringBuilder_t368 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
extern "C" void pinvoke_delegate_wrapper_MatchAppendEvaluator_t540(Il2CppObject* delegate, Match_t539 * ___match, StringBuilder_t368 * ___sb);
// System.IAsyncResult System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.Text.StringBuilder,System.AsyncCallback,System.Object)
extern "C" Object_t * MatchAppendEvaluator_BeginInvoke_m2038 (MatchAppendEvaluator_t540 * __this, Match_t539 * ___match, StringBuilder_t368 * ___sb, AsyncCallback_t119 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::EndInvoke(System.IAsyncResult)
extern "C" void MatchAppendEvaluator_EndInvoke_m2039 (MatchAppendEvaluator_t540 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
