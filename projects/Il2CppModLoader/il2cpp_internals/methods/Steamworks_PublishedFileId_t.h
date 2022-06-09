#include <interception_macros.h>

namespace app::methods::Steamworks::PublishedFileId_t {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (app::PublishedFileId_t__Boxed * this_ptr, uint64_t value));
IL2CPP_REGISTER_METHOD(0x0012F1B0, String *, ToString, (app::PublishedFileId_t__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00207140, bool, Equals_1, (app::PublishedFileId_t__Boxed * this_ptr, app::Object * other));
IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::PublishedFileId_t__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator____1, (app::PublishedFileId_t x, app::PublishedFileId_t y));
IL2CPP_REGISTER_METHOD(0x027E1A50, bool, operator____2, (app::PublishedFileId_t x, app::PublishedFileId_t y));
IL2CPP_REGISTER_METHOD(0x004C50A0, PublishedFileId_t, operator__1, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator__2, (app::PublishedFileId_t that));
IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::PublishedFileId_t__Boxed * this_ptr, app::PublishedFileId_t other));
IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::PublishedFileId_t__Boxed * this_ptr, app::PublishedFileId_t other));
IL2CPP_REGISTER_METHOD(0x027E1B00, void, __cctor, ());
}
