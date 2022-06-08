using namespace app;

namespace app::methods::Moon::UberStateValueStore {
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Version, (UberStateValueStore * __this));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_Version, (UberStateValueStore * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00446970, bool, get_IsInitialized, (UberStateValueStore * __this));
IL2CPP_REGISTER_METHOD(0x01B70170, void, set_IsInitialized, (UberStateValueStore * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_InstanceID, (UberStateValueStore * __this));
IL2CPP_REGISTER_METHOD(0x01B70320, void, __ctor, (UberStateValueStore * __this));
IL2CPP_REGISTER_METHOD(0x01B704F0, void, __ctor, (UberStateValueStore * __this, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x01B70740, void, __ctor, (UberStateValueStore * __this, Byte__Array * data, int32_t actualSize));
IL2CPP_REGISTER_METHOD(0x01B70A90, void, FinalizeInitialization, (UberStateValueStore * __this, bool shouldParse));
IL2CPP_REGISTER_METHOD(0x01B70B80, void, PopulateValueStore, (UberStateValueStore * __this));
IL2CPP_REGISTER_METHOD(0x01B71170, UberStateSaveFileHandler_LoadStatus__Enum, ParseData, (UberStateValueStore * __this));
IL2CPP_REGISTER_METHOD(0x01B715F0, void, ApplyStateToByteArray, (UberStateValueStore * __this));
IL2CPP_REGISTER_METHODINFO(0x04777A50, UberStateValueStore_ApplyStateToByteArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01B719E0, bool, get_IsDirty, (UberStateValueStore * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, IEnumerable_1_KeyValuePair_2_Moon_UberID_Moon_UberStateValueGroup_ *, get_GroupMap, (UberStateValueStore * __this));
IL2CPP_REGISTER_METHOD(0x01B71BC0, bool, TryGetGroup, (UberStateValueStore * __this, ISerializedUberState * descriptor, UberStateValueGroup * * uberStateValueGroup));
IL2CPP_REGISTER_METHOD(0x01B71CC0, bool, GetState, (UberStateValueStore * __this, ISerializedUberState * uberStateDescriptor, Object * * state));
IL2CPP_REGISTER_METHOD(0x01B71DB0, bool, GetState, (UberStateValueStore * __this, ISerializedUberState * uberStateDescriptor, bool * state));
IL2CPP_REGISTER_METHOD(0x01B71DF0, bool, GetState, (UberStateValueStore * __this, ISerializedUberState * uberStateDescriptor, float * state));
IL2CPP_REGISTER_METHOD(0x01B71EE0, bool, GetState, (UberStateValueStore * __this, ISerializedUberState * uberStateDescriptor, int32_t * state));
IL2CPP_REGISTER_METHOD(0x01B71F20, bool, GetState, (UberStateValueStore * __this, ISerializedUberState * uberStateDescriptor, uint8_t * state));
IL2CPP_REGISTER_METHOD(0x01B71F60, void, SetState, (UberStateValueStore * __this, ISerializedUberState * uberStateDescriptor, Object * uberState));
IL2CPP_REGISTER_METHOD(0x01B720A0, void, SetState, (UberStateValueStore * __this, ISerializedUberState * uberStateDescriptor, bool uberState));
IL2CPP_REGISTER_METHOD(0x01B721E0, void, SetState, (UberStateValueStore * __this, ISerializedUberState * uberStateDescriptor, float uberState));
IL2CPP_REGISTER_METHOD(0x01B72320, void, SetState, (UberStateValueStore * __this, ISerializedUberState * uberStateDescriptor, int32_t uberState));
IL2CPP_REGISTER_METHOD(0x01B72460, void, SetState, (UberStateValueStore * __this, ISerializedUberState * uberStateDescriptor, uint8_t uberState));
IL2CPP_REGISTER_METHOD(0x01B725A0, Byte__Array *, ToByteArray, (UberStateValueStore * __this));
IL2CPP_REGISTER_METHOD(0x01B726C0, Byte__Array *, ToByteArrayWithClone, (UberStateValueStore * __this));
IL2CPP_REGISTER_METHOD(0x01B727F0, int32_t, ToByteArrayWithCopy, (UberStateValueStore * __this, Byte__Array * * arr));
IL2CPP_REGISTER_METHOD(0x01B72C10, UberStateValueGroup *, GetGroup, (UberStateValueStore * __this, ISerializedUberState * uberStateDescriptor));
IL2CPP_REGISTER_METHOD(0x0043D9A0, int64_t, get_HeaderSize, (UberStateValueStore * __this));
IL2CPP_REGISTER_METHOD(0x01B72EF0, int64_t, get_DataSize, (UberStateValueStore * __this));
IL2CPP_REGISTER_METHOD(0x01B730E0, int64_t, get_FullSize, (UberStateValueStore * __this));
IL2CPP_REGISTER_METHOD(0x01B73100, void, DebugLog, (UberStateValueStore * __this, String * txt));
IL2CPP_REGISTER_METHOD(0x01B73190, void, __cctor, (MethodInfo * method));
}
