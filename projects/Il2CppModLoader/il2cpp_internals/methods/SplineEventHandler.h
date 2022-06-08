#include <interception_macros.h>

namespace app::methods::SplineEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (SplineEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x009A25B0, void, Invoke, (SplineEventHandler * __this, String * action, Vector3 pos, Vector3 param));
IL2CPP_REGISTER_METHOD(0x009A2FD0, IAsyncResult *, BeginInvoke, (SplineEventHandler * __this, String * action, Vector3 pos, Vector3 param, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (SplineEventHandler * __this, IAsyncResult * result));
}
