﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioSettings
struct AudioSettings_t197;

// System.Double UnityEngine.AudioSettings::get_dspTime()
extern "C" double AudioSettings_get_dspTime_m262 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m948 (AudioSettings_t197 * __this, bool ___deviceWasChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
