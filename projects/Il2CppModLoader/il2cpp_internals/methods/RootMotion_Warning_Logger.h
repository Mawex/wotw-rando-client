using namespace app;

namespace app::methods::RootMotion::Warning_Logger {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Warning_Logger * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (Warning_Logger * __this, String * message));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (Warning_Logger * __this, String * message, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (Warning_Logger * __this, IAsyncResult * result));
}
