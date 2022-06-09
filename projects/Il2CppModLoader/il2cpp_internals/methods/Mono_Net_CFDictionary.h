#include <interception_macros.h>

namespace app::methods::Mono_Net::CFDictionary {
IL2CPP_REGISTER_METHOD(0x02173B60, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x02173690, void, __ctor, (app::CFDictionary * this_ptr, app::void * handle, bool own));
IL2CPP_REGISTER_METHOD(0x02173CA0, void *, CFDictionaryGetValue, (app::void * handle, app::void * key));
IL2CPP_REGISTER_METHOD(0x02173D50, void *, GetValue, (app::CFDictionary * this_ptr, app::void * key));
IL2CPP_REGISTER_METHOD(0x02173D50, void *, get_Item, (app::CFDictionary * this_ptr, app::void * key));
}
