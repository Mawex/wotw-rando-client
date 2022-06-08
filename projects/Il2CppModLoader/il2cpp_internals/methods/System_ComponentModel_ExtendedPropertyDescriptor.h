using namespace app;

namespace app::methods::System::ComponentModel::ExtendedPropertyDescriptor {
IL2CPP_REGISTER_METHOD(0x01FECBA0, void, __ctor, (ExtendedPropertyDescriptor * __this, ReflectPropertyDescriptor * extenderInfo, Type * receiverType, IExtenderProvider * provider, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x01FECF60, void, __ctor, (ExtendedPropertyDescriptor * __this, PropertyDescriptor * extender, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x01FED0D0, bool, CanResetValue, (ExtendedPropertyDescriptor * __this, Object * comp));
IL2CPP_REGISTER_METHOD(0x01FED100, Type *, get_ComponentType, (ExtendedPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01FED130, bool, get_IsReadOnly, (ExtendedPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01FED270, Type *, get_PropertyType, (ExtendedPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01FED2A0, String *, get_DisplayName, (ExtendedPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01FED600, Object *, GetValue, (ExtendedPropertyDescriptor * __this, Object * comp));
IL2CPP_REGISTER_METHOD(0x01FED630, void, ResetValue, (ExtendedPropertyDescriptor * __this, Object * comp));
IL2CPP_REGISTER_METHOD(0x01FED670, void, SetValue, (ExtendedPropertyDescriptor * __this, Object * component, Object * value));
IL2CPP_REGISTER_METHOD(0x01FED6B0, bool, ShouldSerializeValue, (ExtendedPropertyDescriptor * __this, Object * comp));
}
