#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::CinematicEffects::DepthOfField {
IL2CPP_REGISTER_METHOD(0x02500C20, Shader *, get_filmicDepthOfFieldShader, (DepthOfField_1 * __this));
IL2CPP_REGISTER_METHOD(0x02500D30, Shader *, get_medianFilterShader, (DepthOfField_1 * __this));
IL2CPP_REGISTER_METHOD(0x02500E40, Shader *, get_textureBokehShader, (DepthOfField_1 * __this));
IL2CPP_REGISTER_METHOD(0x02500F50, Material *, get_filmicDepthOfFieldMaterial, (DepthOfField_1 * __this));
IL2CPP_REGISTER_METHOD(0x02501030, Material *, get_medianFilterMaterial, (DepthOfField_1 * __this));
IL2CPP_REGISTER_METHOD(0x02501110, Material *, get_textureBokehMaterial, (DepthOfField_1 * __this));
IL2CPP_REGISTER_METHOD(0x025011F0, ComputeBuffer *, get_computeBufferDrawArgs, (DepthOfField_1 * __this));
IL2CPP_REGISTER_METHOD(0x025013C0, ComputeBuffer *, get_computeBufferPoints, (DepthOfField_1 * __this));
IL2CPP_REGISTER_METHOD(0x02501540, void, OnEnable, (DepthOfField_1 * __this));
IL2CPP_REGISTER_METHOD(0x025016F0, void, OnDisable, (DepthOfField_1 * __this));
IL2CPP_REGISTER_METHOD(0x02501900, void, OnRenderImage, (DepthOfField_1 * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x02501BA0, void, DoDepthOfField, (DepthOfField_1 * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x02503030, void, DoHexagonalBlur, (DepthOfField_1 * __this, RenderTexture * blurredFgCoc, RenderTexture * * src, RenderTexture * * dst, float maxRadius));
IL2CPP_REGISTER_METHOD(0x02503600, void, DoOctogonalBlur, (DepthOfField_1 * __this, RenderTexture * blurredFgCoc, RenderTexture * * src, RenderTexture * * dst, float maxRadius));
IL2CPP_REGISTER_METHOD(0x02503CA0, void, DoCircularBlur, (DepthOfField_1 * __this, RenderTexture * blurredFgCoc, RenderTexture * * src, RenderTexture * * dst, float maxRadius));
IL2CPP_REGISTER_METHOD(0x02503E50, void, ComputeCocParameters, (DepthOfField_1 * __this, Vector4 * blurParams, Vector4 * blurCoe));
IL2CPP_REGISTER_METHOD(0x025043A0, void, ReleaseComputeResources, (DepthOfField_1 * __this));
IL2CPP_REGISTER_METHOD(0x025043F0, void, ComputeBlurDirections, (DepthOfField_1 * __this, bool force));
IL2CPP_REGISTER_METHOD(0x02504750, bool, get_shouldPerformBokeh, (DepthOfField_1 * __this));
IL2CPP_REGISTER_METHOD(0x02504850, void, Rotate2D, (Vector4 * direction, float cosinus, float sinus));
IL2CPP_REGISTER_METHOD(0x02504890, void, SwapRenderTexture, (RenderTexture * * src, RenderTexture * * dst));
IL2CPP_REGISTER_METHOD(0x025048A0, void, GetDirectionalBlurPassesFromRadius, (RenderTexture * blurredFgCoc, float maxRadius, int32_t * blurPass, int32_t * blurAndMergePass));
IL2CPP_REGISTER_METHOD(0x025049E0, void, __ctor, (DepthOfField_1 * __this));
}
