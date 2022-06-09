#include <interception_macros.h>

namespace app::methods::KuLogicCycle_IsAllowedDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::KuLogicCycle_IsAllowedDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x008A18F0, bool, Invoke, (app::KuLogicCycle_IsAllowedDelegate * this_ptr));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (app::KuLogicCycle_IsAllowedDelegate * this_ptr, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::KuLogicCycle_IsAllowedDelegate * this_ptr, app::IAsyncResult * result));
}
