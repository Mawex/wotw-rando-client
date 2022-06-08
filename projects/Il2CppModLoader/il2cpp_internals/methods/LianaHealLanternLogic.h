using namespace app;

namespace app::methods::LianaHealLanternLogic {
IL2CPP_REGISTER_METHOD(0x0113DB90, void, Start, (LianaHealLanternLogic * __this));
IL2CPP_REGISTER_METHOD(0x0113DEA0, void, OnDestroy, (LianaHealLanternLogic * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, IMoonSetupAnimator *, get_MoonSetupAnimator, (LianaHealLanternLogic * __this));
IL2CPP_REGISTER_METHOD(0x0113E1B0, void, set_MoonSetupAnimator, (LianaHealLanternLogic * __this, IMoonSetupAnimator * value));
IL2CPP_REGISTER_METHOD(0x0113E280, void, OnDamageRecieved, (LianaHealLanternLogic * __this, DamageResult result));
IL2CPP_REGISTER_METHODINFO(0x047021B0, LianaHealLanternLogic_OnDamageRecieved__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0113E3F0, void, Update, (LianaHealLanternLogic * __this));
IL2CPP_REGISTER_METHOD(0x0113E4C0, void, Respawn, (LianaHealLanternLogic * __this));
IL2CPP_REGISTER_METHOD(0x0113E520, void, OnRestoreCheckpoint, (LianaHealLanternLogic * __this));
IL2CPP_REGISTER_METHODINFO(0x04744460, LianaHealLanternLogic_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0113E590, void, SetLineEnd, (LianaHealLanternLogic * __this, FixedJoint * lineEnd));
IL2CPP_REGISTER_METHOD(0x0113E860, void, EnableBulb, (LianaHealLanternLogic * __this, bool enable));
IL2CPP_REGISTER_METHOD(0x0113F070, bool, IsOnScreen, (LianaHealLanternLogic * __this));
IL2CPP_REGISTER_METHOD(0x0113F2A0, void, __ctor, (LianaHealLanternLogic * __this));
}
