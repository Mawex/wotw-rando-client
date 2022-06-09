#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography_X509Certificates::X509CertificateImplCollection {
    IL2CPP_REGISTER_METHOD(0x021CBED0, void, __ctor_1, (app::X509CertificateImplCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x021CC020, void, __ctor_2, (app::X509CertificateImplCollection * this_ptr, app::X509CertificateImplCollection * other));
    IL2CPP_REGISTER_METHOD(0x021CC290, int32_t, get_Count, (app::X509CertificateImplCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x021CC320, app::X509CertificateImpl *, get_Item, (app::X509CertificateImplCollection * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x021CC3D0, void, Add, (app::X509CertificateImplCollection * this_ptr, app::X509CertificateImpl * impl, bool take_ownership));
    IL2CPP_REGISTER_METHOD(0x021CC4A0, app::X509CertificateImplCollection *, Clone, (app::X509CertificateImplCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x021CC5F0, void, Dispose_1, (app::X509CertificateImplCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x021CC6A0, void, Dispose_2, (app::X509CertificateImplCollection * this_ptr, bool disposing));
    IL2CPP_REGISTER_METHOD(0x021CC830, void, Finalize, (app::X509CertificateImplCollection * this_ptr));
}
