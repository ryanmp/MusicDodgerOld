#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t209;
struct SkeletonBone_t209_marshaled;

void SkeletonBone_t209_marshal(const SkeletonBone_t209& unmarshaled, SkeletonBone_t209_marshaled& marshaled);
void SkeletonBone_t209_marshal_back(const SkeletonBone_t209_marshaled& marshaled, SkeletonBone_t209& unmarshaled);
void SkeletonBone_t209_marshal_cleanup(SkeletonBone_t209_marshaled& marshaled);
