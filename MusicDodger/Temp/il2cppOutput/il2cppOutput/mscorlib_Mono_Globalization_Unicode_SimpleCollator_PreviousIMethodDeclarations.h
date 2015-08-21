#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t867;
struct PreviousInfo_t867_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m4519 (PreviousInfo_t867 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t867_marshal(const PreviousInfo_t867& unmarshaled, PreviousInfo_t867_marshaled& marshaled);
void PreviousInfo_t867_marshal_back(const PreviousInfo_t867_marshaled& marshaled, PreviousInfo_t867& unmarshaled);
void PreviousInfo_t867_marshal_cleanup(PreviousInfo_t867_marshaled& marshaled);
