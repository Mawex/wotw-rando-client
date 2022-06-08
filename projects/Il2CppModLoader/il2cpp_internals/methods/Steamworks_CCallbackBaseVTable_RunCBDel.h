#include <interception_macros.h>

namespace app::methods::Steamworks::CCallbackBaseVTable_RunCBDel {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CCallbackBaseVTable_RunCBDel * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x012E7480, void, Invoke, (CCallbackBaseVTable_RunCBDel * __this, void * thisptr, void * pvParam));
IL2CPP_REGISTER_METHOD(0x015F7940, IAsyncResult *, BeginInvoke, (CCallbackBaseVTable_RunCBDel * __this, void * thisptr, void * pvParam, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (CCallbackBaseVTable_RunCBDel * __this, IAsyncResult * result));
}
