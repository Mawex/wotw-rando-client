using namespace app;

namespace app::methods::Mono::Net::CFNetwork_CFProxyAutoConfigurationResultCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CFNetwork_CFProxyAutoConfigurationResultCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0143DA20, void, Invoke, (CFNetwork_CFProxyAutoConfigurationResultCallback * __this, void * client, void * proxyList, void * error));
IL2CPP_REGISTER_METHOD(0x02176C40, IAsyncResult *, BeginInvoke, (CFNetwork_CFProxyAutoConfigurationResultCallback * __this, void * client, void * proxyList, void * error, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (CFNetwork_CFProxyAutoConfigurationResultCallback * __this, IAsyncResult * result));
}
