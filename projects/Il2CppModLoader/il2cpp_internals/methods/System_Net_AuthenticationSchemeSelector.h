using namespace app;

namespace app::methods::System::Net::AuthenticationSchemeSelector {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AuthenticationSchemeSelector * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x020105B0, AuthenticationSchemes__Enum, Invoke, (AuthenticationSchemeSelector * __this, HttpListenerRequest * httpRequest));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (AuthenticationSchemeSelector * __this, HttpListenerRequest * httpRequest, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, AuthenticationSchemes__Enum, EndInvoke, (AuthenticationSchemeSelector * __this, IAsyncResult * result));
}
