using namespace app;

namespace app::methods::BossHealthbar {
IL2CPP_REGISTER_METHOD(0x00A26FE0, float, get_Value, (BossHealthbar * __this));
IL2CPP_REGISTER_METHOD(0x00D3A7B0, void, Awake, (BossHealthbar * __this));
IL2CPP_REGISTER_METHOD(0x00D3AB70, void, OnDestroy, (BossHealthbar * __this));
IL2CPP_REGISTER_METHOD(0x00D3AD10, void, OnEnable, (BossHealthbar * __this));
IL2CPP_REGISTER_METHOD(0x00D3AD50, void, OnDisable, (BossHealthbar * __this));
IL2CPP_REGISTER_METHOD(0x00D3AD60, void, OnRestoreCheckpoint, (BossHealthbar * __this));
IL2CPP_REGISTER_METHODINFO(0x04728F68, BossHealthbar_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D3AD60, void, Start, (BossHealthbar * __this));
IL2CPP_REGISTER_METHOD(0x00D3ADB0, void, PlayShowTimeline, (BossHealthbar * __this));
IL2CPP_REGISTER_METHOD(0x00D3AEE0, void, PlayHideTimeline, (BossHealthbar * __this));
IL2CPP_REGISTER_METHOD(0x00D3B010, void, Show, (BossHealthbar * __this));
IL2CPP_REGISTER_METHOD(0x00D3AD50, void, Hide, (BossHealthbar * __this));
IL2CPP_REGISTER_METHOD(0x00D3B050, void, SetHealthbarTransparency, (BossHealthbar * __this, float alpha));
IL2CPP_REGISTER_METHOD(0x00D3B1D0, void, FixedUpdate, (BossHealthbar * __this));
IL2CPP_REGISTER_METHOD(0x00D3B370, void, UpdateVisuals, (BossHealthbar * __this));
IL2CPP_REGISTER_METHOD(0x00D3B580, void, __ctor, (BossHealthbar * __this));
}
