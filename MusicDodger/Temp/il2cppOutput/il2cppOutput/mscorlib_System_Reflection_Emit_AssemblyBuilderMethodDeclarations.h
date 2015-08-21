#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1004;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1003;
// System.Type[]
struct TypeU5BU5D_t265;
// System.Exception
struct Exception_t27;
// System.Reflection.AssemblyName
struct AssemblyName_t1051;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m5782 (AssemblyBuilder_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1003* AssemblyBuilder_GetModulesInternal_m5783 (AssemblyBuilder_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t265* AssemblyBuilder_GetTypes_m5784 (AssemblyBuilder_t1004 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m5785 (AssemblyBuilder_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t27 * AssemblyBuilder_not_supported_m5786 (AssemblyBuilder_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1051 * AssemblyBuilder_UnprotectedGetName_m5787 (AssemblyBuilder_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
