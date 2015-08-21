#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t914;
// System.Collections.Stack
struct Stack_t339;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t915  : public SmallXmlParser_t916
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t914 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t914 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t339 * ___stack_15;
};
