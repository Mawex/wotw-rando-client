#pragma once
#include <interception_macros.h>

namespace app::methods::System::Action_1_Moon_TimeSlicer_SliceExecutionStats_ {
    IL2CPP_REGISTER_METHOD(0x029FFDB0, void, Invoke, (app::Action_1_Moon_TimeSlicer_SliceExecutionStats_ * this_ptr, app::SliceExecutionStats obj))
    IL2CPP_REGISTER_METHODINFO(0x04705D70, Action_1_Moon_TimeSlicer_SliceExecutionStats__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Moon_TimeSlicer_SliceExecutionStats_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x0473D358, Action_1_Moon_TimeSlicer_SliceExecutionStats___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A01000, app::IAsyncResult *, BeginInvoke, (app::Action_1_Moon_TimeSlicer_SliceExecutionStats_ * this_ptr, app::SliceExecutionStats obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Moon_TimeSlicer_SliceExecutionStats_ * this_ptr, app::IAsyncResult * result))
}
