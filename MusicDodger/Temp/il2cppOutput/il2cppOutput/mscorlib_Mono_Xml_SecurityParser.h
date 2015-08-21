#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t916;
// System.Collections.Stack
struct Stack_t341;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t917  : public SmallXmlParser_t918
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t916 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t916 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t341 * ___stack_15;
};
