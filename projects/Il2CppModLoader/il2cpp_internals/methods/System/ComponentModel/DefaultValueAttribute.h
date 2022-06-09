#include <interception_macros.h>

namespace app::methods::System::ComponentModel::DefaultValueAttribute {
    IL2CPP_REGISTER_METHOD(0x01FE2240, void, __ctor_1, (app::DefaultValueAttribute * this_ptr, app::Type * type, app::String * value));
    IL2CPP_REGISTER_METHOD(0x01FE2330, void, __ctor_2, (app::DefaultValueAttribute * this_ptr, uint16_t value));
    IL2CPP_REGISTER_METHOD(0x01FE23D0, void, __ctor_3, (app::DefaultValueAttribute * this_ptr, uint8_t value));
    IL2CPP_REGISTER_METHOD(0x01FE2470, void, __ctor_4, (app::DefaultValueAttribute * this_ptr, int16_t value));
    IL2CPP_REGISTER_METHOD(0x01FE2510, void, __ctor_5, (app::DefaultValueAttribute * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHOD(0x01FE25B0, void, __ctor_6, (app::DefaultValueAttribute * this_ptr, int64_t value));
    IL2CPP_REGISTER_METHOD(0x01FE2650, void, __ctor_7, (app::DefaultValueAttribute * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x01FE26F0, void, __ctor_8, (app::DefaultValueAttribute * this_ptr, double value));
    IL2CPP_REGISTER_METHOD(0x01FE2790, void, __ctor_9, (app::DefaultValueAttribute * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor_10, (app::DefaultValueAttribute * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor_11, (app::DefaultValueAttribute * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object *, get_Value, (app::DefaultValueAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01FE2830, bool, Equals, (app::DefaultValueAttribute * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::DefaultValueAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, SetValue, (app::DefaultValueAttribute * this_ptr, app::Object * value));
}
