#include <interception_macros.h>

namespace app::methods::BooleanUberStateCondition {
IL2CPP_REGISTER_METHOD(0x01B55AA0, void, __ctor, (BooleanUberStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x01B55BC0, bool, Validate, (BooleanUberStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x01B55CC0, bool, Validate, (BooleanUberStateCondition * __this, bool externalValue));
IL2CPP_REGISTER_METHOD(0x01B55CE0, bool, get_DesiredValue, (BooleanUberStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x01B55DB0, void, set_DesiredValue, (BooleanUberStateCondition * __this, bool value));
}
