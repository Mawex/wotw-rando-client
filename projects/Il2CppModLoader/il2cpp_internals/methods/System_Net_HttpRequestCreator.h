#include <interception_macros.h>

namespace app::methods::System_Net::HttpRequestCreator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::HttpRequestCreator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E58D60, app::WebRequest *, Create, (app::HttpRequestCreator * this_ptr, app::Uri * uri));
}
