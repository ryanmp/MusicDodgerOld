#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t90;
struct YieldInstruction_t90_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m923 (YieldInstruction_t90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t90_marshal(const YieldInstruction_t90& unmarshaled, YieldInstruction_t90_marshaled& marshaled);
void YieldInstruction_t90_marshal_back(const YieldInstruction_t90_marshaled& marshaled, YieldInstruction_t90& unmarshaled);
void YieldInstruction_t90_marshal_cleanup(YieldInstruction_t90_marshaled& marshaled);
