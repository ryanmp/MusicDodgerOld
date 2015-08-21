﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t1173;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.IContextAttribute[]
struct IContextAttributeU5BU5D_t1460;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ActivatedClientTypeEntry::.ctor(System.String,System.String,System.String)
extern "C" void ActivatedClientTypeEntry__ctor_m6647 (ActivatedClientTypeEntry_t1173 * __this, String_t* ___typeName, String_t* ___assemblyName, String_t* ___appUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::get_ApplicationUrl()
extern "C" String_t* ActivatedClientTypeEntry_get_ApplicationUrl_m6648 (ActivatedClientTypeEntry_t1173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.IContextAttribute[] System.Runtime.Remoting.ActivatedClientTypeEntry::get_ContextAttributes()
extern "C" IContextAttributeU5BU5D_t1460* ActivatedClientTypeEntry_get_ContextAttributes_m6649 (ActivatedClientTypeEntry_t1173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::get_ObjectType()
extern "C" Type_t * ActivatedClientTypeEntry_get_ObjectType_m6650 (ActivatedClientTypeEntry_t1173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::ToString()
extern "C" String_t* ActivatedClientTypeEntry_ToString_m6651 (ActivatedClientTypeEntry_t1173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
