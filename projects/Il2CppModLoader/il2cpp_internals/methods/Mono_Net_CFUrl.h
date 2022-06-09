#include <interception_macros.h>

namespace app::methods::Mono_Net::CFUrl {
IL2CPP_REGISTER_METHOD(0x02173690, void, __ctor, (app::CFUrl * this_ptr, app::void * handle, bool own));
IL2CPP_REGISTER_METHOD(0x0217A9A0, void *, CFURLCreateWithString, (app::void * allocator, app::void * str, app::void * base_u_r_l));
IL2CPP_REGISTER_METHOD(0x0217AA50, CFUrl *, Create, (app::String * absolute));
}
