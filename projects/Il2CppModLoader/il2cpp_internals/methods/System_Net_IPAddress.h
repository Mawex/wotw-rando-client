#include <interception_macros.h>

namespace app::methods::System::Net::IPAddress {
IL2CPP_REGISTER_METHOD(0x01E66070, void, __ctor, (IPAddress * __this, int64_t newAddress));
IL2CPP_REGISTER_METHODINFO(0x0472B2B8, IPAddress__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E66150, void, __ctor, (IPAddress * __this, Byte__Array * address, int64_t scopeid));
IL2CPP_REGISTER_METHODINFO(0x04768550, IPAddress__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E66380, void, __ctor, (IPAddress * __this, UInt16__Array * address, uint32_t scopeid));
IL2CPP_REGISTER_METHOD(0x01E66430, void, __ctor, (IPAddress * __this, Byte__Array * address));
IL2CPP_REGISTER_METHODINFO(0x04759850, IPAddress__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E66680, void, __ctor, (IPAddress * __this, int32_t newAddress));
IL2CPP_REGISTER_METHOD(0x01E66720, bool, TryParse, (String * ipString, IPAddress * * address));
IL2CPP_REGISTER_METHOD(0x01E667E0, IPAddress *, Parse, (String * ipString));
IL2CPP_REGISTER_METHOD(0x01E66880, IPAddress *, InternalParse, (String * ipString, bool tryParse));
IL2CPP_REGISTER_METHODINFO(0x04786DD0, IPAddress_InternalParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E66E60, int64_t, get_Address, (IPAddress * __this));
IL2CPP_REGISTER_METHODINFO(0x04731A78, IPAddress_get_Address__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E66F10, void, set_Address, (IPAddress * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04702840, IPAddress_set_Address__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E66FE0, Byte__Array *, GetAddressBytes, (IPAddress * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, AddressFamily__Enum, get_AddressFamily, (IPAddress * __this));
IL2CPP_REGISTER_METHOD(0x01E67200, int64_t, get_ScopeId, (IPAddress * __this));
IL2CPP_REGISTER_METHODINFO(0x0476BC00, IPAddress_get_ScopeId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E672B0, void, set_ScopeId, (IPAddress * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04719B58, IPAddress_set_ScopeId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E673B0, String *, ToString, (IPAddress * __this));
IL2CPP_REGISTER_METHOD(0x01E675D0, int64_t, HostToNetworkOrder, (int64_t host));
IL2CPP_REGISTER_METHOD(0x01E67690, int32_t, HostToNetworkOrder, (int32_t host));
IL2CPP_REGISTER_METHOD(0x01E67760, int16_t, HostToNetworkOrder, (int16_t host));
IL2CPP_REGISTER_METHOD(0x01E67770, int64_t, NetworkToHostOrder, (int64_t network));
IL2CPP_REGISTER_METHOD(0x01E678B0, int32_t, NetworkToHostOrder, (int32_t network));
IL2CPP_REGISTER_METHOD(0x01E67950, int16_t, NetworkToHostOrder, (int16_t network));
IL2CPP_REGISTER_METHOD(0x01E67A00, bool, IsLoopback, (IPAddress * address));
IL2CPP_REGISTER_METHODINFO(0x0475D060, IPAddress_IsLoopback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E67B50, bool, get_IsBroadcast, (IPAddress * __this));
IL2CPP_REGISTER_METHOD(0x01E67C20, bool, get_IsIPv6Multicast, (IPAddress * __this));
IL2CPP_REGISTER_METHOD(0x01E67C70, bool, get_IsIPv6LinkLocal, (IPAddress * __this));
IL2CPP_REGISTER_METHOD(0x01E67CD0, bool, get_IsIPv6SiteLocal, (IPAddress * __this));
IL2CPP_REGISTER_METHOD(0x01E67D30, bool, get_IsIPv6Teredo, (IPAddress * __this));
IL2CPP_REGISTER_METHOD(0x01E67DB0, bool, get_IsIPv4MappedToIPv6, (IPAddress * __this));
IL2CPP_REGISTER_METHOD(0x01E67E40, bool, Equals, (IPAddress * __this, Object * comparandObj, bool compareScopeId));
IL2CPP_REGISTER_METHOD(0x01E67FB0, bool, Equals, (IPAddress * __this, Object * comparand));
IL2CPP_REGISTER_METHOD(0x01E67FC0, int32_t, GetHashCode, (IPAddress * __this));
IL2CPP_REGISTER_METHOD(0x01E680C0, IPAddress *, Snapshot, (IPAddress * __this));
IL2CPP_REGISTER_METHODINFO(0x0474B760, IPAddress_Snapshot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E68340, IPAddress *, MapToIPv6, (IPAddress * __this));
IL2CPP_REGISTER_METHOD(0x01E68570, IPAddress *, MapToIPv4, (IPAddress * __this));
IL2CPP_REGISTER_METHOD(0x01E68760, void, __cctor, ());
}
