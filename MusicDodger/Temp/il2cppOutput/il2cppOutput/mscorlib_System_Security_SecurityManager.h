﻿#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t445;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t1274;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.SecurityManager
struct  SecurityManager_t1295  : public Object_t
{
};
struct SecurityManager_t1295_StaticFields{
	// System.Object System.Security.SecurityManager::_lockObject
	Object_t * ____lockObject_0;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t445 * ____declsecCache_1;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t1274 * ____execution_2;
};
