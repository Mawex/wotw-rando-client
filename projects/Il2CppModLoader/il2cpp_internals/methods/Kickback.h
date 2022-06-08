using namespace app;

namespace app::methods::Kickback {
IL2CPP_REGISTER_METHOD(0x00863E90, float, get_TimeRemaining, (Kickback * __this));
IL2CPP_REGISTER_METHOD(0x00E71150, float, get_KickbackDuration, (Kickback * __this));
IL2CPP_REGISTER_METHOD(0x00573170, float, get_KickbackMultiplier, (Kickback * __this));
IL2CPP_REGISTER_METHOD(0x00E71230, Vector2, get_KickbackDirection, (Kickback * __this));
IL2CPP_REGISTER_METHOD(0x00E71250, void, set_KickbackDirection, (Kickback * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x00E71270, float, get_CurrentKickbackSpeed, (Kickback * __this));
IL2CPP_REGISTER_METHOD(0x00E712D0, Vector2, get_KickbackVector, (Kickback * __this));
IL2CPP_REGISTER_METHOD(0x00E713F0, void, ApplyKickback, (Kickback * __this, float kickbackMultiplier));
IL2CPP_REGISTER_METHOD(0x00E71410, void, ApplyKickback, (Kickback * __this, float kickbackMultiplier, Vector2 kickbackDirection));
IL2CPP_REGISTER_METHOD(0x00E71470, void, AdvanceTime, (Kickback * __this));
IL2CPP_REGISTER_METHOD(0x008001B0, void, Stop, (Kickback * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Kickback * __this));
}
