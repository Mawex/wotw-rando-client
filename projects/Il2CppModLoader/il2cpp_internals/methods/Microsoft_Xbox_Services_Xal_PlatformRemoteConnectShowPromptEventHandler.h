using namespace app;

namespace app::methods::Microsoft::Xbox::Services::Xal::PlatformRemoteConnectShowPromptEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (PlatformRemoteConnectShowPromptEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01434270, void, Invoke, (PlatformRemoteConnectShowPromptEventHandler * __this, String * url, String * code, CancellationTokenSource * cancellation));
IL2CPP_REGISTER_METHOD(0x00DC7DB0, IAsyncResult *, BeginInvoke, (PlatformRemoteConnectShowPromptEventHandler * __this, String * url, String * code, CancellationTokenSource * cancellation, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (PlatformRemoteConnectShowPromptEventHandler * __this, IAsyncResult * result));
}
