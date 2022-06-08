using namespace app;

namespace app::methods::SeinRide_RideState {
IL2CPP_REGISTER_METHOD(0x005D6970, void, Initialize, (SeinRide_RideState * __this, SeinRide * seinRide));
IL2CPP_REGISTER_METHOD(0x005D6A40, void, OnBegin, (SeinRide_RideState * __this, IRideable * rideable, bool skipMountAnimation));
IL2CPP_REGISTER_METHOD(0x005D6C50, void, OnEnd, (SeinRide_RideState * __this, IRideable * rideable));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SeinRide_RideState * __this));
}
