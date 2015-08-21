#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CompositeExpression
struct CompositeExpression_t587;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t585;

// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::.ctor()
extern "C" void CompositeExpression__ctor_m2318 (CompositeExpression_t587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::get_Expressions()
extern "C" ExpressionCollection_t585 * CompositeExpression_get_Expressions_m2319 (CompositeExpression_t587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::GetWidth(System.Int32&,System.Int32&,System.Int32)
extern "C" void CompositeExpression_GetWidth_m2320 (CompositeExpression_t587 * __this, int32_t* ___min, int32_t* ___max, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CompositeExpression::IsComplex()
extern "C" bool CompositeExpression_IsComplex_m2321 (CompositeExpression_t587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
