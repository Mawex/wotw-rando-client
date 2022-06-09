#include <interception_macros.h>

namespace app::methods::Mono_Net::CFProxySettings {
    IL2CPP_REGISTER_METHOD(0x02179830, void, __cctor, ());
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::CFProxySettings * this_ptr, app::CFDictionary * settings));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::CFDictionary *, get_Dictionary, (app::CFProxySettings * this_ptr));
}
