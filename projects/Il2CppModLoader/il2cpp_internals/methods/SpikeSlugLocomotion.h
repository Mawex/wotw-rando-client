#include <interception_macros.h>

namespace app::methods::SpikeSlugLocomotion {
IL2CPP_REGISTER_METHOD(0x011D1110, float, get_ContinousRotationSpeed, (SpikeSlugLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011D1120, void, set_ContinousRotationSpeed, (SpikeSlugLocomotion * __this, float value));
IL2CPP_REGISTER_METHOD(0x011D1260, bool, get_IsSpinning, (SpikeSlugLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011D1110, float, get_ContinousRotation, (SpikeSlugLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011D1280, float, get_TimeOnGround, (SpikeSlugLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011D1290, void, OnEnable, (SpikeSlugLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011D1480, void, OnDisable, (SpikeSlugLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011D16B0, void, DamageReceived, (SpikeSlugLocomotion * __this, DamageResult obj));
IL2CPP_REGISTER_METHODINFO(0x04776A40, SpikeSlugLocomotion_DamageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011D16C0, void, RegisterContinousRotation, (SpikeSlugLocomotion * __this, float rotationSpeed));
IL2CPP_REGISTER_METHOD(0x011D1AD0, void, OnFixedUpdate, (SpikeSlugLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011D2040, void, ResetRotation, (SpikeSlugLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011C5960, void, SetStickToSurfaces, (SpikeSlugLocomotion * __this, bool stickToSurfaces));
IL2CPP_REGISTER_METHOD(0x011D21D0, bool, ShouldStartFalling, (SpikeSlugLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011D2210, void, OnDrawGizmosSelected, (SpikeSlugLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x011D2530, void, __ctor, (SpikeSlugLocomotion * __this));
}
