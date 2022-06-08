#include <interception_macros.h>

namespace app::methods::System::Action_1_Single_ {
IL2CPP_REGISTER_METHOD(0x02A05520, void, Invoke, (Action_1_Single_ * __this, float obj));
IL2CPP_REGISTER_METHODINFO(0x0475D598, Action_1_Single__Invoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Action_1_Single_ * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHODINFO(0x0477D0B0, Action_1_Single___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C07D60, IAsyncResult *, BeginInvoke, (Action_1_Single_ * __this, float obj, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (Action_1_Single_ * __this, IAsyncResult * result));
}
