#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Comparison_1_Moon_UberStateVisualization_UberStateGroupData_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_Moon_UberStateVisualization_UberStateGroupData_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x0477FCC0, Comparison_1_Moon_UberStateVisualization_UberStateGroupData___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02B8DDC0, int32_t, Invoke, (app::Comparison_1_Moon_UberStateVisualization_UberStateGroupData_ * this_ptr, app::UberStateGroupData x, app::UberStateGroupData y))
    IL2CPP_REGISTER_METHOD(0x02B8E860, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_Moon_UberStateVisualization_UberStateGroupData_ * this_ptr, app::UberStateGroupData x, app::UberStateGroupData y, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Moon_UberStateVisualization_UberStateGroupData_ * this_ptr, app::IAsyncResult * result))
}
