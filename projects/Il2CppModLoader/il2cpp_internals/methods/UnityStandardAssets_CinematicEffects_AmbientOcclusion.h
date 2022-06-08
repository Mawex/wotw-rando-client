#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::CinematicEffects::AmbientOcclusion {
IL2CPP_REGISTER_METHOD(0x024FC710, bool, get_isAmbientOnlySupported, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FC7A0, bool, get_isGBufferAvailable, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FC810, float, get_intensity, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FC830, float, get_radius, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x007FBA30, AmbientOcclusion_SampleCount__Enum, get_sampleCount, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FC8F0, int32_t, get_sampleCountValue, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FCA10, AmbientOcclusion_OcclusionSource__Enum, get_occlusionSource, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FCAC0, bool, get_downsampling, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FCAE0, bool, get_ambientOnly, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FCBB0, RenderTextureFormat__Enum, get_aoTextureFormat, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FCBE0, Shader *, get_aoShader, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FCCE0, Material *, get_aoMaterial, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FCDB0, CommandBuffer *, get_aoCommands, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FCF60, Camera *, get_targetCamera, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FCFE0, AmbientOcclusion_PropertyObserver, get_propertyObserver, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FD000, void, set_propertyObserver, (AmbientOcclusion * __this, AmbientOcclusion_PropertyObserver value));
IL2CPP_REGISTER_METHOD(0x002FBBA0, Mesh *, get_quadMesh, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FD010, void, BuildAOCommands, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FDE80, void, ExecuteAOPass, (AmbientOcclusion * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x024FEA60, void, UpdateMaterialProperties, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FEE80, void, OnEnable, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FF050, void, OnDisable, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FF170, void, Update, (AmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x024FF3D0, void, OnRenderImage, (AmbientOcclusion * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x024FF4C0, void, __ctor, (AmbientOcclusion * __this));
}
