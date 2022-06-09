#include <interception_macros.h>

namespace app::methods::Steamworks::CCallbackBaseVTable_RunCBDel {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::CCallbackBaseVTable_RunCBDel * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x012E7480, void, Invoke, (app::CCallbackBaseVTable_RunCBDel * this_ptr, app::void * thisptr, app::void * pv_param));
IL2CPP_REGISTER_METHOD(0x015F7940, IAsyncResult *, BeginInvoke, (app::CCallbackBaseVTable_RunCBDel * this_ptr, app::void * thisptr, app::void * pv_param, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::CCallbackBaseVTable_RunCBDel * this_ptr, app::IAsyncResult * result));
}
