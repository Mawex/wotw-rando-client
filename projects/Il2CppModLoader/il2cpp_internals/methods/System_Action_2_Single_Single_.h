#include <interception_macros.h>

namespace app::methods::System::Action_2_Single_Single_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_2_Single_Single_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHODINFO(0x0470CC88, Action_2_Single_Single___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C13FD0, void, Invoke, (app::Action_2_Single_Single_ * this_ptr, float arg1, float arg2));
IL2CPP_REGISTER_METHODINFO(0x04709138, Action_2_Single_Single__Invoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C14340, IAsyncResult *, BeginInvoke, (app::Action_2_Single_Single_ * this_ptr, float arg1, float arg2, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_2_Single_Single_ * this_ptr, app::IAsyncResult * result));
}
