#include <interception_macros.h>

namespace app::methods::Moon::ByteUberState {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (ByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IUberStateGroup *, get_UberStateGroup, (ByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FF90, UberID *, get_GroupID, (ByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B60080, uint8_t, get_Value, (ByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B601C0, void, set_Value, (ByteUberState * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x004F4CE0, uint8_t, get_DefaultByteValue, (ByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_DefaultByteValue, (ByteUberState * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x01B5FE20, NamedValue_1_System_Byte___Array *, get_Options, (ByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (ByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B60280, void, Initialize, (ByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B60290, String *, ToString, (ByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B60370, float, get_GenericValue, (ByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B60390, void, set_GenericValue, (ByteUberState * __this, float value));
IL2CPP_REGISTER_METHOD(0x01A66990, Nullable_1_Single_, get_VolitileGenericOverrideValue, (ByteUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FF70, void, set_VolitileGenericOverrideValue, (ByteUberState * __this, Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x01B5FF80, void, __ctor, (ByteUberState * __this));
}
