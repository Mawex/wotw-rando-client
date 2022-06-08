using namespace app;

namespace app::methods::System::Net::KnownHttpVerb {
IL2CPP_REGISTER_METHOD(0x01E6A970, void, __ctor, (KnownHttpVerb * __this, String * name, bool requireContentBody, bool contentBodyNotAllowed, bool connectRequest, bool expectNoContentResponse));
IL2CPP_REGISTER_METHOD(0x01E6A990, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01E6B1B0, bool, Equals, (KnownHttpVerb * __this, KnownHttpVerb * verb));
IL2CPP_REGISTER_METHOD(0x01E6B340, KnownHttpVerb *, Parse, (String * name));
}
