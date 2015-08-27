#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Uri/UriScheme
struct UriScheme_t885;
struct UriScheme_t885_marshaled;
// System.String
struct String_t;

// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern "C" void UriScheme__ctor_m4249 (UriScheme_t885 * __this, String_t* ___s, String_t* ___d, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void UriScheme_t885_marshal(const UriScheme_t885& unmarshaled, UriScheme_t885_marshaled& marshaled);
void UriScheme_t885_marshal_back(const UriScheme_t885_marshaled& marshaled, UriScheme_t885& unmarshaled);
void UriScheme_t885_marshal_cleanup(UriScheme_t885_marshaled& marshaled);
