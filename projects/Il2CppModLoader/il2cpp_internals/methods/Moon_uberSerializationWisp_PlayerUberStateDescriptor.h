#include <interception_macros.h>

namespace app::methods::Moon_uberSerializationWisp::PlayerUberStateDescriptor {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (app::PlayerUberStateDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F38130, int64_t, get_Size, (app::PlayerUberStateDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9D0, IUberStateGroup *, get_UberStateGroup, (app::PlayerUberStateDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F38260, UberID *, get_GroupID, (app::PlayerUberStateDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F38350, PlayerUberState *, get_Value, (app::PlayerUberStateDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F38440, void, set_Value, (app::PlayerUberStateDescriptor * this_ptr, app::PlayerUberState * value));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (app::PlayerUberStateDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F38510, void, SetIsDirty, (app::PlayerUberStateDescriptor * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04713050, PlayerUberStateDescriptor_SetIsDirty__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F385C0, void, Save, (app::PlayerUberStateDescriptor * this_ptr, app::UberStateArchive * archive, app::Object * state));
IL2CPP_REGISTER_METHOD(0x00F385E0, Object *, Load, (app::PlayerUberStateDescriptor * this_ptr, app::UberStateArchive * archive, int32_t store_version));
IL2CPP_REGISTER_METHOD(0x008E77B0, UberStateHeader_UberStateType__Enum, get_Type, (app::PlayerUberStateDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F38940, Object *, CreateDefaultUberState, (app::PlayerUberStateDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsActive, (app::PlayerUberStateDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F38B60, void, set_IsActive, (app::PlayerUberStateDescriptor * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x00F38B90, void, OnGui, (app::PlayerUberStateDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F39070, void, HandleInput, (app::PlayerUberStateDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F390E0, void, __ctor, (app::PlayerUberStateDescriptor * this_ptr));
}
