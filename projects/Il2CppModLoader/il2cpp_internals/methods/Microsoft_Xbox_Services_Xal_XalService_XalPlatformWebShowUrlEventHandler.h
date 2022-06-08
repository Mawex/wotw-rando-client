using namespace app;

namespace app::methods::Microsoft::Xbox::Services::Xal::XalService_XalPlatformWebShowUrlEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XalService_XalPlatformWebShowUrlEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0143EC80, void, Invoke, (XalService_XalPlatformWebShowUrlEventHandler * __this, void * context, void * userContext, void * operation, String * startUrl, String * finalUrl, bool suppressUi));
IL2CPP_REGISTER_METHOD(0x0143F1D0, IAsyncResult *, BeginInvoke, (XalService_XalPlatformWebShowUrlEventHandler * __this, void * context, void * userContext, void * operation, String * startUrl, String * finalUrl, bool suppressUi, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XalService_XalPlatformWebShowUrlEventHandler * __this, IAsyncResult * result));
}
