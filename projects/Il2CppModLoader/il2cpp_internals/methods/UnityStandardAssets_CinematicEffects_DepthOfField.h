#include <interception_macros.h>

namespace app::methods::UnityStandardAssets_CinematicEffects::DepthOfField {
IL2CPP_REGISTER_METHOD(0x02500C20, Shader *, get_filmicDepthOfFieldShader, (app::DepthOfField_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02500D30, Shader *, get_medianFilterShader, (app::DepthOfField_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02500E40, Shader *, get_textureBokehShader, (app::DepthOfField_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02500F50, Material *, get_filmicDepthOfFieldMaterial, (app::DepthOfField_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02501030, Material *, get_medianFilterMaterial, (app::DepthOfField_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02501110, Material *, get_textureBokehMaterial, (app::DepthOfField_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x025011F0, ComputeBuffer *, get_computeBufferDrawArgs, (app::DepthOfField_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x025013C0, ComputeBuffer *, get_computeBufferPoints, (app::DepthOfField_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02501540, void, OnEnable, (app::DepthOfField_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x025016F0, void, OnDisable, (app::DepthOfField_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02501900, void, OnRenderImage, (app::DepthOfField_1 * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x02501BA0, void, DoDepthOfField, (app::DepthOfField_1 * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x02503030, void, DoHexagonalBlur, (app::DepthOfField_1 * this_ptr, app::RenderTexture * blurred_fg_coc, app::RenderTexture * * src, app::RenderTexture * * dst, float max_radius));
IL2CPP_REGISTER_METHOD(0x02503600, void, DoOctogonalBlur, (app::DepthOfField_1 * this_ptr, app::RenderTexture * blurred_fg_coc, app::RenderTexture * * src, app::RenderTexture * * dst, float max_radius));
IL2CPP_REGISTER_METHOD(0x02503CA0, void, DoCircularBlur, (app::DepthOfField_1 * this_ptr, app::RenderTexture * blurred_fg_coc, app::RenderTexture * * src, app::RenderTexture * * dst, float max_radius));
IL2CPP_REGISTER_METHOD(0x02503E50, void, ComputeCocParameters, (app::DepthOfField_1 * this_ptr, app::Vector4 * blur_params, app::Vector4 * blur_coe));
IL2CPP_REGISTER_METHOD(0x025043A0, void, ReleaseComputeResources, (app::DepthOfField_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x025043F0, void, ComputeBlurDirections, (app::DepthOfField_1 * this_ptr, bool force));
IL2CPP_REGISTER_METHOD(0x02504750, bool, get_shouldPerformBokeh, (app::DepthOfField_1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02504850, void, Rotate2D, (app::Vector4 * direction, float cosinus, float sinus));
IL2CPP_REGISTER_METHOD(0x02504890, void, SwapRenderTexture, (app::RenderTexture * * src, app::RenderTexture * * dst));
IL2CPP_REGISTER_METHOD(0x025048A0, void, GetDirectionalBlurPassesFromRadius, (app::RenderTexture * blurred_fg_coc, float max_radius, app::int32_t * blur_pass, app::int32_t * blur_and_merge_pass));
IL2CPP_REGISTER_METHOD(0x025049E0, void, __ctor, (app::DepthOfField_1 * this_ptr));
}
