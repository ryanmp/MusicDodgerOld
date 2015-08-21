#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Assertion
struct Assertion_t596;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t588;

// System.Void System.Text.RegularExpressions.Syntax.Assertion::.ctor()
extern "C" void Assertion__ctor_m2363 (Assertion_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_TrueExpression()
extern "C" Expression_t588 * Assertion_get_TrueExpression_m2364 (Assertion_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_TrueExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Assertion_set_TrueExpression_m2365 (Assertion_t596 * __this, Expression_t588 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_FalseExpression()
extern "C" Expression_t588 * Assertion_get_FalseExpression_m2366 (Assertion_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_FalseExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Assertion_set_FalseExpression_m2367 (Assertion_t596 * __this, Expression_t588 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::GetWidth(System.Int32&,System.Int32&)
extern "C" void Assertion_GetWidth_m2368 (Assertion_t596 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
