using namespace app;

namespace app::methods::LaserPulsator {
IL2CPP_REGISTER_METHOD(0x00F08060, void, Awake, (LaserPulsator * __this));
IL2CPP_REGISTER_METHOD(0x00F08110, void, OnDestroy, (LaserPulsator * __this));
IL2CPP_REGISTER_METHOD(0x00F081B0, void, FixedUpdate, (LaserPulsator * __this));
IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsSuspended, (LaserPulsator * __this));
IL2CPP_REGISTER_METHOD(0x0049C030, void, set_IsSuspended, (LaserPulsator * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF610, SuspendableMask__Enum, get_Mask, (LaserPulsator * __this));
IL2CPP_REGISTER_METHOD(0x00F083C0, void, set_Mask, (LaserPulsator * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00F083D0, void, Serialize, (LaserPulsator * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00F08400, void, __ctor, (LaserPulsator * __this));
}
