#include <interception_macros.h>

namespace app::methods::Moon::BooleanUberState {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (BooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IUberStateGroup *, get_UberStateGroup, (BooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FB20, UberID *, get_GroupID, (BooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FC10, bool, get_Value, (BooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FD60, void, set_Value, (BooleanUberState * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_DefaultBooleanValue, (BooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_DefaultBooleanValue, (BooleanUberState * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01B5FE20, NamedValue_1_System_Boolean___Array *, get_Options, (BooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (BooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FE40, void, Initialize, (BooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FE50, String *, ToString, (BooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FF30, float, get_GenericValue, (BooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FF50, void, set_GenericValue, (BooleanUberState * __this, float value));
IL2CPP_REGISTER_METHOD(0x01A66990, Nullable_1_Single_, get_VolitileGenericOverrideValue, (BooleanUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FF70, void, set_VolitileGenericOverrideValue, (BooleanUberState * __this, Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x01B5FF80, void, __ctor, (BooleanUberState * __this));
}
