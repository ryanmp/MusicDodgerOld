#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t479;
// System.Net.WebRequest
struct WebRequest_t473;
// System.Uri
struct Uri_t255;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m1719 (HttpRequestCreator_t479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t473 * HttpRequestCreator_Create_m1720 (HttpRequestCreator_t479 * __this, Uri_t255 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
