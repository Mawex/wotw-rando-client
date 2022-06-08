#include <interception_macros.h>

namespace app::methods::System::ComponentModel::DefaultValueAttribute {
IL2CPP_REGISTER_METHOD(0x01FE2240, void, __ctor, (DefaultValueAttribute * __this, Type * type, String * value));
IL2CPP_REGISTER_METHOD(0x01FE2330, void, __ctor, (DefaultValueAttribute * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01FE23D0, void, __ctor, (DefaultValueAttribute * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x01FE2470, void, __ctor, (DefaultValueAttribute * __this, int16_t value));
IL2CPP_REGISTER_METHOD(0x01FE2510, void, __ctor, (DefaultValueAttribute * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01FE25B0, void, __ctor, (DefaultValueAttribute * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x01FE2650, void, __ctor, (DefaultValueAttribute * __this, float value));
IL2CPP_REGISTER_METHOD(0x01FE26F0, void, __ctor, (DefaultValueAttribute * __this, double value));
IL2CPP_REGISTER_METHOD(0x01FE2790, void, __ctor, (DefaultValueAttribute * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (DefaultValueAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (DefaultValueAttribute * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_Value, (DefaultValueAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01FE2830, bool, Equals, (DefaultValueAttribute * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (DefaultValueAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, SetValue, (DefaultValueAttribute * __this, Object * value));
}
