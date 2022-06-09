#include <interception_macros.h>

namespace app::methods::System_Net_Cache::RequestCacheBinding {
IL2CPP_REGISTER_METHOD(0x00522850, void, __ctor, (app::RequestCacheBinding * this_ptr, app::RequestCache * request_cache, app::RequestCacheValidator * cache_validator, app::RequestCachePolicy * policy));
IL2CPP_REGISTER_METHOD(0x002FA280, RequestCache *, get_Cache, (app::RequestCacheBinding * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, RequestCacheValidator *, get_Validator, (app::RequestCacheBinding * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, RequestCachePolicy *, get_Policy, (app::RequestCacheBinding * this_ptr));
}
