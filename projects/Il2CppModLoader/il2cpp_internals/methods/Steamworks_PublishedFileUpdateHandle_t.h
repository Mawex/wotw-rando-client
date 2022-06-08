#include <interception_macros.h>

namespace app::methods::Steamworks::PublishedFileUpdateHandle_t {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (PublishedFileUpdateHandle_t__Boxed * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x0012F1B0, String *, ToString, (PublishedFileUpdateHandle_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00207150, bool, Equals, (PublishedFileUpdateHandle_t__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (PublishedFileUpdateHandle_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (PublishedFileUpdateHandle_t x, PublishedFileUpdateHandle_t y));
IL2CPP_REGISTER_METHOD(0x027E1B80, bool, operator___, (PublishedFileUpdateHandle_t x, PublishedFileUpdateHandle_t y));
IL2CPP_REGISTER_METHOD(0x004C50A0, PublishedFileUpdateHandle_t, operator_, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator_, (PublishedFileUpdateHandle_t that));
IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals, (PublishedFileUpdateHandle_t__Boxed * __this, PublishedFileUpdateHandle_t other));
IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (PublishedFileUpdateHandle_t__Boxed * __this, PublishedFileUpdateHandle_t other));
IL2CPP_REGISTER_METHOD(0x027E1C30, void, __cctor, ());
}
