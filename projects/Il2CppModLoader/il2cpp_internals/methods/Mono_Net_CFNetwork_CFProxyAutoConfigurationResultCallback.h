#include <interception_macros.h>

namespace app::methods::Mono_Net::CFNetwork_CFProxyAutoConfigurationResultCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::CFNetwork_CFProxyAutoConfigurationResultCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x0143DA20, void, Invoke, (app::CFNetwork_CFProxyAutoConfigurationResultCallback * this_ptr, app::void * client, app::void * proxy_list, app::void * error));
IL2CPP_REGISTER_METHOD(0x02176C40, IAsyncResult *, BeginInvoke, (app::CFNetwork_CFProxyAutoConfigurationResultCallback * this_ptr, app::void * client, app::void * proxy_list, app::void * error, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::CFNetwork_CFProxyAutoConfigurationResultCallback * this_ptr, app::IAsyncResult * result));
}
