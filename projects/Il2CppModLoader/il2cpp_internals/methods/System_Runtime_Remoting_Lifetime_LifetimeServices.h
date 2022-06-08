#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Lifetime::LifetimeServices {
IL2CPP_REGISTER_METHOD(0x02308E00, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x02309110, TimeSpan, get_LeaseManagerPollTime, ());
IL2CPP_REGISTER_METHOD(0x023091B0, void, set_LeaseManagerPollTime, (TimeSpan value));
IL2CPP_REGISTER_METHOD(0x02309280, TimeSpan, get_LeaseTime, ());
IL2CPP_REGISTER_METHOD(0x02309320, void, set_LeaseTime, (TimeSpan value));
IL2CPP_REGISTER_METHOD(0x023093D0, TimeSpan, get_RenewOnCallTime, ());
IL2CPP_REGISTER_METHOD(0x02309470, void, set_RenewOnCallTime, (TimeSpan value));
IL2CPP_REGISTER_METHOD(0x02309520, TimeSpan, get_SponsorshipTimeout, ());
IL2CPP_REGISTER_METHOD(0x023095C0, void, set_SponsorshipTimeout, (TimeSpan value));
IL2CPP_REGISTER_METHOD(0x02309670, void, TrackLifetime, (ServerIdentity * identity));
}
