#include <interception_macros.h>

namespace app::methods::System::Configuration::ConfigurationElement {
IL2CPP_REGISTER_METHOD(0x031BB900, ConfigurationPropertyCollection *, get_Properties, (ConfigurationElement * __this));
IL2CPP_REGISTER_METHODINFO(0x047993A0, ConfigurationElement_get_Properties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BB930, void, DeserializeElement, (ConfigurationElement * __this, XmlReader * reader, bool serializeCollectionKey));
IL2CPP_REGISTER_METHODINFO(0x0475AA48, ConfigurationElement_DeserializeElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BB960, void, InitializeDefault, (ConfigurationElement * __this));
IL2CPP_REGISTER_METHODINFO(0x0477CCA0, ConfigurationElement_InitializeDefault__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BB990, bool, IsModified, (ConfigurationElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04718A10, ConfigurationElement_IsModified__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BB9C0, void, PostDeserialize, (ConfigurationElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04711D98, ConfigurationElement_PostDeserialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BB9F0, void, Reset, (ConfigurationElement * __this, ConfigurationElement * parentElement));
IL2CPP_REGISTER_METHODINFO(0x0471DC18, ConfigurationElement_Reset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BBA20, void, ResetModified, (ConfigurationElement * __this));
IL2CPP_REGISTER_METHODINFO(0x0477F360, ConfigurationElement_ResetModified__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BBA50, bool, SerializeToXmlElement, (ConfigurationElement * __this, XmlWriter * writer, String * elementName));
IL2CPP_REGISTER_METHODINFO(0x0475AF90, ConfigurationElement_SerializeToXmlElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BBA80, void, Unmerge, (ConfigurationElement * __this, ConfigurationElement * sourceElement, ConfigurationElement * parentElement, ConfigurationSaveMode__Enum saveMode));
IL2CPP_REGISTER_METHODINFO(0x0474D8F0, ConfigurationElement_Unmerge__MethodInfo);
}
