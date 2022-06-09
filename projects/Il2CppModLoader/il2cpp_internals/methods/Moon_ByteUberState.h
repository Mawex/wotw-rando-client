#include <interception_macros.h>

namespace app::methods::Moon::ByteUberState {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (app::ByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IUberStateGroup *, get_UberStateGroup, (app::ByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B5FF90, UberID *, get_GroupID, (app::ByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B60080, uint8_t, get_Value, (app::ByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B601C0, void, set_Value, (app::ByteUberState * this_ptr, uint8_t value));
IL2CPP_REGISTER_METHOD(0x004F4CE0, uint8_t, get_DefaultByteValue, (app::ByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_DefaultByteValue, (app::ByteUberState * this_ptr, uint8_t value));
IL2CPP_REGISTER_METHOD(0x01B5FE20, NamedValue_1_System_Byte___Array *, get_Options, (app::ByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (app::ByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B60280, void, Initialize, (app::ByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B60290, String *, ToString, (app::ByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B60370, float, get_GenericValue, (app::ByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B60390, void, set_GenericValue, (app::ByteUberState * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x01A66990, Nullable_1_Single_, get_VolitileGenericOverrideValue, (app::ByteUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B5FF70, void, set_VolitileGenericOverrideValue, (app::ByteUberState * this_ptr, app::Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x01B5FF80, void, __ctor, (app::ByteUberState * this_ptr));
}
