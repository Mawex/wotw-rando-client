using namespace app;

namespace app::methods::System::Net::Configuration::FtpCachePolicyElement {
IL2CPP_REGISTER_METHOD(0x020193E0, void, __ctor, (FtpCachePolicyElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04742AB0, FtpCachePolicyElement__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019410, RequestCacheLevel__Enum, get_PolicyLevel, (FtpCachePolicyElement * __this));
IL2CPP_REGISTER_METHODINFO(0x0475D0D8, FtpCachePolicyElement_get_PolicyLevel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019440, void, set_PolicyLevel, (FtpCachePolicyElement * __this, RequestCacheLevel__Enum value));
IL2CPP_REGISTER_METHODINFO(0x04757418, FtpCachePolicyElement_set_PolicyLevel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019470, ConfigurationPropertyCollection *, get_Properties, (FtpCachePolicyElement * __this));
IL2CPP_REGISTER_METHODINFO(0x0476AD08, FtpCachePolicyElement_get_Properties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020194A0, void, DeserializeElement, (FtpCachePolicyElement * __this, XmlReader * reader, bool serializeCollectionKey));
IL2CPP_REGISTER_METHODINFO(0x04704D50, FtpCachePolicyElement_DeserializeElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020194D0, void, Reset, (FtpCachePolicyElement * __this, ConfigurationElement * parentElement));
IL2CPP_REGISTER_METHODINFO(0x04704440, FtpCachePolicyElement_Reset__MethodInfo);
}
