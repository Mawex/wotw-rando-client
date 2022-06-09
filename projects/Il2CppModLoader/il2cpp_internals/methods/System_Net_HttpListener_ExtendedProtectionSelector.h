#include <interception_macros.h>

namespace app::methods::System_Net::HttpListener_ExtendedProtectionSelector {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::HttpListener_ExtendedProtectionSelector * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x014347E0, ExtendedProtectionPolicy *, Invoke, (app::HttpListener_ExtendedProtectionSelector * this_ptr, app::HttpListenerRequest * request));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::HttpListener_ExtendedProtectionSelector * this_ptr, app::HttpListenerRequest * request, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, ExtendedProtectionPolicy *, EndInvoke, (app::HttpListener_ExtendedProtectionSelector * this_ptr, app::IAsyncResult * result));
}
