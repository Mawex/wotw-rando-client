#pragma once
#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::NonRandomizedStringEqualityComparer {
    IL2CPP_REGISTER_METHOD(0x02022840, bool, Equals, (app::NonRandomizedStringEqualityComparer * this_ptr, app::String * x, app::String * y))
    IL2CPP_REGISTER_METHOD(0x02022880, int32_t, GetHashCode, (app::NonRandomizedStringEqualityComparer * this_ptr, app::String * obj))
    IL2CPP_REGISTER_METHOD(0x020228D0, void, ctor, (app::NonRandomizedStringEqualityComparer * this_ptr))
}
