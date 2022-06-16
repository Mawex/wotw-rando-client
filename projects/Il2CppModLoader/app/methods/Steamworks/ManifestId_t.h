#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::ManifestId_t {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::ManifestId_t__Boxed * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String *, ToString, (app::ManifestId_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00132C80, bool, Equals_1, (app::ManifestId_t__Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::ManifestId_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, (app::ManifestId_t x, app::ManifestId_t y))
    IL2CPP_REGISTER_METHOD(0x01600CA0, bool, op_Inequality, (app::ManifestId_t x, app::ManifestId_t y))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::ManifestId_t, op_Explicit_1, (uint64_t value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, op_Explicit_2, (app::ManifestId_t that))
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::ManifestId_t__Boxed * this_ptr, app::ManifestId_t other))
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::ManifestId_t__Boxed * this_ptr, app::ManifestId_t other))
    IL2CPP_REGISTER_METHOD(0x01600D50, void, cctor, ())
    bool operator == (app::ManifestId_t x, app::ManifestId_t y) {
        return op_Equality(x, y);
    }
    bool operator != (app::ManifestId_t x, app::ManifestId_t y) {
        return op_Inequality(x, y);
    }
}
