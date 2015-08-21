#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t657;
// System.IO.TextReader
struct TextReader_t919;
// System.Text.Encoding
struct Encoding_t348;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t656  : public Object_t
{
};
struct Console_t656_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t657 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t657 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t919 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t348 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t348 * ___outputEncoding_4;
};
