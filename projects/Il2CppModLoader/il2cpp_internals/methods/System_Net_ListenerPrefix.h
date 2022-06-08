using namespace app;

namespace app::methods::System::Net::ListenerPrefix {
IL2CPP_REGISTER_METHOD(0x01E6D7F0, void, __ctor, (ListenerPrefix * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, ToString, (ListenerPrefix * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IPAddress__Array *, get_Addresses, (ListenerPrefix * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Addresses, (ListenerPrefix * __this, IPAddress__Array * value));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_Secure, (ListenerPrefix * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Host, (ListenerPrefix * __this));
IL2CPP_REGISTER_METHOD(0x01E6D800, int32_t, get_Port, (ListenerPrefix * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Path, (ListenerPrefix * __this));
IL2CPP_REGISTER_METHOD(0x01E6D810, bool, Equals, (ListenerPrefix * __this, Object * o));
IL2CPP_REGISTER_METHOD(0x0150BDE0, int32_t, GetHashCode, (ListenerPrefix * __this));
IL2CPP_REGISTER_METHOD(0x01E6D900, void, Parse, (ListenerPrefix * __this, String * uri));
IL2CPP_REGISTER_METHODINFO(0x0475E238, ListenerPrefix_Parse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E6DD30, void, CheckUri, (String * uri));
IL2CPP_REGISTER_METHODINFO(0x04710AB8, ListenerPrefix_CheckUri__MethodInfo);
}
