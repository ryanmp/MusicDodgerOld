#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t586;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t630;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t604;

// System.Void System.Text.RegularExpressions.Syntax.Expression::.ctor()
extern "C" void Expression__ctor_m2315 (Expression_t586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Expression::GetFixedWidth()
extern "C" int32_t Expression_GetFixedWidth_m2316 (Expression_t586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t604 * Expression_GetAnchorInfo_m2317 (Expression_t586 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
