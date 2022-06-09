#include <interception_macros.h>

namespace app::methods::System_ComponentModel::DescriptionAttribute {
IL2CPP_REGISTER_METHOD(0x01FE2D70, void, __ctor_1, (app::DescriptionAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor_2, (app::DescriptionAttribute * this_ptr, app::String * description));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Description, (app::DescriptionAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_DescriptionValue, (app::DescriptionAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_DescriptionValue, (app::DescriptionAttribute * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x01FE2E00, bool, Equals, (app::DescriptionAttribute * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x01FE2F50, int32_t, GetHashCode, (app::DescriptionAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FE2F90, bool, IsDefaultAttribute, (app::DescriptionAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FE3050, void, __cctor, ());
}
