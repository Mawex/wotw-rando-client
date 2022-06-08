using namespace app;

namespace app::methods::System::Threading::ParameterizedThreadStart {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ParameterizedThreadStart * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (ParameterizedThreadStart * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (ParameterizedThreadStart * __this, Object * obj, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (ParameterizedThreadStart * __this, IAsyncResult * result));
}
