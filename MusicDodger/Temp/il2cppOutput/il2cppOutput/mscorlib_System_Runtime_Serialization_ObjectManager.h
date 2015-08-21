#pragma once
#include <stdint.h>
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1218;
// System.Collections.ArrayList
struct ArrayList_t457;
// System.Collections.Hashtable
struct Hashtable_t447;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1158;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.ObjectManager
struct  ObjectManager_t1211  : public Object_t
{
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_objectRecordChain
	ObjectRecord_t1218 * ____objectRecordChain_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_lastObjectRecord
	ObjectRecord_t1218 * ____lastObjectRecord_1;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_deserializedRecords
	ArrayList_t457 * ____deserializedRecords_2;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_onDeserializedCallbackRecords
	ArrayList_t457 * ____onDeserializedCallbackRecords_3;
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectManager::_objectRecords
	Hashtable_t447 * ____objectRecords_4;
	// System.Boolean System.Runtime.Serialization.ObjectManager::_finalFixup
	bool ____finalFixup_5;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectManager::_selector
	Object_t * ____selector_6;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.ObjectManager::_context
	StreamingContext_t380  ____context_7;
	// System.Int32 System.Runtime.Serialization.ObjectManager::_registeredObjectsCount
	int32_t ____registeredObjectsCount_8;
};
