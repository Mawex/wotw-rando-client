#include <interception_macros.h>

namespace app::methods::Mono_Net::CFString {
IL2CPP_REGISTER_METHOD(0x02173690, void, __ctor, (app::CFString * this_ptr, app::void * handle, bool own));
IL2CPP_REGISTER_METHOD(0x0217A1D0, void *, CFStringCreateWithCharacters, (app::void * alloc, app::void * chars, app::void * length));
IL2CPP_REGISTER_METHOD(0x0217A280, CFString *, Create, (app::String * value));
IL2CPP_REGISTER_METHOD(0x0217A4A0, void *, CFStringGetLength, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x0217A540, void *, CFStringGetCharactersPtr, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x0217A5E0, void *, CFStringGetCharacters, (app::void * handle, app::CFRange range, app::void * buffer));
IL2CPP_REGISTER_METHOD(0x0217A6A0, String *, AsString, (app::void * handle));
IL2CPP_REGISTER_METHOD(0x0217A970, String *, ToString, (app::CFString * this_ptr));
}
