#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t754;
// System.Net.WebRequest
struct WebRequest_t748;
// System.Uri
struct Uri_t528;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m3528 (HttpRequestCreator_t754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t748 * HttpRequestCreator_Create_m3529 (HttpRequestCreator_t754 * __this, Uri_t528 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
