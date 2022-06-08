#include <interception_macros.h>

namespace app::methods::System::Configuration::IgnoreSection {
IL2CPP_REGISTER_METHOD(0x031BBEA0, void, __ctor, (IgnoreSection * __this));
IL2CPP_REGISTER_METHODINFO(0x04783E10, IgnoreSection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BBED0, ConfigurationPropertyCollection *, get_Properties, (IgnoreSection * __this));
IL2CPP_REGISTER_METHODINFO(0x0471FE40, IgnoreSection_get_Properties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BBF00, void, DeserializeSection, (IgnoreSection * __this, XmlReader * xmlReader));
IL2CPP_REGISTER_METHODINFO(0x0470C040, IgnoreSection_DeserializeSection__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BBF30, bool, IsModified, (IgnoreSection * __this));
IL2CPP_REGISTER_METHODINFO(0x047296A0, IgnoreSection_IsModified__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BBF60, void, Reset, (IgnoreSection * __this, ConfigurationElement * parentSection));
IL2CPP_REGISTER_METHODINFO(0x047411C0, IgnoreSection_Reset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BBF90, void, ResetModified, (IgnoreSection * __this));
IL2CPP_REGISTER_METHODINFO(0x04788C70, IgnoreSection_ResetModified__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BBFC0, String *, SerializeSection, (IgnoreSection * __this, ConfigurationElement * parentSection, String * name, ConfigurationSaveMode__Enum saveMode));
IL2CPP_REGISTER_METHODINFO(0x04769D50, IgnoreSection_SerializeSection__MethodInfo);
}
