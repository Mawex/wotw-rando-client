#include <interception_macros.h>

namespace app::methods::AmplifyColor::VolumeEffectFlags {
IL2CPP_REGISTER_METHOD(0x030D3480, void, __ctor, (VolumeEffectFlags * __this));
IL2CPP_REGISTER_METHOD(0x030D35D0, void, AddComponent, (VolumeEffectFlags * __this, Component_1 * c));
IL2CPP_REGISTER_METHOD(0x030D3930, void, UpdateFlags, (VolumeEffectFlags * __this, VolumeEffect * effectVol));
IL2CPP_REGISTER_METHOD(0x030D3D70, void, UpdateCamFlags, (AmplifyColorBase__Array * effects, AmplifyColorVolumeBase__Array * volumes));
IL2CPP_REGISTER_METHOD(0x030D3FB0, VolumeEffect *, GenerateEffectData, (VolumeEffectFlags * __this, AmplifyColorBase * go));
IL2CPP_REGISTER_METHOD(0x030D4250, VolumeEffectComponentFlags *, FindComponentFlags, (VolumeEffectFlags * __this, String * compName));
IL2CPP_REGISTER_METHOD(0x030D43B0, String__Array *, GetComponentNames, (VolumeEffectFlags * __this));
}
