#include <interception_macros.h>

namespace app::methods::Microsoft_Xbox_Services_Xal::PlatformRemoteConnectShowPromptEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::PlatformRemoteConnectShowPromptEventHandler * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01434270, void, Invoke, (app::PlatformRemoteConnectShowPromptEventHandler * this_ptr, app::String * url, app::String * code, app::CancellationTokenSource * cancellation));
    IL2CPP_REGISTER_METHOD(0x00DC7DB0, app::IAsyncResult *, BeginInvoke, (app::PlatformRemoteConnectShowPromptEventHandler * this_ptr, app::String * url, app::String * code, app::CancellationTokenSource * cancellation, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::PlatformRemoteConnectShowPromptEventHandler * this_ptr, app::IAsyncResult * result));
}
