#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography_X509Certificates::X509Chain {
IL2CPP_REGISTER_METHOD(0x021CC8B0, X509ChainImpl *, get_Impl, (app::X509Chain * this_ptr));
IL2CPP_REGISTER_METHOD(0x021CC970, void, __ctor_1, (app::X509Chain * this_ptr));
IL2CPP_REGISTER_METHOD(0x021CCAC0, void, __ctor_2, (app::X509Chain * this_ptr, bool use_machine_context));
IL2CPP_REGISTER_METHOD(0x021CCC20, X509ChainPolicy *, get_ChainPolicy, (app::X509Chain * this_ptr));
IL2CPP_REGISTER_METHOD(0x021CCC50, void, set_ChainPolicy, (app::X509Chain * this_ptr, app::X509ChainPolicy * value));
IL2CPP_REGISTER_METHOD(0x021CCC90, X509ChainStatus__Array *, get_ChainStatus, (app::X509Chain * this_ptr));
IL2CPP_REGISTER_METHOD(0x021CCCC0, bool, Build, (app::X509Chain * this_ptr, app::X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x021CCD00, X509Chain *, Create, ());
IL2CPP_REGISTER_METHOD(0x021CCE40, void, Dispose_1, (app::X509Chain * this_ptr));
IL2CPP_REGISTER_METHOD(0x021CCEF0, void, Dispose_2, (app::X509Chain * this_ptr, bool disposing));
IL2CPP_REGISTER_METHOD(0x021CCFC0, void, Finalize, (app::X509Chain * this_ptr));
}
