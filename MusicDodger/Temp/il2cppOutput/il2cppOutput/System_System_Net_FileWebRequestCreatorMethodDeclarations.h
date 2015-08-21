#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t474;
// System.Net.WebRequest
struct WebRequest_t473;
// System.Uri
struct Uri_t255;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m1711 (FileWebRequestCreator_t474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t473 * FileWebRequestCreator_Create_m1712 (FileWebRequestCreator_t474 * __this, Uri_t255 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
