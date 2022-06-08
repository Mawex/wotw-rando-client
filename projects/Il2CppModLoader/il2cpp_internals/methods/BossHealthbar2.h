#include <interception_macros.h>

namespace app::methods::BossHealthbar2 {
IL2CPP_REGISTER_METHOD(0x00D3B6E0, BossHealthbar2 *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00D3B840, void, SetBossVitals, (Vitals * vitals, Func_1_Boolean_ * shouldShowNow));
IL2CPP_REGISTER_METHOD(0x00D3BA50, void, SetBossName, (MessageProvider * provider));
IL2CPP_REGISTER_METHOD(0x00D3BBA0, void, SetBossName, (BossHealthbar2_BossNameType__Enum bossType));
IL2CPP_REGISTER_METHOD(0x00D3BEA0, void, SetBossVitalsInternal, (BossHealthbar2 * __this, Vitals * vitals, Func_1_Boolean_ * shouldShowNow));
IL2CPP_REGISTER_METHOD(0x00D3BFD0, float, get_Value, (BossHealthbar2 * __this));
IL2CPP_REGISTER_METHOD(0x00D3BFF0, void, Awake, (BossHealthbar2 * __this));
IL2CPP_REGISTER_METHOD(0x00D3C340, void, OnDestroy, (BossHealthbar2 * __this));
IL2CPP_REGISTER_METHOD(0x00D3C4E0, void, OnRestoreCheckpoint, (BossHealthbar2 * __this));
IL2CPP_REGISTER_METHODINFO(0x0473AB18, BossHealthbar2_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D3C4F0, bool, get_ShouldBeShown, (BossHealthbar2 * __this));
IL2CPP_REGISTER_METHOD(0x00D3C780, void, UpdateValue, (BossHealthbar2 * __this));
IL2CPP_REGISTER_METHOD(0x00D3C8B0, void, FixedUpdate, (BossHealthbar2 * __this));
IL2CPP_REGISTER_METHOD(0x00D3CC70, void, UpdateVisuals, (BossHealthbar2 * __this));
IL2CPP_REGISTER_METHOD(0x00D3CE70, void, PlayShowTimeline, (BossHealthbar2 * __this));
IL2CPP_REGISTER_METHOD(0x00D3D130, void, PlayHideTimeline, (BossHealthbar2 * __this));
IL2CPP_REGISTER_METHOD(0x00D3D3A0, void, Show, (BossHealthbar2 * __this));
IL2CPP_REGISTER_METHOD(0x00D3D440, void, Hide, (BossHealthbar2 * __this));
IL2CPP_REGISTER_METHOD(0x00CAE830, bool, get_IsVisible, (BossHealthbar2 * __this));
IL2CPP_REGISTER_METHOD(0x00D3D460, void, __ctor, (BossHealthbar2 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x00D3D4C0, void, _PlayHideTimeline_b__42_0, (BossHealthbar2 * __this));
IL2CPP_REGISTER_METHODINFO(0x0474F038, BossHealthbar2__PlayHideTimeline_b__42_0__MethodInfo);
}
