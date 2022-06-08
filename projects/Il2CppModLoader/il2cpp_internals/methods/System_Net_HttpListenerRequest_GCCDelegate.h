using namespace app;

namespace app::methods::System::Net::HttpListenerRequest_GCCDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (HttpListenerRequest_GCCDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D4A360, X509Certificate2 *, Invoke, (HttpListenerRequest_GCCDelegate * __this));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (HttpListenerRequest_GCCDelegate * __this, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, X509Certificate2 *, EndInvoke, (HttpListenerRequest_GCCDelegate * __this, IAsyncResult * result));
}
