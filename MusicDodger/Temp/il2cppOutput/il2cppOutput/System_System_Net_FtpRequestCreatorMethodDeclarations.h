#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t475;
// System.Net.WebRequest
struct WebRequest_t473;
// System.Uri
struct Uri_t255;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m1713 (FtpRequestCreator_t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t473 * FtpRequestCreator_Create_m1714 (FtpRequestCreator_t475 * __this, Uri_t255 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
