#pragma once
#include <interception_macros.h>

namespace app::methods::System::Predicate_1_UInt64_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_UInt64_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02A521E0, bool, Invoke, (app::Predicate_1_UInt64_ * this_ptr, uint64_t obj))
    IL2CPP_REGISTER_METHOD(0x02A52B70, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_UInt64_ * this_ptr, uint64_t obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_UInt64_ * this_ptr, app::IAsyncResult * result))
}
