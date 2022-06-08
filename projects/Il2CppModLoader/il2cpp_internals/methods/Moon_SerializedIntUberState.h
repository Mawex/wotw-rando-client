#include <interception_macros.h>

namespace app::methods::Moon::SerializedIntUberState {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (SerializedIntUberState * __this));
IL2CPP_REGISTER_METHOD(0x00910BD0, int64_t, get_Size, (SerializedIntUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IUberStateGroup *, get_UberStateGroup, (SerializedIntUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B66710, UberID *, get_GroupID, (SerializedIntUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B66800, int32_t, get_Value, (SerializedIntUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B66950, void, set_Value, (SerializedIntUberState * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01B66A20, float, get_GenericValue, (SerializedIntUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B66A40, void, set_GenericValue, (SerializedIntUberState * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FBB40, Nullable_1_Single_, get_VolitileGenericOverrideValue, (SerializedIntUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_VolitileGenericOverrideValue, (SerializedIntUberState * __this, Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x00E257C0, NamedValue_1_System_Int32___Array *, get_Options, (SerializedIntUberState * __this));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (SerializedIntUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B66A50, void, Save, (SerializedIntUberState * __this, UberStateArchive * archive, Object * state));
IL2CPP_REGISTER_METHOD(0x01B66B40, Object *, Load, (SerializedIntUberState * __this, UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x01B66B50, Object *, Read, (UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x00417920, UberStateHeader_UberStateType__Enum, get_Type, (SerializedIntUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B66C20, Object *, CreateDefaultUberState, (SerializedIntUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B66CB0, String *, ToString, (SerializedIntUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FF80, void, __ctor, (SerializedIntUberState * __this));
}
