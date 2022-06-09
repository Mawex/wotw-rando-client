#include <interception_macros.h>

namespace app::methods::Mono_Security_X509::X509Store {
IL2CPP_REGISTER_METHOD(0x031676F0, void, __ctor, (app::X509Store_1 * this_ptr, app::String * path, bool crl, bool new_format));
IL2CPP_REGISTER_METHOD(0x03167700, X509CertificateCollection_2 *, get_Certificates, (app::X509Store_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x03167730, ArrayList *, get_Crls, (app::X509Store_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x031678C0, String *, get_Name, (app::X509Store_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x031679D0, void, Clear, (app::X509Store_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x03167A10, void, ClearCertificates, (app::X509Store_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x03167A90, void, ClearCrls, (app::X509Store_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x03167AC0, void, Import_1, (app::X509Store_1 * this_ptr, app::X509Certificate_2 * certificate));
IL2CPP_REGISTER_METHOD(0x03167F50, void, Import_2, (app::X509Store_1 * this_ptr, app::X509Crl * crl));
IL2CPP_REGISTER_METHODINFO(0x04710480, X509Store_1_Import_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031682A0, void, Remove_1, (app::X509Store_1 * this_ptr, app::X509Certificate_2 * certificate));
IL2CPP_REGISTER_METHOD(0x03168430, void, Remove_2, (app::X509Store_1 * this_ptr, app::X509Crl * crl));
IL2CPP_REGISTER_METHODINFO(0x04749E50, X509Store_1_Remove_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03168570, void, ImportNewFormat, (app::X509Store_1 * this_ptr, app::X509Certificate_2 * certificate));
IL2CPP_REGISTER_METHOD(0x03168660, void, RemoveNewFormat, (app::X509Store_1 * this_ptr, app::X509Certificate_2 * certificate));
IL2CPP_REGISTER_METHOD(0x03168750, String *, GetUniqueNameWithSerial, (app::X509Store_1 * this_ptr, app::X509Certificate_2 * certificate));
IL2CPP_REGISTER_METHOD(0x031687A0, String *, GetUniqueName_1, (app::X509Store_1 * this_ptr, app::X509Certificate_2 * certificate, app::Byte__Array * serial));
IL2CPP_REGISTER_METHOD(0x03168890, String *, GetUniqueName_2, (app::X509Store_1 * this_ptr, app::X509Crl * crl));
IL2CPP_REGISTER_METHOD(0x03168980, Byte__Array *, GetUniqueName_3, (app::X509Store_1 * this_ptr, app::X509ExtensionCollection_1 * extensions, app::Byte__Array * serial));
IL2CPP_REGISTER_METHOD(0x03168BE0, String *, GetUniqueName_4, (app::X509Store_1 * this_ptr, app::String * method_1, app::Byte__Array * name, app::String * file_extension));
IL2CPP_REGISTER_METHOD(0x03168E40, Byte__Array *, Load, (app::X509Store_1 * this_ptr, app::String * filename));
IL2CPP_REGISTER_METHODINFO(0x0475AD80, X509Store_1_Load__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03168FE0, X509Certificate_2 *, LoadCertificate, (app::X509Store_1 * this_ptr, app::String * filename));
IL2CPP_REGISTER_METHOD(0x03169140, X509Crl *, LoadCrl, (app::X509Store_1 * this_ptr, app::String * filename));
IL2CPP_REGISTER_METHOD(0x031692A0, bool, CheckStore, (app::X509Store_1 * this_ptr, app::String * path, bool throw_exception));
IL2CPP_REGISTER_METHODINFO(0x0472DD40, X509Store_1_CheckStore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03169370, X509CertificateCollection_2 *, BuildCertificatesCollection, (app::X509Store_1 * this_ptr, app::String * store_name));
IL2CPP_REGISTER_METHOD(0x031695D0, ArrayList *, BuildCrlsCollection, (app::X509Store_1 * this_ptr, app::String * store_name));
}
