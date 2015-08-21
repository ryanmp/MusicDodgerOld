#pragma once
#include <stdint.h>
// System.IO.TextReader
struct TextReader_t921;
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.IO.SynchronizedReader
struct  SynchronizedReader_t999  : public TextReader_t921
{
	// System.IO.TextReader System.IO.SynchronizedReader::reader
	TextReader_t921 * ___reader_1;
};
