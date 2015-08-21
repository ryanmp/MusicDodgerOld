#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ScriptableObject
struct ScriptableObject_t94;
struct ScriptableObject_t94_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" void ScriptableObject__ctor_m307 (ScriptableObject_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m308 (Object_t * __this /* static, unused */, ScriptableObject_t94 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C" ScriptableObject_t94 * ScriptableObject_CreateInstance_m309 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" ScriptableObject_t94 * ScriptableObject_CreateInstance_m310 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t94 * ScriptableObject_CreateInstanceFromType_m311 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void ScriptableObject_t94_marshal(const ScriptableObject_t94& unmarshaled, ScriptableObject_t94_marshaled& marshaled);
void ScriptableObject_t94_marshal_back(const ScriptableObject_t94_marshaled& marshaled, ScriptableObject_t94& unmarshaled);
void ScriptableObject_t94_marshal_cleanup(ScriptableObject_t94_marshaled& marshaled);
