using namespace app;

namespace app::methods::Mono::Net::CFString {
IL2CPP_REGISTER_METHOD(0x02173690, void, __ctor, (CFString * __this, void * handle, bool own));
IL2CPP_REGISTER_METHOD(0x0217A1D0, void *, CFStringCreateWithCharacters, (void * alloc, void * chars, void * length));
IL2CPP_REGISTER_METHOD(0x0217A280, CFString *, Create, (String * value));
IL2CPP_REGISTER_METHOD(0x0217A4A0, void *, CFStringGetLength, (void * handle));
IL2CPP_REGISTER_METHOD(0x0217A540, void *, CFStringGetCharactersPtr, (void * handle));
IL2CPP_REGISTER_METHOD(0x0217A5E0, void *, CFStringGetCharacters, (void * handle, CFRange range, void * buffer));
IL2CPP_REGISTER_METHOD(0x0217A6A0, String *, AsString, (void * handle));
IL2CPP_REGISTER_METHOD(0x0217A970, String *, ToString, (CFString * __this));
}
