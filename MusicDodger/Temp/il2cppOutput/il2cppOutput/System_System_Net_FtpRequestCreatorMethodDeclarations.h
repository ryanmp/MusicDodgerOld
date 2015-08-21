#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t473;
// System.Net.WebRequest
struct WebRequest_t471;
// System.Uri
struct Uri_t253;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m1702 (FtpRequestCreator_t473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t471 * FtpRequestCreator_Create_m1703 (FtpRequestCreator_t473 * __this, Uri_t253 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
