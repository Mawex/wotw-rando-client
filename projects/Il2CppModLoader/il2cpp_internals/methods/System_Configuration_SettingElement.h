using namespace app;

namespace app::methods::System::Configuration::SettingElement {
IL2CPP_REGISTER_METHOD(0x029623B0, void, __ctor, (SettingElement * __this));
IL2CPP_REGISTER_METHODINFO(0x0471BFB0, SettingElement__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029623E0, void, __ctor, (SettingElement * __this, String * name, SettingsSerializeAs__Enum serializeAs));
IL2CPP_REGISTER_METHODINFO(0x04758A98, SettingElement__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962410, String *, get_Name, (SettingElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04778018, SettingElement_get_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962440, void, set_Name, (SettingElement * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x047510A0, SettingElement_set_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962470, ConfigurationPropertyCollection *, get_Properties, (SettingElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04702F90, SettingElement_get_Properties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029624A0, SettingsSerializeAs__Enum, get_SerializeAs, (SettingElement * __this));
IL2CPP_REGISTER_METHODINFO(0x0472C238, SettingElement_get_SerializeAs__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029624D0, void, set_SerializeAs, (SettingElement * __this, SettingsSerializeAs__Enum value));
IL2CPP_REGISTER_METHODINFO(0x04796540, SettingElement_set_SerializeAs__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962500, SettingValueElement *, get_Value, (SettingElement * __this));
IL2CPP_REGISTER_METHODINFO(0x047138F0, SettingElement_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962530, void, set_Value, (SettingElement * __this, SettingValueElement * value));
IL2CPP_REGISTER_METHODINFO(0x04756080, SettingElement_set_Value__MethodInfo);
}
