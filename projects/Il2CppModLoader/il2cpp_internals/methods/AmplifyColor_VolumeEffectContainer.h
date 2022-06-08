using namespace app;

namespace app::methods::AmplifyColor::VolumeEffectContainer {
IL2CPP_REGISTER_METHOD(0x030D22D0, void, __ctor, (VolumeEffectContainer * __this));
IL2CPP_REGISTER_METHOD(0x030D2420, void, AddColorEffect, (VolumeEffectContainer * __this, AmplifyColorBase * colorEffect));
IL2CPP_REGISTER_METHOD(0x030D25C0, VolumeEffect *, AddJustColorEffect, (VolumeEffectContainer * __this, AmplifyColorBase * colorEffect));
IL2CPP_REGISTER_METHOD(0x030D2730, VolumeEffect *, FindVolumeEffect, (VolumeEffectContainer * __this, AmplifyColorBase * colorEffect));
IL2CPP_REGISTER_METHOD(0x030D2A20, void, RemoveVolumeEffect, (VolumeEffectContainer * __this, VolumeEffect * volume));
IL2CPP_REGISTER_METHOD(0x030D2AC0, AmplifyColorBase__Array *, GetStoredEffects, (VolumeEffectContainer * __this));
}
