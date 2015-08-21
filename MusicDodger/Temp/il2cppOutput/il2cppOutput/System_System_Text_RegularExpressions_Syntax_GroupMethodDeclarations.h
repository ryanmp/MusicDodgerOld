#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Group
struct Group_t590;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t588;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t632;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t606;

// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
extern "C" void Group__ctor_m2333 (Group_t590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Group_AppendExpression_m2334 (Group_t590 * __this, Expression_t588 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Group_Compile_m2335 (Group_t590 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
extern "C" void Group_GetWidth_m2336 (Group_t590 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t606 * Group_GetAnchorInfo_m2337 (Group_t590 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
