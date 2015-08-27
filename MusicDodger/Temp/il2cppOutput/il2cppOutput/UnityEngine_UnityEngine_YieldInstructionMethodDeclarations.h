#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t385;
struct YieldInstruction_t385_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m2664 (YieldInstruction_t385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t385_marshal(const YieldInstruction_t385& unmarshaled, YieldInstruction_t385_marshaled& marshaled);
void YieldInstruction_t385_marshal_back(const YieldInstruction_t385_marshaled& marshaled, YieldInstruction_t385& unmarshaled);
void YieldInstruction_t385_marshal_cleanup(YieldInstruction_t385_marshaled& marshaled);
