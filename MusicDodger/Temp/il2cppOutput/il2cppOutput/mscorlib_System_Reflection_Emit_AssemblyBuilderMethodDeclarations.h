#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1006;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1005;
// System.Type[]
struct TypeU5BU5D_t267;
// System.Exception
struct Exception_t27;
// System.Reflection.AssemblyName
struct AssemblyName_t1053;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m5793 (AssemblyBuilder_t1006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1005* AssemblyBuilder_GetModulesInternal_m5794 (AssemblyBuilder_t1006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t267* AssemblyBuilder_GetTypes_m5795 (AssemblyBuilder_t1006 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m5796 (AssemblyBuilder_t1006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t27 * AssemblyBuilder_not_supported_m5797 (AssemblyBuilder_t1006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1053 * AssemblyBuilder_UnprotectedGetName_m5798 (AssemblyBuilder_t1006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
