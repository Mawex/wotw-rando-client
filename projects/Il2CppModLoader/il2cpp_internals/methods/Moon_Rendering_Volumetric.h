#include <interception_macros.h>

namespace app::methods::Moon::Rendering::Volumetric {
IL2CPP_REGISTER_METHOD(0x00EBEBD0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00EBECF0, bool, get_ShouldRender, (Volumetric * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, VolumetricConfig *, get_Config, ());
IL2CPP_REGISTER_METHOD(0x00EBEE50, void, Register, (VolumetricPointLight * light));
IL2CPP_REGISTER_METHOD(0x00EBEF70, void, Deregister, (VolumetricPointLight * light));
IL2CPP_REGISTER_METHOD(0x00EBF030, void, Register, (VolumetricAreaLight * light));
IL2CPP_REGISTER_METHOD(0x00EBF150, void, Deregister, (VolumetricAreaLight * light));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Begin, (Volumetric * __this));
IL2CPP_REGISTER_METHOD(0x00EBF210, void, End, (Volumetric * __this, CommandBuffer * cmd));
IL2CPP_REGISTER_METHOD(0x00EBF2A0, int32_t, GetResolutionFraction, (Volumetric * __this));
IL2CPP_REGISTER_METHOD(0x00EBF330, void, SetupConfig, (Volumetric * __this, CommandBuffer * cmd, float MieScatteringFactor, float RayAmount, float ExtinctionCoeff, float CameraRayMarchingStepSize, float LightRayMarchingStepSinceSize, bool EnableNoise, float NoiseSpeed, float NoiseSize, float NoiseStrength, float MaxPixelIntensity));
IL2CPP_REGISTER_METHOD(0x00EBF860, void, Render, (Volumetric * __this, Camera * cullCam, CommandBuffer * cmd, RenderTarget * depth, RenderTarget * lightBandWeights, RenderTargetIdentifier dest, int32_t slice, RenderTarget * alphaTex));
IL2CPP_REGISTER_METHOD(0x00EBF990, void, __ctor, (Volumetric * __this));
IL2CPP_REGISTER_METHOD(0x00EBFA20, void, __cctor, ());
}
