#include <interception_macros.h>

namespace app::methods::FireflyHive {
IL2CPP_REGISTER_METHOD(0x0125F550, Firefly *, get_FireflyInstance, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x0125F950, int32_t, get_PointIndex, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x0125F960, void, set_PointIndex, (FireflyHive * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0125FBE0, bool, get_ShouldUpdatePath, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x0125FCD0, void, OnEnable, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x0125FEA0, void, OnDisable, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x01260070, void, OnValidate, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x012600B0, void, OnAwake, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x01260420, void, OnDestroy, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x012604D0, void, FixedUpdate, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x012608E0, void, UpdatePath, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x012609A0, void, ReleaseFirely, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x01260FB0, void, BecomeReady, (FireflyHive * __this, bool spawnOrbs));
IL2CPP_REGISTER_METHODINFO(0x0474DEF0, FireflyHive_BecomeReady__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01261130, void, ResetPointsIndexing, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x012614E0, void, PlayTimeline, (FireflyHive * __this, MoonTimeline * timeline, Action * onTimelineEnd));
IL2CPP_REGISTER_METHOD(0x012615C0, void, StopAllTimelines, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x01261780, bool, get_FireflyInsideFrustum, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x012617B0, bool, get_CanBeHit, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x012617C0, void, OnRecieveDamage, (FireflyHive * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x0473D4C8, FireflyHive_OnRecieveDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01261B60, void, OnRestoreCheckpoint, (FireflyHive * __this));
IL2CPP_REGISTER_METHODINFO(0x04707690, FireflyHive_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01261CF0, bool, get_IsOn, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x01261D00, void, Activate, (FireflyHive * __this, bool activate));
IL2CPP_REGISTER_METHOD(0x01261DE0, void, OnFrustumEnter, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x01261EA0, void, OnFrustumExit, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x01261EB0, bool, get_InsideFrustum, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x01261EC0, Bounds, get_Bounds, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowCacheBounds, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x01261EE0, void, __ctor, (FireflyHive * __this));
IL2CPP_REGISTER_METHOD(0x012620A0, void, _ReleaseFirely_b__32_0, (FireflyHive * __this));
IL2CPP_REGISTER_METHODINFO(0x0476D0E8, FireflyHive__ReleaseFirely_b__32_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012620C0, void, _BecomeReady_b__33_0, (FireflyHive * __this));
IL2CPP_REGISTER_METHODINFO(0x04703B58, FireflyHive__BecomeReady_b__33_0__MethodInfo);
}
