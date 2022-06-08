using namespace app;

namespace app::methods::UnityEngine::Application_ControllerStateChanged {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Application_ControllerStateChanged * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D19FD0, void, Invoke, (Application_ControllerStateChanged * __this, String * name, bool connected));
IL2CPP_REGISTER_METHOD(0x0241CDA0, IAsyncResult *, BeginInvoke, (Application_ControllerStateChanged * __this, String * name, bool connected, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (Application_ControllerStateChanged * __this, IAsyncResult * result));
}
