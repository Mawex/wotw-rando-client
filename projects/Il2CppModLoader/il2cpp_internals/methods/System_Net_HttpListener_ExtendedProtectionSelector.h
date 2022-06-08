using namespace app;

namespace app::methods::System::Net::HttpListener_ExtendedProtectionSelector {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (HttpListener_ExtendedProtectionSelector * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x014347E0, ExtendedProtectionPolicy *, Invoke, (HttpListener_ExtendedProtectionSelector * __this, HttpListenerRequest * request));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (HttpListener_ExtendedProtectionSelector * __this, HttpListenerRequest * request, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, ExtendedProtectionPolicy *, EndInvoke, (HttpListener_ExtendedProtectionSelector * __this, IAsyncResult * result));
}
