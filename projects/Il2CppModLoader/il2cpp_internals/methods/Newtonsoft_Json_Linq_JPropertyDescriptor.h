#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Linq::JPropertyDescriptor {
IL2CPP_REGISTER_METHOD(0x01F0E5C0, void, __ctor, (JPropertyDescriptor * __this, String * name));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanResetValue, (JPropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x01F0E5D0, Object *, GetValue, (JPropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetValue, (JPropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x01F0E6D0, void, SetValue, (JPropertyDescriptor * __this, Object * component, Object * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldSerializeValue, (JPropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x01F0E900, Type *, get_ComponentType, (JPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (JPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01F0E9A0, Type *, get_PropertyType, (JPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_NameHashCode, (JPropertyDescriptor * __this));
}
