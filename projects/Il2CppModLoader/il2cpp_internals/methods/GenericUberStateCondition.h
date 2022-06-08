#include <interception_macros.h>

namespace app::methods::GenericUberStateCondition {
IL2CPP_REGISTER_METHOD(0x01B5DAE0, void, __ctor, (GenericUberStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x01B5DCB0, bool, Validate, (GenericUberStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x01B5DF00, float, get_Min, (GenericUberStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x01B5DFB0, void, set_Min, (GenericUberStateCondition * __this, float value));
IL2CPP_REGISTER_METHOD(0x01B5E090, float, get_Max, (GenericUberStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x01B5E140, void, set_Max, (GenericUberStateCondition * __this, float value));
}
