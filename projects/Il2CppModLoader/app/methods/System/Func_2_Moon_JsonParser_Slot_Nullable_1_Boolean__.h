#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_2_Moon_JsonParser_Slot_Nullable_1_Boolean__ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_Boolean_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x04776B78, Func_2_Moon_JsonParser_Slot_Nullable_1_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02886DD0, app::Nullable_1_Boolean_, Invoke, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_Boolean_ * this_ptr, app::JsonParser_Slot arg))
    IL2CPP_REGISTER_METHOD(0x02887C70, app::IAsyncResult *, BeginInvoke, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_Boolean_ * this_ptr, app::JsonParser_Slot arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x024CEF10, app::Nullable_1_Boolean_, EndInvoke, (app::Func_2_Moon_JsonParser_Slot_Nullable_1_Boolean_ * this_ptr, app::IAsyncResult * result))
}
