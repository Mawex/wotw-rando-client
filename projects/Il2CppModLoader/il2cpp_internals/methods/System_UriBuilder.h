using namespace app;

namespace app::methods::System::UriBuilder {
IL2CPP_REGISTER_METHOD(0x02A8E0F0, void, __ctor, (UriBuilder * __this));
IL2CPP_REGISTER_METHOD(0x02A8E220, void, __ctor, (UriBuilder * __this, Uri * uri));
IL2CPP_REGISTER_METHODINFO(0x04726AA8, UriBuilder__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A8E3A0, void, Init, (UriBuilder * __this, Uri * uri));
IL2CPP_REGISTER_METHOD(0x02A8E560, void, set_Host, (UriBuilder * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02A8E670, void, set_Path, (UriBuilder * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02A8E860, void, set_Query, (UriBuilder * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02A8E940, void, set_Scheme, (UriBuilder * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04774360, UriBuilder_set_Scheme__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A8EBE0, Uri *, get_Uri, (UriBuilder * __this));
IL2CPP_REGISTER_METHOD(0x02A8ED70, bool, Equals, (UriBuilder * __this, Object * rparam));
IL2CPP_REGISTER_METHOD(0x02A8EDE0, int32_t, GetHashCode, (UriBuilder * __this));
IL2CPP_REGISTER_METHOD(0x02A8EE10, void, SetFieldsFromUri, (UriBuilder * __this, Uri * uri));
IL2CPP_REGISTER_METHOD(0x02A8EFC0, String *, ToString, (UriBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x0473FC58, UriBuilder_ToString__MethodInfo);
}
