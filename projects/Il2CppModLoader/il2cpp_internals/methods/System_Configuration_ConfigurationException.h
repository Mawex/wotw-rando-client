using namespace app;

namespace app::methods::System::Configuration::ConfigurationException {
IL2CPP_REGISTER_METHOD(0x02961750, void, __ctor, (ConfigurationException * __this));
IL2CPP_REGISTER_METHODINFO(0x04708660, ConfigurationException__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961780, void, __ctor, (ConfigurationException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0472EAA8, ConfigurationException__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029617B0, void, __ctor, (ConfigurationException * __this, String * message));
IL2CPP_REGISTER_METHODINFO(0x04742FA8, ConfigurationException__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029617E0, void, __ctor, (ConfigurationException * __this, String * message, Exception * inner));
IL2CPP_REGISTER_METHODINFO(0x04768CB8, ConfigurationException__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961810, void, __ctor, (ConfigurationException * __this, String * message, Exception * inner, String * filename, int32_t line));
IL2CPP_REGISTER_METHODINFO(0x04794680, ConfigurationException__ctor_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961840, void, __ctor, (ConfigurationException * __this, String * message, Exception * inner, XmlNode * node));
IL2CPP_REGISTER_METHODINFO(0x047987E8, ConfigurationException__ctor_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961870, void, __ctor, (ConfigurationException * __this, String * message, String * filename, int32_t line));
IL2CPP_REGISTER_METHODINFO(0x04781238, ConfigurationException__ctor_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029618A0, void, __ctor, (ConfigurationException * __this, String * message, XmlNode * node));
IL2CPP_REGISTER_METHODINFO(0x0473E338, ConfigurationException__ctor_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029618D0, String *, get_BareMessage, (ConfigurationException * __this));
IL2CPP_REGISTER_METHODINFO(0x047448E8, ConfigurationException_get_BareMessage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961900, String *, get_Filename, (ConfigurationException * __this));
IL2CPP_REGISTER_METHODINFO(0x0471B388, ConfigurationException_get_Filename__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961930, int32_t, get_Line, (ConfigurationException * __this));
IL2CPP_REGISTER_METHODINFO(0x047364A0, ConfigurationException_get_Line__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961960, String *, GetXmlNodeFilename, (XmlNode * node));
IL2CPP_REGISTER_METHODINFO(0x047187A8, ConfigurationException_GetXmlNodeFilename__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961990, int32_t, GetXmlNodeLineNumber, (XmlNode * node));
IL2CPP_REGISTER_METHODINFO(0x04738B60, ConfigurationException_GetXmlNodeLineNumber__MethodInfo);
}
