#include <interception_macros.h>

namespace app::methods::System::ComponentModel::BindableAttribute {
IL2CPP_REGISTER_METHOD(0x024A4D00, void, __ctor, (BindableAttribute * __this, bool bindable));
IL2CPP_REGISTER_METHOD(0x01BE0270, void, __ctor, (BindableAttribute * __this, bool bindable, BindingDirection__Enum direction));
IL2CPP_REGISTER_METHOD(0x024A4D10, void, __ctor, (BindableAttribute * __this, BindableSupport__Enum flags));
IL2CPP_REGISTER_METHOD(0x024A4D30, void, __ctor, (BindableAttribute * __this, BindableSupport__Enum flags, BindingDirection__Enum direction));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Bindable, (BindableAttribute * __this));
IL2CPP_REGISTER_METHOD(0x00CC59E0, BindingDirection__Enum, get_Direction, (BindableAttribute * __this));
IL2CPP_REGISTER_METHOD(0x024A4D50, bool, Equals, (BindableAttribute * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01FDE3D0, int32_t, GetHashCode, (BindableAttribute * __this));
IL2CPP_REGISTER_METHOD(0x024A4E40, bool, IsDefaultAttribute, (BindableAttribute * __this));
IL2CPP_REGISTER_METHOD(0x024A4F10, void, __cctor, ());
}
