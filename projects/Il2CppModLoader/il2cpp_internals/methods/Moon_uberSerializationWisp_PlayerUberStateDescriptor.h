using namespace app;

namespace app::methods::Moon::uberSerializationWisp::PlayerUberStateDescriptor {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (PlayerUberStateDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00F38130, int64_t, get_Size, (PlayerUberStateDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, IUberStateGroup *, get_UberStateGroup, (PlayerUberStateDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00F38260, UberID *, get_GroupID, (PlayerUberStateDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00F38350, PlayerUberState *, get_Value, (PlayerUberStateDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00F38440, void, set_Value, (PlayerUberStateDescriptor * __this, PlayerUberState * value));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (PlayerUberStateDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00F38510, void, SetIsDirty, (PlayerUberStateDescriptor * __this));
IL2CPP_REGISTER_METHODINFO(0x04713050, PlayerUberStateDescriptor_SetIsDirty__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F385C0, void, Save, (PlayerUberStateDescriptor * __this, UberStateArchive * archive, Object * state));
IL2CPP_REGISTER_METHOD(0x00F385E0, Object *, Load, (PlayerUberStateDescriptor * __this, UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x008E77B0, UberStateHeader_UberStateType__Enum, get_Type, (PlayerUberStateDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00F38940, Object *, CreateDefaultUberState, (PlayerUberStateDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsActive, (PlayerUberStateDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00F38B60, void, set_IsActive, (PlayerUberStateDescriptor * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F38B90, void, OnGui, (PlayerUberStateDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00F39070, void, HandleInput, (PlayerUberStateDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00F390E0, void, __ctor, (PlayerUberStateDescriptor * __this));
}
