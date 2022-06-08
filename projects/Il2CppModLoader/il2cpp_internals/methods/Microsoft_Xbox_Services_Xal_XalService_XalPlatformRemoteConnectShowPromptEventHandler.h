#include <interception_macros.h>

namespace app::methods::Microsoft::Xbox::Services::Xal::XalService_XalPlatformRemoteConnectShowPromptEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XalService_XalPlatformRemoteConnectShowPromptEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0143DE90, void, Invoke, (XalService_XalPlatformRemoteConnectShowPromptEventHandler * __this, void * context, void * userContext, void * operation, String * url, String * code));
IL2CPP_REGISTER_METHOD(0x0143E320, IAsyncResult *, BeginInvoke, (XalService_XalPlatformRemoteConnectShowPromptEventHandler * __this, void * context, void * userContext, void * operation, String * url, String * code, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XalService_XalPlatformRemoteConnectShowPromptEventHandler * __this, IAsyncResult * result));
}
