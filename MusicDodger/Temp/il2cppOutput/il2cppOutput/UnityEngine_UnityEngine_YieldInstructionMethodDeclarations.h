#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t86;
struct YieldInstruction_t86_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m913 (YieldInstruction_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t86_marshal(const YieldInstruction_t86& unmarshaled, YieldInstruction_t86_marshaled& marshaled);
void YieldInstruction_t86_marshal_back(const YieldInstruction_t86_marshaled& marshaled, YieldInstruction_t86& unmarshaled);
void YieldInstruction_t86_marshal_cleanup(YieldInstruction_t86_marshaled& marshaled);
