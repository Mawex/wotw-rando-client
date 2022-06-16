#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::HServerListRequest {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::HServerListRequest__Boxed * this_ptr, void * value))
    IL2CPP_REGISTER_METHOD(0x00131090, app::String *, ToString, (app::HServerListRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001310C0, bool, Equals_1, (app::HServerListRequest__Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::HServerListRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, (app::HServerListRequest x, app::HServerListRequest y))
    IL2CPP_REGISTER_METHOD(0x015FB9B0, bool, op_Inequality, (app::HServerListRequest x, app::HServerListRequest y))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::HServerListRequest, op_Explicit_1, (void * value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, void *, op_Explicit_2, (app::HServerListRequest that))
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::HServerListRequest__Boxed * this_ptr, app::HServerListRequest other))
    IL2CPP_REGISTER_METHOD(0x015FBA60, void, cctor, ())
    bool operator == (app::HServerListRequest x, app::HServerListRequest y) {
        return op_Equality(x, y);
    }
    bool operator != (app::HServerListRequest x, app::HServerListRequest y) {
        return op_Inequality(x, y);
    }
}
