using namespace app;

namespace app::methods::System::Net::SocketAddress {
IL2CPP_REGISTER_METHOD(0x01BDB850, AddressFamily__Enum, get_Family, (SocketAddress * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Size, (SocketAddress * __this));
IL2CPP_REGISTER_METHOD(0x01BDB8C0, uint8_t, get_Item, (SocketAddress * __this, int32_t offset));
IL2CPP_REGISTER_METHODINFO(0x0476EE50, SocketAddress_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BDB9A0, void, set_Item, (SocketAddress * __this, int32_t offset, uint8_t value));
IL2CPP_REGISTER_METHODINFO(0x04790830, SocketAddress_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BDBAB0, void, __ctor, (SocketAddress * __this, AddressFamily__Enum family));
IL2CPP_REGISTER_METHOD(0x01BDBAC0, void, __ctor, (SocketAddress * __this, AddressFamily__Enum family, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x047588E8, SocketAddress__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BDBC00, void, __ctor, (SocketAddress * __this, IPAddress * ipAddress));
IL2CPP_REGISTER_METHOD(0x01BDBFF0, void, __ctor, (SocketAddress * __this, IPAddress * ipaddress, int32_t port));
IL2CPP_REGISTER_METHOD(0x01BDC070, IPAddress *, GetIPAddress, (SocketAddress * __this));
IL2CPP_REGISTER_METHODINFO(0x04755910, SocketAddress_GetIPAddress__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BDC5D0, IPEndPoint *, GetIPEndPoint, (SocketAddress * __this));
IL2CPP_REGISTER_METHOD(0x01BDC7A0, void, CopyAddressSizeIntoBuffer, (SocketAddress * __this));
IL2CPP_REGISTER_METHOD(0x01BDC8A0, int32_t, GetAddressSizeOffset, (SocketAddress * __this));
IL2CPP_REGISTER_METHOD(0x01BDC8C0, void, SetSize, (SocketAddress * __this, void * ptr));
IL2CPP_REGISTER_METHOD(0x01BDC8D0, bool, Equals, (SocketAddress * __this, Object * comparand));
IL2CPP_REGISTER_METHOD(0x01BDC9F0, int32_t, GetHashCode, (SocketAddress * __this));
IL2CPP_REGISTER_METHOD(0x01BDCBB0, String *, ToString, (SocketAddress * __this));
}
