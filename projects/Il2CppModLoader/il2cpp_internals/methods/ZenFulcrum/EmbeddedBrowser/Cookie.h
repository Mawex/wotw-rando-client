#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::Cookie {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Init, ());
    IL2CPP_REGISTER_METHOD(0x01DCFD30, void, __ctor_1, (app::Cookie_1 * this_ptr, app::CookieManager * cookies));
    IL2CPP_REGISTER_METHOD(0x01DCFDE0, void, __ctor_2, (app::Cookie_1 * this_ptr, app::CookieManager * cookies, app::BrowserNative_NativeCookie * cookie));
    IL2CPP_REGISTER_METHOD(0x01DCFED0, void, Delete, (app::Cookie_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DCFFD0, void, Update, (app::Cookie_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DD02B0, void, Copy_1, (app::BrowserNative_NativeCookie * src, app::Cookie_1 * dest));
    IL2CPP_REGISTER_METHOD(0x01DD0550, void, Copy_2, (app::Cookie_1 * src, app::BrowserNative_NativeCookie * dest));
    IL2CPP_REGISTER_METHOD(0x01DD0870, void, __cctor, ());
}
