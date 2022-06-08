using namespace app;

namespace app::methods::System::Runtime::Remoting::Lifetime::LeaseManager {
IL2CPP_REGISTER_METHOD(0x02308060, void, SetPollTime, (LeaseManager * __this, TimeSpan timeSpan));
IL2CPP_REGISTER_METHOD(0x023081D0, void, TrackLifetime, (LeaseManager * __this, ServerIdentity * identity));
IL2CPP_REGISTER_METHOD(0x02308330, void, StartManager, (LeaseManager * __this));
IL2CPP_REGISTER_METHOD(0x02308610, void, StopManager, (LeaseManager * __this));
IL2CPP_REGISTER_METHOD(0x02308630, void, ManageLeases, (LeaseManager * __this, Object * state));
IL2CPP_REGISTER_METHODINFO(0x047838E0, LeaseManager_ManageLeases__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02308900, void, __ctor, (LeaseManager * __this));
}
