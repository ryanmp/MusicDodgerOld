#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWWForm
struct WWWForm_t175;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t349;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t350;

// System.Void UnityEngine.WWWForm::.ctor()
extern "C" void WWWForm__ctor_m799 (WWWForm_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C" void WWWForm_AddField_m800 (WWWForm_t175 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C" void WWWForm_AddField_m801 (WWWForm_t175 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t350 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C" void WWWForm_AddField_m802 (WWWForm_t175 * __this, String_t* ___fieldName, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C" Dictionary_2_t349 * WWWForm_get_headers_m803 (WWWForm_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C" ByteU5BU5D_t36* WWWForm_get_data_m804 (WWWForm_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
