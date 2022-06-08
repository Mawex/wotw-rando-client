using namespace app;

namespace app::methods::Moon::SerializedBooleanUberState {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (SerializedBooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int64_t, get_Size, (SerializedBooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IUberStateGroup *, get_UberStateGroup, (SerializedBooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B652C0, UberID *, get_GroupID, (SerializedBooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B653B0, bool, get_Value, (SerializedBooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B65500, void, set_Value, (SerializedBooleanUberState * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_DefaultBooleanValue, (SerializedBooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_DefaultBooleanValue, (SerializedBooleanUberState * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01B655D0, float, get_GenericValue, (SerializedBooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B655F0, void, set_GenericValue, (SerializedBooleanUberState * __this, float value));
IL2CPP_REGISTER_METHOD(0x01A66990, Nullable_1_Single_, get_VolitileGenericOverrideValue, (SerializedBooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FF70, void, set_VolitileGenericOverrideValue, (SerializedBooleanUberState * __this, Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x01B5FE20, NamedValue_1_System_Boolean___Array *, get_Options, (SerializedBooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (SerializedBooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B656B0, void, Save, (SerializedBooleanUberState * __this, UberStateArchive * archive, Object * state));
IL2CPP_REGISTER_METHOD(0x01B65770, Object *, Load, (SerializedBooleanUberState * __this, UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x01B65780, Object *, Read, (UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x00420230, UberStateHeader_UberStateType__Enum, get_Type, (SerializedBooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B65820, Object *, CreateDefaultUberState, (SerializedBooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B658B0, String *, ToString, (SerializedBooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FF80, void, __ctor, (SerializedBooleanUberState * __this));
}
