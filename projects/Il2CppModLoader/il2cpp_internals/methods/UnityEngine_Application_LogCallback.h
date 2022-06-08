using namespace app;

namespace app::methods::UnityEngine::Application_LogCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Application_LogCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0241CE70, void, Invoke, (Application_LogCallback * __this, String * condition, String * stackTrace, LogType__Enum type));
IL2CPP_REGISTER_METHOD(0x0241D3E0, IAsyncResult *, BeginInvoke, (Application_LogCallback * __this, String * condition, String * stackTrace, LogType__Enum type, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (Application_LogCallback * __this, IAsyncResult * result));
}
