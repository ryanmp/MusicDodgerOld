#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t477;
// System.Net.WebRequest
struct WebRequest_t471;
// System.Uri
struct Uri_t253;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m1708 (HttpRequestCreator_t477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t471 * HttpRequestCreator_Create_m1709 (HttpRequestCreator_t477 * __this, Uri_t253 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
