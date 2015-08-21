#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GameObject
struct GameObject_t58;
// UnityEngine.Transform
struct Transform_t73;
// UnityEngine.Component
struct Component_t69;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// UnityEngine.Component UnityEngine.GameObject::GetComponentByName(System.String)
extern "C" Component_t69 * GameObject_GetComponentByName_m907 (GameObject_t58 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.String)
extern "C" Component_t69 * GameObject_GetComponent_m241 (GameObject_t58 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t73 * GameObject_get_transform_m264 (GameObject_t58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m908 (GameObject_t58 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t69 * GameObject_Internal_AddComponentWithType_m909 (GameObject_t58 * __this, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t69 * GameObject_AddComponent_m910 (GameObject_t58 * __this, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
