#include <interception_macros.h>

namespace app::methods::System_ComponentModel::BindableAttribute {
    IL2CPP_REGISTER_METHOD(0x024A4D00, void, __ctor_1, (app::BindableAttribute * this_ptr, bool bindable));
    IL2CPP_REGISTER_METHOD(0x01BE0270, void, __ctor_2, (app::BindableAttribute * this_ptr, bool bindable, app::BindingDirection__Enum direction));
    IL2CPP_REGISTER_METHOD(0x024A4D10, void, __ctor_3, (app::BindableAttribute * this_ptr, app::BindableSupport__Enum flags));
    IL2CPP_REGISTER_METHOD(0x024A4D30, void, __ctor_4, (app::BindableAttribute * this_ptr, app::BindableSupport__Enum flags, app::BindingDirection__Enum direction));
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Bindable, (app::BindableAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CC59E0, app::BindingDirection__Enum, get_Direction, (app::BindableAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x024A4D50, bool, Equals, (app::BindableAttribute * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x01FDE3D0, int32_t, GetHashCode, (app::BindableAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x024A4E40, bool, IsDefaultAttribute, (app::BindableAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x024A4F10, void, __cctor, ());
}
