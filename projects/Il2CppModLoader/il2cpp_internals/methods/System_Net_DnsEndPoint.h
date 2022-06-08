#include <interception_macros.h>

namespace app::methods::System::Net::DnsEndPoint {
IL2CPP_REGISTER_METHOD(0x01EB37F0, void, __ctor, (DnsEndPoint * __this, String * host, int32_t port));
IL2CPP_REGISTER_METHOD(0x01EB3810, void, __ctor, (DnsEndPoint * __this, String * host, int32_t port, AddressFamily__Enum addressFamily));
IL2CPP_REGISTER_METHODINFO(0x04768338, DnsEndPoint__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB3A10, bool, Equals, (DnsEndPoint * __this, Object * comparand));
IL2CPP_REGISTER_METHOD(0x01EB3B40, int32_t, GetHashCode, (DnsEndPoint * __this));
IL2CPP_REGISTER_METHOD(0x01EB3C20, String *, ToString, (DnsEndPoint * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Host, (DnsEndPoint * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, AddressFamily__Enum, get_AddressFamily, (DnsEndPoint * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Port, (DnsEndPoint * __this));
}
