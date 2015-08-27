#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t750;
// System.Net.WebRequest
struct WebRequest_t748;
// System.Uri
struct Uri_t528;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m3522 (FtpRequestCreator_t750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t748 * FtpRequestCreator_Create_m3523 (FtpRequestCreator_t750 * __this, Uri_t528 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
