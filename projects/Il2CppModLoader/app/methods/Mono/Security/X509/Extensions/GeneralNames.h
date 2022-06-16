#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::X509::Extensions::GeneralNames {
    IL2CPP_REGISTER_METHOD(0x0291F640, void, ctor, (app::GeneralNames * this_ptr, app::ASN1_1 * sequence))
    IL2CPP_REGISTER_METHOD(0x02920050, app::String__Array *, get_DNSNames, (app::GeneralNames * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02920180, app::String__Array *, get_IPAddresses, (app::GeneralNames * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029202B0, app::String *, ToString, (app::GeneralNames * this_ptr))
}
