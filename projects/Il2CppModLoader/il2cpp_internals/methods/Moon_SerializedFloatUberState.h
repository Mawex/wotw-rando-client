#include <interception_macros.h>

namespace app::methods::Moon::SerializedFloatUberState {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (app::SerializedFloatUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x00910BD0, int64_t, get_Size, (app::SerializedFloatUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IUberStateGroup *, get_UberStateGroup, (app::SerializedFloatUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B66070, UberID *, get_GroupID, (app::SerializedFloatUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B66160, float, get_Value, (app::SerializedFloatUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B662C0, void, set_Value, (app::SerializedFloatUberState * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x01B5FE20, NamedValue_1_System_Single___Array *, get_Options, (app::SerializedFloatUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B66390, float, get_GenericValue, (app::SerializedFloatUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B663A0, void, set_GenericValue, (app::SerializedFloatUberState * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x002FBB40, Nullable_1_Single_, get_VolitileGenericOverrideValue, (app::SerializedFloatUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_VolitileGenericOverrideValue, (app::SerializedFloatUberState * this_ptr, app::Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (app::SerializedFloatUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B663B0, void, Save, (app::SerializedFloatUberState * this_ptr, app::UberStateArchive * archive, app::Object * state));
IL2CPP_REGISTER_METHOD(0x01B664B0, Object *, Load, (app::SerializedFloatUberState * this_ptr, app::UberStateArchive * archive, int32_t store_version));
IL2CPP_REGISTER_METHOD(0x01B664C0, Object *, Read, (app::UberStateArchive * archive, int32_t store_version));
IL2CPP_REGISTER_METHOD(0x0043D9E0, UberStateHeader_UberStateType__Enum, get_Type, (app::SerializedFloatUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B665A0, Object *, CreateDefaultUberState, (app::SerializedFloatUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B66630, String *, ToString, (app::SerializedFloatUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B5FF80, void, __ctor, (app::SerializedFloatUberState * this_ptr));
}
