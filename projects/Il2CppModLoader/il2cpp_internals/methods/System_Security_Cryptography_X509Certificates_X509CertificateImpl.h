#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509CertificateImpl {
IL2CPP_REGISTER_METHOD(0x01E16BD0, void, ThrowIfContextInvalid, (X509CertificateImpl * __this));
IL2CPP_REGISTER_METHODINFO(0x0475AFA8, X509CertificateImpl_ThrowIfContextInvalid__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E16C70, Byte__Array *, GetCertHash, (X509CertificateImpl * __this));
IL2CPP_REGISTER_METHOD(0x01E16CB0, int32_t, GetHashCode, (X509CertificateImpl * __this));
IL2CPP_REGISTER_METHOD(0x01E16D90, bool, Equals, (X509CertificateImpl * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01E16F60, void, Dispose, (X509CertificateImpl * __this));
IL2CPP_REGISTER_METHOD(0x0063D180, void, Dispose, (X509CertificateImpl * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01E17010, void, Finalize, (X509CertificateImpl * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (X509CertificateImpl * __this));
}
