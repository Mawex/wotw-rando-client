#pragma once
#include <interception_macros.h>

namespace app::methods::System::Comparison_1_Moon_Timeline_Reaction_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_Moon_Timeline_Reaction_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02B86EB0, int32_t, Invoke, (app::Comparison_1_Moon_Timeline_Reaction_ * this_ptr, app::Reaction x, app::Reaction y))
    IL2CPP_REGISTER_METHOD(0x02B8C7E0, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_Moon_Timeline_Reaction_ * this_ptr, app::Reaction x, app::Reaction y, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Moon_Timeline_Reaction_ * this_ptr, app::IAsyncResult * result))
}
