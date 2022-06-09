#include <interception_macros.h>

namespace app::methods::Steamworks::UGCFileWriteStreamHandle_t {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (app::UGCFileWriteStreamHandle_t__Boxed * this_ptr, uint64_t value));
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String *, ToString, (app::UGCFileWriteStreamHandle_t__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002008D0, bool, Equals_1, (app::UGCFileWriteStreamHandle_t__Boxed * this_ptr, app::Object * other));
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::UGCFileWriteStreamHandle_t__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator____1, (app::UGCFileWriteStreamHandle_t x, app::UGCFileWriteStreamHandle_t y));
    IL2CPP_REGISTER_METHOD(0x027A6800, bool, operator____2, (app::UGCFileWriteStreamHandle_t x, app::UGCFileWriteStreamHandle_t y));
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::UGCFileWriteStreamHandle_t, operator__1, (uint64_t value));
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator__2, (app::UGCFileWriteStreamHandle_t that));
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::UGCFileWriteStreamHandle_t__Boxed * this_ptr, app::UGCFileWriteStreamHandle_t other));
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::UGCFileWriteStreamHandle_t__Boxed * this_ptr, app::UGCFileWriteStreamHandle_t other));
    IL2CPP_REGISTER_METHOD(0x027A68B0, void, __cctor, ());
}
