#include <interception_macros.h>

namespace app::methods::Microsoft::Xbox::Services::Xal::WebShowUrlEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (WebShowUrlEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01435330, void, Invoke, (WebShowUrlEventHandler * __this, void * operationId, String * startUrl, String * finalUrl, bool suppressUi));
IL2CPP_REGISTER_METHOD(0x01435740, IAsyncResult *, BeginInvoke, (WebShowUrlEventHandler * __this, void * operationId, String * startUrl, String * finalUrl, bool suppressUi, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (WebShowUrlEventHandler * __this, IAsyncResult * result));
}
