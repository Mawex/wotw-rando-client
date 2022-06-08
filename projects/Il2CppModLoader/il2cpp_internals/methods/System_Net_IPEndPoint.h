using namespace app;

namespace app::methods::System::Net::IPEndPoint {
IL2CPP_REGISTER_METHOD(0x004F0AC0, AddressFamily__Enum, get_AddressFamily, (IPEndPoint * __this));
IL2CPP_REGISTER_METHOD(0x01E68D80, void, __ctor, (IPEndPoint * __this, int64_t address, int32_t port));
IL2CPP_REGISTER_METHODINFO(0x04700A70, IPEndPoint__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E68F50, void, __ctor, (IPEndPoint * __this, IPAddress * address, int32_t port));
IL2CPP_REGISTER_METHODINFO(0x04787918, IPEndPoint__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, IPAddress *, get_Address, (IPEndPoint * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Address, (IPEndPoint * __this, IPAddress * value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Port, (IPEndPoint * __this));
IL2CPP_REGISTER_METHOD(0x01E69070, void, set_Port, (IPEndPoint * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04724408, IPEndPoint_set_Port__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E69150, String *, ToString, (IPEndPoint * __this));
IL2CPP_REGISTER_METHOD(0x01E69290, SocketAddress *, Serialize, (IPEndPoint * __this));
IL2CPP_REGISTER_METHOD(0x01E69440, EndPoint *, Create, (IPEndPoint * __this, SocketAddress * socketAddress));
IL2CPP_REGISTER_METHODINFO(0x04794D78, IPEndPoint_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E697C0, bool, Equals, (IPEndPoint * __this, Object * comparand));
IL2CPP_REGISTER_METHOD(0x01E69980, int32_t, GetHashCode, (IPEndPoint * __this));
IL2CPP_REGISTER_METHOD(0x01E699C0, IPEndPoint *, Snapshot, (IPEndPoint * __this));
IL2CPP_REGISTER_METHOD(0x01E69B30, void, __cctor, (MethodInfo * method));
}
