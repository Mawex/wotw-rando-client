using namespace app;

namespace app::methods::Mono::Security::X509::X509Store {
IL2CPP_REGISTER_METHOD(0x031676F0, void, __ctor, (X509Store_1 * __this, String * path, bool crl, bool newFormat));
IL2CPP_REGISTER_METHOD(0x03167700, X509CertificateCollection_2 *, get_Certificates, (X509Store_1 * __this));
IL2CPP_REGISTER_METHOD(0x03167730, ArrayList *, get_Crls, (X509Store_1 * __this));
IL2CPP_REGISTER_METHOD(0x031678C0, String *, get_Name, (X509Store_1 * __this));
IL2CPP_REGISTER_METHOD(0x031679D0, void, Clear, (X509Store_1 * __this));
IL2CPP_REGISTER_METHOD(0x03167A10, void, ClearCertificates, (X509Store_1 * __this));
IL2CPP_REGISTER_METHOD(0x03167A90, void, ClearCrls, (X509Store_1 * __this));
IL2CPP_REGISTER_METHOD(0x03167AC0, void, Import, (X509Store_1 * __this, X509Certificate_2 * certificate));
IL2CPP_REGISTER_METHOD(0x03167F50, void, Import, (X509Store_1 * __this, X509Crl * crl));
IL2CPP_REGISTER_METHODINFO(0x04710480, X509Store_1_Import_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031682A0, void, Remove, (X509Store_1 * __this, X509Certificate_2 * certificate));
IL2CPP_REGISTER_METHOD(0x03168430, void, Remove, (X509Store_1 * __this, X509Crl * crl));
IL2CPP_REGISTER_METHODINFO(0x04749E50, X509Store_1_Remove_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03168570, void, ImportNewFormat, (X509Store_1 * __this, X509Certificate_2 * certificate));
IL2CPP_REGISTER_METHOD(0x03168660, void, RemoveNewFormat, (X509Store_1 * __this, X509Certificate_2 * certificate));
IL2CPP_REGISTER_METHOD(0x03168750, String *, GetUniqueNameWithSerial, (X509Store_1 * __this, X509Certificate_2 * certificate));
IL2CPP_REGISTER_METHOD(0x031687A0, String *, GetUniqueName, (X509Store_1 * __this, X509Certificate_2 * certificate, Byte__Array * serial));
IL2CPP_REGISTER_METHOD(0x03168890, String *, GetUniqueName, (X509Store_1 * __this, X509Crl * crl));
IL2CPP_REGISTER_METHOD(0x03168980, Byte__Array *, GetUniqueName, (X509Store_1 * __this, X509ExtensionCollection_1 * extensions, Byte__Array * serial));
IL2CPP_REGISTER_METHOD(0x03168BE0, String *, GetUniqueName, (X509Store_1 * __this, String * method_1, Byte__Array * name, String * fileExtension));
IL2CPP_REGISTER_METHOD(0x03168E40, Byte__Array *, Load, (X509Store_1 * __this, String * filename));
IL2CPP_REGISTER_METHODINFO(0x0475AD80, X509Store_1_Load__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03168FE0, X509Certificate_2 *, LoadCertificate, (X509Store_1 * __this, String * filename));
IL2CPP_REGISTER_METHOD(0x03169140, X509Crl *, LoadCrl, (X509Store_1 * __this, String * filename));
IL2CPP_REGISTER_METHOD(0x031692A0, bool, CheckStore, (X509Store_1 * __this, String * path, bool throwException));
IL2CPP_REGISTER_METHODINFO(0x0472DD40, X509Store_1_CheckStore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03169370, X509CertificateCollection_2 *, BuildCertificatesCollection, (X509Store_1 * __this, String * storeName));
IL2CPP_REGISTER_METHOD(0x031695D0, ArrayList *, BuildCrlsCollection, (X509Store_1 * __this, String * storeName));
}
