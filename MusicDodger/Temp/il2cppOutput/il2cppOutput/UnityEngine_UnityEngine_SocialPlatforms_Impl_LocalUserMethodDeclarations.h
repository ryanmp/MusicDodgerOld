#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t102;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t301;

// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern "C" void LocalUser__ctor_m1329 (LocalUser_t102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C" void LocalUser_SetFriends_m1330 (LocalUser_t102 * __this, IUserProfileU5BU5D_t301* ___friends, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C" void LocalUser_SetAuthenticated_m1331 (LocalUser_t102 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C" void LocalUser_SetUnderage_m1332 (LocalUser_t102 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C" bool LocalUser_get_authenticated_m1333 (LocalUser_t102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
