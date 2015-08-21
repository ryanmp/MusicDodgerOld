#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t211;
struct SkeletonBone_t211_marshaled;

void SkeletonBone_t211_marshal(const SkeletonBone_t211& unmarshaled, SkeletonBone_t211_marshaled& marshaled);
void SkeletonBone_t211_marshal_back(const SkeletonBone_t211_marshaled& marshaled, SkeletonBone_t211& unmarshaled);
void SkeletonBone_t211_marshal_cleanup(SkeletonBone_t211_marshaled& marshaled);
