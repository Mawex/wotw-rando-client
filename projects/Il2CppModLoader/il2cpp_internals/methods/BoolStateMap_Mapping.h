#include <interception_macros.h>

namespace app::methods::BoolStateMap_Mapping {
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Index, (BoolStateMap_Mapping__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_Index, (BoolStateMap_Mapping__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0011DC50, bool, get_Value, (BoolStateMap_Mapping__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C01A0, void, set_Value, (BoolStateMap_Mapping__Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x001C01B0, bool, Matches, (BoolStateMap_Mapping__Boxed * __this, IUberState * state));
}
