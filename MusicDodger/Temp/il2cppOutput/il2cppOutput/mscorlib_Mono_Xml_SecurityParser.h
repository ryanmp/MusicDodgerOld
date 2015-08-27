#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t1191;
// System.Collections.Stack
struct Stack_t617;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t1192  : public SmallXmlParser_t1193
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1191 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1191 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t617 * ___stack_15;
};
