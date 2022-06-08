#include <interception_macros.h>

namespace app::methods::Steamworks::ManifestId_t {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (ManifestId_t__Boxed * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x0012F1B0, String *, ToString, (ManifestId_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00132C80, bool, Equals, (ManifestId_t__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (ManifestId_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (ManifestId_t x, ManifestId_t y));
IL2CPP_REGISTER_METHOD(0x01600CA0, bool, operator___, (ManifestId_t x, ManifestId_t y));
IL2CPP_REGISTER_METHOD(0x004C50A0, ManifestId_t, operator_, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator_, (ManifestId_t that));
IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals, (ManifestId_t__Boxed * __this, ManifestId_t other));
IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (ManifestId_t__Boxed * __this, ManifestId_t other));
IL2CPP_REGISTER_METHOD(0x01600D50, void, __cctor, ());
}
