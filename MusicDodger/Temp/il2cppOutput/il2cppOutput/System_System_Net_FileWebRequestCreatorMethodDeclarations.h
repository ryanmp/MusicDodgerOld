#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t749;
// System.Net.WebRequest
struct WebRequest_t748;
// System.Uri
struct Uri_t528;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m3520 (FileWebRequestCreator_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t748 * FileWebRequestCreator_Create_m3521 (FileWebRequestCreator_t749 * __this, Uri_t528 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
