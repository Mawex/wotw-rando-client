using namespace app;

namespace app::methods::System::Net::Configuration::SocketElement {
IL2CPP_REGISTER_METHOD(0x01E99320, void, __ctor, (SocketElement * __this));
IL2CPP_REGISTER_METHODINFO(0x0471B4D8, SocketElement__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99350, bool, get_AlwaysUseCompletionPortsForAccept, (SocketElement * __this));
IL2CPP_REGISTER_METHODINFO(0x0471CA58, SocketElement_get_AlwaysUseCompletionPortsForAccept__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99380, void, set_AlwaysUseCompletionPortsForAccept, (SocketElement * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x04795128, SocketElement_set_AlwaysUseCompletionPortsForAccept__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E993B0, bool, get_AlwaysUseCompletionPortsForConnect, (SocketElement * __this));
IL2CPP_REGISTER_METHODINFO(0x047449C0, SocketElement_get_AlwaysUseCompletionPortsForConnect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E993E0, void, set_AlwaysUseCompletionPortsForConnect, (SocketElement * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x04739718, SocketElement_set_AlwaysUseCompletionPortsForConnect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99410, IPProtectionLevel__Enum, get_IPProtectionLevel, (SocketElement * __this));
IL2CPP_REGISTER_METHODINFO(0x0475E2D0, SocketElement_get_IPProtectionLevel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99440, void, set_IPProtectionLevel, (SocketElement * __this, IPProtectionLevel__Enum value));
IL2CPP_REGISTER_METHODINFO(0x047279D0, SocketElement_set_IPProtectionLevel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99470, ConfigurationPropertyCollection *, get_Properties, (SocketElement * __this));
IL2CPP_REGISTER_METHODINFO(0x04708008, SocketElement_get_Properties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E994A0, void, PostDeserialize, (SocketElement * __this));
IL2CPP_REGISTER_METHODINFO(0x0471A2F0, SocketElement_PostDeserialize__MethodInfo);
}
