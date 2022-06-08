#include <interception_macros.h>

namespace app::methods::Mono::Net::CFUrl {
IL2CPP_REGISTER_METHOD(0x02173690, void, __ctor, (CFUrl * __this, void * handle, bool own));
IL2CPP_REGISTER_METHOD(0x0217A9A0, void *, CFURLCreateWithString, (void * allocator, void * str, void * baseURL));
IL2CPP_REGISTER_METHOD(0x0217AA50, CFUrl *, Create, (String * absolute));
}
