using namespace app;

namespace app::methods::SpiderlingLocomotion {
IL2CPP_REGISTER_METHOD(0x011C5920, float, get_ContinousRotationSpeed, (SpiderlingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011C5930, void, set_ContinousRotationSpeed, (SpiderlingLocomotion * __this, float value));
IL2CPP_REGISTER_METHOD(0x011C5940, bool, get_IsSpinning, (SpiderlingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011C5920, float, get_ContinousRotation, (SpiderlingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x01116570, float, get_TimeOnGround, (SpiderlingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011C5960, void, SetStickToSurfaces, (SpiderlingLocomotion * __this, bool stickToSurfaces));
IL2CPP_REGISTER_METHOD(0x011C5980, void, OnEnable, (SpiderlingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011C5B70, void, OnDisable, (SpiderlingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011C5DA0, void, OnEntityReset, (SpiderlingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011C5ED0, void, DamageReceived, (SpiderlingLocomotion * __this, DamageResult obj));
IL2CPP_REGISTER_METHODINFO(0x04769B78, SpiderlingLocomotion_DamageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011C5EE0, void, OnFixedUpdate, (SpiderlingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011C6590, bool, ShouldStartFalling, (SpiderlingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011C6700, void, OnDrawGizmosSelected, (SpiderlingLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011C6AD0, void, __ctor, (SpiderlingLocomotion * __this));
}
