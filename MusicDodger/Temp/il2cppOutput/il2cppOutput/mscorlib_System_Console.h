﻿#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t934;
// System.IO.TextReader
struct TextReader_t1196;
// System.Text.Encoding
struct Encoding_t626;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t933  : public Object_t
{
};
struct Console_t933_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t934 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t934 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1196 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t626 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t626 * ___outputEncoding_4;
};
