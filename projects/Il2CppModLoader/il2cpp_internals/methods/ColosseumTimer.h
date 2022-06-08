using namespace app;

namespace app::methods::ColosseumTimer {
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_TimeRemaining, (ColosseumTimer * __this));
IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_TimeRemaining, (ColosseumTimer * __this, float value));
IL2CPP_REGISTER_METHOD(0x011DD8A0, void, OnEnable, (ColosseumTimer * __this));
IL2CPP_REGISTER_METHOD(0x011DD940, void, OnDisable, (ColosseumTimer * __this));
IL2CPP_REGISTER_METHOD(0x011DD9E0, void, Update, (ColosseumTimer * __this));
IL2CPP_REGISTER_METHOD(0x011DDA80, void, SetTime, (ColosseumTimer * __this, float seconds));
IL2CPP_REGISTER_METHOD(0x011DDA90, void, AddTime, (ColosseumTimer * __this, float seconds));
IL2CPP_REGISTER_METHOD(0x011DDAA0, void, Stop, (ColosseumTimer * __this));
IL2CPP_REGISTER_METHOD(0x011DDAB0, void, Pause, (ColosseumTimer * __this, bool paused));
IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_IsSuspended, (ColosseumTimer * __this));
IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_IsSuspended, (ColosseumTimer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006410F0, SuspendableMask__Enum, get_Mask, (ColosseumTimer * __this));
IL2CPP_REGISTER_METHOD(0x011DDAC0, void, set_Mask, (ColosseumTimer * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x011DDB70, void, __ctor, (ColosseumTimer * __this));
}
