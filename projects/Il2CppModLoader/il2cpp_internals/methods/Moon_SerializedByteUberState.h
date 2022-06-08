using namespace app;

namespace app::methods::Moon::SerializedByteUberState {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (SerializedByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int64_t, get_Size, (SerializedByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IUberStateGroup *, get_UberStateGroup, (SerializedByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B65990, UberID *, get_GroupID, (SerializedByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B65A80, uint8_t, get_Value, (SerializedByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B65BD0, void, set_Value, (SerializedByteUberState * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x01B65CA0, float, get_GenericValue, (SerializedByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B65CC0, void, set_GenericValue, (SerializedByteUberState * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FBB40, Nullable_1_Single_, get_VolitileGenericOverrideValue, (SerializedByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_VolitileGenericOverrideValue, (SerializedByteUberState * __this, Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x00E257C0, NamedValue_1_System_Byte___Array *, get_Options, (SerializedByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x004F4CE0, uint8_t, get_DefaultByteValue, (SerializedByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_DefaultByteValue, (SerializedByteUberState * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (SerializedByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B65CD0, void, Save, (SerializedByteUberState * __this, UberStateArchive * archive, Object * state));
IL2CPP_REGISTER_METHOD(0x01B65D90, Object *, Load, (SerializedByteUberState * __this, UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x01B65DA0, Object *, Read, (UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x00910BD0, UberStateHeader_UberStateType__Enum, get_Type, (SerializedByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B65E40, Object *, CreateDefaultUberState, (SerializedByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B65ED0, String *, ToString, (SerializedByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FF80, void, __ctor, (SerializedByteUberState * __this));
}
