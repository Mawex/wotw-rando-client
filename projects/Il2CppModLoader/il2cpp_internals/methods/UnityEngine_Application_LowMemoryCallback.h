using namespace app;

namespace app::methods::UnityEngine::Application_LowMemoryCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Application_LowMemoryCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (Application_LowMemoryCallback * __this));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (Application_LowMemoryCallback * __this, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (Application_LowMemoryCallback * __this, IAsyncResult * result));
}
