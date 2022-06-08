#include <interception_macros.h>

namespace app::methods::System::Configuration::SettingValueElement {
IL2CPP_REGISTER_METHOD(0x02962710, void, __ctor, (SettingValueElement * __this));
IL2CPP_REGISTER_METHODINFO(0x0478C550, SettingValueElement__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962740, ConfigurationPropertyCollection *, get_Properties, (SettingValueElement * __this));
IL2CPP_REGISTER_METHODINFO(0x0471E760, SettingValueElement_get_Properties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962770, XmlNode *, get_ValueXml, (SettingValueElement * __this));
IL2CPP_REGISTER_METHODINFO(0x0478B8F8, SettingValueElement_get_ValueXml__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029627A0, void, set_ValueXml, (SettingValueElement * __this, XmlNode * value));
IL2CPP_REGISTER_METHODINFO(0x047522C0, SettingValueElement_set_ValueXml__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029627D0, void, DeserializeElement, (SettingValueElement * __this, XmlReader * reader, bool serializeCollectionKey));
IL2CPP_REGISTER_METHODINFO(0x0477E258, SettingValueElement_DeserializeElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962800, bool, IsModified, (SettingValueElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04719270, SettingValueElement_IsModified__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962830, void, Reset, (SettingValueElement * __this, ConfigurationElement * parentElement));
IL2CPP_REGISTER_METHODINFO(0x0476F1A8, SettingValueElement_Reset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962860, void, ResetModified, (SettingValueElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04724B48, SettingValueElement_ResetModified__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962890, bool, SerializeToXmlElement, (SettingValueElement * __this, XmlWriter * writer, String * elementName));
IL2CPP_REGISTER_METHODINFO(0x04742810, SettingValueElement_SerializeToXmlElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029628C0, void, Unmerge, (SettingValueElement * __this, ConfigurationElement * sourceElement, ConfigurationElement * parentElement, ConfigurationSaveMode__Enum saveMode));
IL2CPP_REGISTER_METHODINFO(0x04738BA8, SettingValueElement_Unmerge__MethodInfo);
}
