#include <interception_macros.h>

namespace app::methods::System_ComponentModel::AmbientValueAttribute {
    IL2CPP_REGISTER_METHOD(0x0249ED40, void, __ctor_1, (app::AmbientValueAttribute * this_ptr, app::Type * type, app::String * value));
    IL2CPP_REGISTER_METHOD(0x0249EE30, void, __ctor_2, (app::AmbientValueAttribute * this_ptr, uint16_t value));
    IL2CPP_REGISTER_METHOD(0x0249EED0, void, __ctor_3, (app::AmbientValueAttribute * this_ptr, uint8_t value));
    IL2CPP_REGISTER_METHOD(0x0249EF70, void, __ctor_4, (app::AmbientValueAttribute * this_ptr, int16_t value));
    IL2CPP_REGISTER_METHOD(0x0249F010, void, __ctor_5, (app::AmbientValueAttribute * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHOD(0x0249F0B0, void, __ctor_6, (app::AmbientValueAttribute * this_ptr, int64_t value));
    IL2CPP_REGISTER_METHOD(0x0249F150, void, __ctor_7, (app::AmbientValueAttribute * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x0249F1F0, void, __ctor_8, (app::AmbientValueAttribute * this_ptr, double value));
    IL2CPP_REGISTER_METHOD(0x0249F290, void, __ctor_9, (app::AmbientValueAttribute * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor_10, (app::AmbientValueAttribute * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor_11, (app::AmbientValueAttribute * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object *, get_Value, (app::AmbientValueAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0249F330, bool, Equals, (app::AmbientValueAttribute * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::AmbientValueAttribute * this_ptr));
}
