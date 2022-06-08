#include <interception_macros.h>

namespace app::methods::AmplifyColor::VolumeEffect {
IL2CPP_REGISTER_METHOD(0x030CD060, void, __ctor, (VolumeEffect * __this, AmplifyColorBase * effect));
IL2CPP_REGISTER_METHOD(0x030CD1C0, VolumeEffect *, BlendValuesToVolumeEffect, (VolumeEffectFlags * flags, VolumeEffect * volume1, VolumeEffect * volume2, float blend));
IL2CPP_REGISTER_METHOD(0x030CDBC0, VolumeEffectComponent *, AddComponent, (VolumeEffect * __this, Component_1 * c, VolumeEffectComponentFlags * compFlags));
IL2CPP_REGISTER_METHOD(0x030CDEB0, void, RemoveEffectComponent, (VolumeEffect * __this, VolumeEffectComponent * comp));
IL2CPP_REGISTER_METHOD(0x030CDF50, void, UpdateVolume, (VolumeEffect * __this));
IL2CPP_REGISTER_METHOD(0x030CE170, void, SetValues, (VolumeEffect * __this, AmplifyColorBase * targetColor));
IL2CPP_REGISTER_METHOD(0x030CE8A0, void, BlendValues, (VolumeEffect * __this, AmplifyColorBase * targetColor, VolumeEffect * other, float blendAmount));
IL2CPP_REGISTER_METHOD(0x030CF0B0, VolumeEffectComponent *, FindEffectComponent, (VolumeEffect * __this, String * compName));
IL2CPP_REGISTER_METHOD(0x030CF210, Component_1__Array *, ListAcceptableComponents, (AmplifyColorBase * go));
IL2CPP_REGISTER_METHOD(0x030CF500, String__Array *, GetComponentNames, (VolumeEffect * __this));
}
