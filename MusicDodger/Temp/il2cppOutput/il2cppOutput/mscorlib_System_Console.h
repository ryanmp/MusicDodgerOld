#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t659;
// System.IO.TextReader
struct TextReader_t921;
// System.Text.Encoding
struct Encoding_t350;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t658  : public Object_t
{
};
struct Console_t658_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t659 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t659 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t921 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t350 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t350 * ___outputEncoding_4;
};
