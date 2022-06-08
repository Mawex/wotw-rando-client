using namespace app;

namespace app::methods::Mono::Security::X509::X509Stores {
IL2CPP_REGISTER_METHOD(0x01669060, void, __ctor, (X509Stores * __this, String * path, bool newFormat));
IL2CPP_REGISTER_METHOD(0x0316B060, X509Store_1 *, get_Personal, (X509Stores * __this));
IL2CPP_REGISTER_METHOD(0x0316B1F0, X509Store_1 *, get_OtherPeople, (X509Stores * __this));
IL2CPP_REGISTER_METHOD(0x0316B380, X509Store_1 *, get_IntermediateCA, (X509Stores * __this));
IL2CPP_REGISTER_METHOD(0x0316B520, X509Store_1 *, get_TrustedRoot, (X509Stores * __this));
IL2CPP_REGISTER_METHOD(0x0316B6C0, X509Store_1 *, get_Untrusted, (X509Stores * __this));
IL2CPP_REGISTER_METHOD(0x0316B860, void, Clear, (X509Stores * __this));
IL2CPP_REGISTER_METHOD(0x0316B990, X509Store_1 *, Open, (X509Stores * __this, String * storeName, bool create));
IL2CPP_REGISTER_METHODINFO(0x0475E370, X509Stores_Open__MethodInfo);
}
