#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Comparison_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02B840F0, int32_t, Invoke, (app::Comparison_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * this_ptr, app::XalHttpHeader x, app::XalHttpHeader y))
    IL2CPP_REGISTER_METHOD(0x02B8A8B0, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * this_ptr, app::XalHttpHeader x, app::XalHttpHeader y, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * this_ptr, app::IAsyncResult * result))
}
