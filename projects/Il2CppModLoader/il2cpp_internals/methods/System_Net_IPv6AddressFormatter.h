using namespace app;

namespace app::methods::System::Net::IPv6AddressFormatter {
IL2CPP_REGISTER_METHOD(0x00110270, void, __ctor, (IPv6AddressFormatter__Boxed * __this, UInt16__Array * addr, int64_t scopeId));
IL2CPP_REGISTER_METHOD(0x01E69DB0, uint16_t, SwapUShort, (uint16_t number));
IL2CPP_REGISTER_METHOD(0x001D7240, uint32_t, AsIPv4Int, (IPv6AddressFormatter__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D7250, bool, IsIPv4Compatible, (IPv6AddressFormatter__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D7260, bool, IsIPv4Mapped, (IPv6AddressFormatter__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D7270, String *, ToString, (IPv6AddressFormatter__Boxed * __this));
}
