using namespace app;

namespace app::methods::Moon::SerializedFloatUberState {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (SerializedFloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x00910BD0, int64_t, get_Size, (SerializedFloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IUberStateGroup *, get_UberStateGroup, (SerializedFloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B66070, UberID *, get_GroupID, (SerializedFloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B66160, float, get_Value, (SerializedFloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B662C0, void, set_Value, (SerializedFloatUberState * __this, float value));
IL2CPP_REGISTER_METHOD(0x01B5FE20, NamedValue_1_System_Single___Array *, get_Options, (SerializedFloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B66390, float, get_GenericValue, (SerializedFloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B663A0, void, set_GenericValue, (SerializedFloatUberState * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FBB40, Nullable_1_Single_, get_VolitileGenericOverrideValue, (SerializedFloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_VolitileGenericOverrideValue, (SerializedFloatUberState * __this, Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (SerializedFloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B663B0, void, Save, (SerializedFloatUberState * __this, UberStateArchive * archive, Object * state));
IL2CPP_REGISTER_METHOD(0x01B664B0, Object *, Load, (SerializedFloatUberState * __this, UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x01B664C0, Object *, Read, (UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x0043D9E0, UberStateHeader_UberStateType__Enum, get_Type, (SerializedFloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B665A0, Object *, CreateDefaultUberState, (SerializedFloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B66630, String *, ToString, (SerializedFloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FF80, void, __ctor, (SerializedFloatUberState * __this));
}
