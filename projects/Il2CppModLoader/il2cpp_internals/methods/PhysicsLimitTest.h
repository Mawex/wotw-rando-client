using namespace app;

namespace app::methods::PhysicsLimitTest {
IL2CPP_REGISTER_METHOD(0x01152C10, String *, get_Path, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x01152C90, void, AddTimeSample, (PhysicsLimitTest * __this, float dt));
IL2CPP_REGISTER_METHOD(0x01152CF0, int32_t, GetFrameCount, (PhysicsLimitTest * __this, float duration));
IL2CPP_REGISTER_METHOD(0x01152D60, void, UpdateMethod, (PhysicsLimitTest * __this, float timeSpan, int32_t minFrames));
IL2CPP_REGISTER_METHOD(0x01152EE0, void, UpdateMethodOld, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x01152F60, void, Update, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x01153050, void, FixedUpdate, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x01153060, void, ResetValues, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x011530C0, String *, get_Name, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x01153140, String *, get_HelpText, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x011531C0, String__Array *, get_ToggleOptions, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CurrentToggleOptionId, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x01153480, void, set_CurrentToggleOptionId, (PhysicsLimitTest * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01153520, void, Awake, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x011535D0, void, OnEnable, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x01153670, void, OnDestroy, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x007893E0, bool, get_Active, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x01153790, void, set_Active, (PhysicsLimitTest * __this, bool value));
IL2CPP_REGISTER_METHOD(0x011537F0, bool, get_IsSynced, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01153910, void, SetSingleFixedUpdate, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x01153970, void, SetDoubleFixedUpdate, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x011539D0, bool, get_ShouldAllowPhysicsLimiter, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01153A70, void, set_ShouldAllowPhysicsLimiter, (bool value));
IL2CPP_REGISTER_METHOD(0x01153B80, bool, get_ShouldRunPhysicsLimiter, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x01153D00, void, __ctor, (PhysicsLimitTest * __this));
IL2CPP_REGISTER_METHOD(0x01153DA0, void, __cctor, (MethodInfo * method));
}
