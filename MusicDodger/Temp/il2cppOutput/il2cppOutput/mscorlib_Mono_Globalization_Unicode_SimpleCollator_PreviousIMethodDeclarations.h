#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t869;
struct PreviousInfo_t869_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m4530 (PreviousInfo_t869 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t869_marshal(const PreviousInfo_t869& unmarshaled, PreviousInfo_t869_marshaled& marshaled);
void PreviousInfo_t869_marshal_back(const PreviousInfo_t869_marshaled& marshaled, PreviousInfo_t869& unmarshaled);
void PreviousInfo_t869_marshal_cleanup(PreviousInfo_t869_marshaled& marshaled);
