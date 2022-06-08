#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::CookieManager {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (CookieManager * __this, Browser * browser));
IL2CPP_REGISTER_METHOD(0x01DD0FF0, IPromise_1_System_Collections_Generic_List_1_ *, GetCookies, (CookieManager * __this));
IL2CPP_REGISTER_METHODINFO(0x047317B0, CookieManager_GetCookies__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DD1540, void, CB_GetCookieFunc, (BrowserNative_NativeCookie * cookie));
IL2CPP_REGISTER_METHODINFO(0x04716318, CookieManager_CB_GetCookieFunc__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DD1A20, void, ClearAll, (CookieManager * __this));
IL2CPP_REGISTER_METHODINFO(0x0477B2C0, CookieManager_ClearAll__MethodInfo);
}
