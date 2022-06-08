using namespace app;

namespace app::methods::System::Security::Cryptography::X509Certificates::X509Store {
IL2CPP_REGISTER_METHOD(0x0257DBC0, void, __ctor, (X509Store * __this, StoreName__Enum storeName, StoreLocation__Enum storeLocation));
IL2CPP_REGISTER_METHODINFO(0x04759048, X509Store__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0257DD10, X509Certificate2Collection *, get_Certificates, (X509Store * __this));
IL2CPP_REGISTER_METHOD(0x0257DE90, X509Stores *, get_Factory, (X509Store * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, X509Store_1 *, get_Store, (X509Store * __this));
IL2CPP_REGISTER_METHOD(0x0257DEB0, void, Close, (X509Store * __this));
IL2CPP_REGISTER_METHOD(0x0257DF30, void, Dispose, (X509Store * __this));
IL2CPP_REGISTER_METHOD(0x0257DF40, void, Open, (X509Store * __this, OpenFlags__Enum flags));
IL2CPP_REGISTER_METHODINFO(0x04781748, X509Store_Open__MethodInfo);
}
