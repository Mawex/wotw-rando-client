#include <interception_macros.h>

namespace app::methods::Steamworks::HAuthTicket {
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (HAuthTicket__Boxed * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x0012ECC0, String *, ToString, (HAuthTicket__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00130EB0, bool, Equals, (HAuthTicket__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (HAuthTicket__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator___, (HAuthTicket x, HAuthTicket y));
IL2CPP_REGISTER_METHOD(0x015FB770, bool, operator___, (HAuthTicket x, HAuthTicket y));
IL2CPP_REGISTER_METHOD(0x006CE970, HAuthTicket, operator_, (uint32_t value));
IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, operator_, (HAuthTicket that));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals, (HAuthTicket__Boxed * __this, HAuthTicket other));
IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (HAuthTicket__Boxed * __this, HAuthTicket other));
IL2CPP_REGISTER_METHOD(0x015FB810, void, __cctor, ());
}
