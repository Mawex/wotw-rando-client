using namespace app;

namespace app::methods::SeinMaxSpeedAction {
IL2CPP_REGISTER_METHOD(0x008A2DD0, void, OnHorizontalInputCalculate, (SeinMaxSpeedAction * __this));
IL2CPP_REGISTER_METHODINFO(0x047645E8, SeinMaxSpeedAction_OnHorizontalInputCalculate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008A2F50, void, OnEnable, (SeinMaxSpeedAction * __this));
IL2CPP_REGISTER_METHOD(0x008A3130, void, OnDisable, (SeinMaxSpeedAction * __this));
IL2CPP_REGISTER_METHOD(0x008A3310, void, Perform, (SeinMaxSpeedAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008A3320, void, FixedUpdate, (SeinMaxSpeedAction * __this));
IL2CPP_REGISTER_METHOD(0x008A34B0, void, Stop, (SeinMaxSpeedAction * __this));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsPerforming, (SeinMaxSpeedAction * __this));
IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_Duration, (SeinMaxSpeedAction * __this));
IL2CPP_REGISTER_METHOD(0x008A34D0, void, set_Duration, (SeinMaxSpeedAction * __this, float value));
IL2CPP_REGISTER_METHOD(0x0043BB90, void, __ctor, (SeinMaxSpeedAction * __this));
}
