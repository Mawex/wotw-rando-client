#include <interception_macros.h>

namespace app::methods::ByteUberStateCondition {
IL2CPP_REGISTER_METHOD(0x01B56F20, void, __ctor, (ByteUberStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x01B570F0, bool, Validate, (ByteUberStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x01B57230, bool, Validate, (ByteUberStateCondition * __this, uint8_t externalValue));
IL2CPP_REGISTER_METHOD(0x01B57280, uint8_t, get_Min, (ByteUberStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x01B57330, void, set_Min, (ByteUberStateCondition * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x01B57410, uint8_t, get_Max, (ByteUberStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x01B574C0, void, set_Max, (ByteUberStateCondition * __this, uint8_t value));
}
