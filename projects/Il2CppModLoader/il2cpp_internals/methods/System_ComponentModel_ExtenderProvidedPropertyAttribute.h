using namespace app;

namespace app::methods::System::ComponentModel::ExtenderProvidedPropertyAttribute {
IL2CPP_REGISTER_METHOD(0x01FED6E0, ExtenderProvidedPropertyAttribute *, Create, (PropertyDescriptor * extenderProperty, Type * receiverType, IExtenderProvider * provider));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ExtenderProvidedPropertyAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, PropertyDescriptor *, get_ExtenderProperty, (ExtenderProvidedPropertyAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, IExtenderProvider *, get_Provider, (ExtenderProvidedPropertyAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Type *, get_ReceiverType, (ExtenderProvidedPropertyAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01FED850, bool, Equals, (ExtenderProvidedPropertyAttribute * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (ExtenderProvidedPropertyAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01FED9A0, bool, IsDefaultAttribute, (ExtenderProvidedPropertyAttribute * __this));
}
