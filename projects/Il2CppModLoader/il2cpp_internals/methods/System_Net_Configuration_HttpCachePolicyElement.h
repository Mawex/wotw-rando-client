using namespace app;

namespace app::methods::System::Net::Configuration::HttpCachePolicyElement {
IL2CPP_REGISTER_METHOD(0x02019500, void, __ctor, (HttpCachePolicyElement * __this));
IL2CPP_REGISTER_METHODINFO(0x0470E678, HttpCachePolicyElement__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019530, TimeSpan, get_MaximumAge, (HttpCachePolicyElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04760818, HttpCachePolicyElement_get_MaximumAge__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019560, void, set_MaximumAge, (HttpCachePolicyElement * __this, TimeSpan value));
IL2CPP_REGISTER_METHODINFO(0x047106B0, HttpCachePolicyElement_set_MaximumAge__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019590, TimeSpan, get_MaximumStale, (HttpCachePolicyElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04753DF0, HttpCachePolicyElement_get_MaximumStale__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020195C0, void, set_MaximumStale, (HttpCachePolicyElement * __this, TimeSpan value));
IL2CPP_REGISTER_METHODINFO(0x04700A60, HttpCachePolicyElement_set_MaximumStale__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020195F0, TimeSpan, get_MinimumFresh, (HttpCachePolicyElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04756BA8, HttpCachePolicyElement_get_MinimumFresh__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019620, void, set_MinimumFresh, (HttpCachePolicyElement * __this, TimeSpan value));
IL2CPP_REGISTER_METHODINFO(0x0475E2C8, HttpCachePolicyElement_set_MinimumFresh__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019650, HttpRequestCacheLevel__Enum, get_PolicyLevel, (HttpCachePolicyElement * __this));
IL2CPP_REGISTER_METHODINFO(0x047114D8, HttpCachePolicyElement_get_PolicyLevel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019680, void, set_PolicyLevel, (HttpCachePolicyElement * __this, HttpRequestCacheLevel__Enum value));
IL2CPP_REGISTER_METHODINFO(0x0472EF68, HttpCachePolicyElement_set_PolicyLevel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020196B0, ConfigurationPropertyCollection *, get_Properties, (HttpCachePolicyElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04792A30, HttpCachePolicyElement_get_Properties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020196E0, void, DeserializeElement, (HttpCachePolicyElement * __this, XmlReader * reader, bool serializeCollectionKey));
IL2CPP_REGISTER_METHODINFO(0x0475C568, HttpCachePolicyElement_DeserializeElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02019710, void, Reset, (HttpCachePolicyElement * __this, ConfigurationElement * parentElement));
IL2CPP_REGISTER_METHODINFO(0x047272E0, HttpCachePolicyElement_Reset__MethodInfo);
}
