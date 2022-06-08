using namespace app;

namespace app::methods::FPSPlugin {
IL2CPP_REGISTER_METHOD(0x0098AD90, void, Awake, (FPSPlugin * __this));
IL2CPP_REGISTER_METHOD(0x0098B0A0, void, Update, (FPSPlugin * __this));
IL2CPP_REGISTER_METHOD(0x0098B120, void, PlayCycle, (FPSPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x0098B170, void, RecordCycle, (FPSPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x0098B270, void, Exit, (FPSPlugin * __this));
IL2CPP_REGISTER_METHOD(0x0098B310, void, OnDestroy, (FPSPlugin * __this));
IL2CPP_REGISTER_METHOD(0x0098B3B0, void, OnApplicationQuit, (FPSPlugin * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (FPSPlugin * __this));
}
