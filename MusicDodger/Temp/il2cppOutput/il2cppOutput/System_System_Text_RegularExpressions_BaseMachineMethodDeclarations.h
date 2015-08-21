#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.BaseMachine
struct BaseMachine_t543;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t442;
// System.Text.RegularExpressions.Match
struct Match_t541;
// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t542;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t617;

// System.Void System.Text.RegularExpressions.BaseMachine::.ctor()
extern "C" void BaseMachine__ctor_m2051 (BaseMachine_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::Replace(System.Text.RegularExpressions.Regex,System.String,System.String,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_Replace_m2052 (BaseMachine_t543 * __this, Regex_t442 * ___regex, String_t* ___input, String_t* ___replacement, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.BaseMachine::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" Match_t541 * BaseMachine_Scan_m2053 (BaseMachine_t543 * __this, Regex_t442 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::LTRReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator,System.Int32,System.Int32,System.Boolean)
extern "C" String_t* BaseMachine_LTRReplace_m2054 (BaseMachine_t543 * __this, Regex_t442 * ___regex, String_t* ___input, MatchAppendEvaluator_t542 * ___evaluator, int32_t ___count, int32_t ___startat, bool ___needs_groups_or_captures, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::RTLReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.MatchEvaluator,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_RTLReplace_m2055 (BaseMachine_t543 * __this, Regex_t442 * ___regex, String_t* ___input, MatchEvaluator_t617 * ___evaluator, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
