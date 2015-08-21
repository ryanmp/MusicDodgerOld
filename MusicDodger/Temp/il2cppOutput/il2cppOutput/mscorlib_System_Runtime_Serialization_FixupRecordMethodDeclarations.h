#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t1222;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1218;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1211;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C" void FixupRecord__ctor_m6876 (FixupRecord_t1222 * __this, ObjectRecord_t1218 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t1218 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void FixupRecord_FixupImpl_m6877 (FixupRecord_t1222 * __this, ObjectManager_t1211 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
