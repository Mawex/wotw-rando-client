using namespace app;

namespace app::methods::System::Configuration::ConfigurationSection {
IL2CPP_REGISTER_METHOD(0x031BBDE0, void, DeserializeSection, (ConfigurationSection * __this, XmlReader * reader));
IL2CPP_REGISTER_METHODINFO(0x0478C668, ConfigurationSection_DeserializeSection__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BBE10, bool, IsModified, (ConfigurationSection * __this));
IL2CPP_REGISTER_METHODINFO(0x0473A7E0, ConfigurationSection_IsModified__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BBE40, void, ResetModified, (ConfigurationSection * __this));
IL2CPP_REGISTER_METHODINFO(0x0475E8A0, ConfigurationSection_ResetModified__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BBE70, String *, SerializeSection, (ConfigurationSection * __this, ConfigurationElement * parentElement, String * name, ConfigurationSaveMode__Enum saveMode));
IL2CPP_REGISTER_METHODINFO(0x0470F8F0, ConfigurationSection_SerializeSection__MethodInfo);
}
