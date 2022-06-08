#include <interception_macros.h>

namespace app::methods::Mono::SafeStringMarshal {
IL2CPP_REGISTER_METHOD(0x023CED90, void *, StringToUtf8, (String * str));
IL2CPP_REGISTER_METHOD(0x023CEE20, void, GFree, (void * ptr));
IL2CPP_REGISTER_METHOD(0x001EA8E0, void, __ctor, (SafeStringMarshal__Boxed * __this, String * str));
IL2CPP_REGISTER_METHOD(0x001EA8F0, void *, get_Value, (SafeStringMarshal__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EA900, void, Dispose, (SafeStringMarshal__Boxed * __this));
}
