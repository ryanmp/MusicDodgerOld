#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t597;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t592;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t598;
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"
// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct  CaptureAssertion_t599  : public Assertion_t596
{
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t597 * ___alternate_1;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t592 * ___group_2;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t598 * ___literal_3;
};
