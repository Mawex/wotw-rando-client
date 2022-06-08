#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Lifetime::Lease {
IL2CPP_REGISTER_METHOD(0x02306F60, void, __ctor, (Lease * __this));
IL2CPP_REGISTER_METHOD(0x023071F0, TimeSpan, get_CurrentLeaseTime, (Lease * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, LeaseState__Enum, get_CurrentState, (Lease * __this));
IL2CPP_REGISTER_METHOD(0x015145C0, void, Activate, (Lease * __this));
IL2CPP_REGISTER_METHOD(0x023072A0, void, set_InitialLeaseTime, (Lease * __this, TimeSpan value));
IL2CPP_REGISTER_METHODINFO(0x0477BB38, Lease_set_InitialLeaseTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB990, TimeSpan, get_RenewOnCallTime, (Lease * __this));
IL2CPP_REGISTER_METHOD(0x02307410, void, set_RenewOnCallTime, (Lease * __this, TimeSpan value));
IL2CPP_REGISTER_METHODINFO(0x047171A0, Lease_set_RenewOnCallTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02307500, void, set_SponsorshipTimeout, (Lease * __this, TimeSpan value));
IL2CPP_REGISTER_METHODINFO(0x0475DEC0, Lease_set_SponsorshipTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023075F0, TimeSpan, Renew, (Lease * __this, TimeSpan renewalTime));
IL2CPP_REGISTER_METHOD(0x023076D0, void, Unregister, (Lease * __this, ISponsor * obj));
IL2CPP_REGISTER_METHOD(0x02307840, void, UpdateState, (Lease * __this));
IL2CPP_REGISTER_METHOD(0x02307AB0, void, CheckNextSponsor, (Lease * __this));
IL2CPP_REGISTER_METHOD(0x02307DE0, void, ProcessSponsorResponse, (Lease * __this, Object * state, bool timedOut));
IL2CPP_REGISTER_METHODINFO(0x0478A8F8, Lease_ProcessSponsorResponse__MethodInfo);
}
