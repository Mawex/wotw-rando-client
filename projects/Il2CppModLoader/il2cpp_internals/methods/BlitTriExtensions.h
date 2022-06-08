#include <interception_macros.h>

namespace app::methods::BlitTriExtensions {
IL2CPP_REGISTER_METHOD(0x00D2B910, Material *, get_defaultMaterial, ());
IL2CPP_REGISTER_METHOD(0x00D2BBE0, int32_t, UpdateSmartBlitProps, (CommandBuffer * cmd, Viewport * vp, int32_t quadSize));
IL2CPP_REGISTER_METHOD(0x00D2BDB0, void, BlitTri, (CommandBuffer * cmd, RenderTargetIdentifier source, Material * material, int32_t pass, Nullable_1_UnityEngine_Vector4_ sourceST, Nullable_1_UnityEngine_Rect_ destinationViewport, int32_t smartCnt, bool sourceIsMS));
IL2CPP_REGISTER_METHOD(0x00D2C300, void, BlitTri, (CommandBuffer * cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, Material * material, int32_t pass, Nullable_1_UnityEngine_Vector4_ sourceST, Nullable_1_UnityEngine_Rect_ destinationViewport, Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_ depth, int32_t smartCnt, bool sourceIsMS));
IL2CPP_REGISTER_METHOD(0x00D2C580, void, BlitTri, (CommandBuffer * cmd, RenderTargetIdentifier source, RenderTargetIdentifier destination, Material * material, int32_t pass, Nullable_1_UnityEngine_Vector2_ sourceScale, Vector2 sourceOffset, Nullable_1_UnityEngine_Rect_ destinationViewport, Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_ depth, int32_t smartCnt, bool sourceIsMS));
IL2CPP_REGISTER_METHOD(0x00D2C7C0, void, BlitTri, (CommandBuffer * cmd, RenderTargetIdentifier source, RenderTargetIdentifier__Array * destination, Material * material, int32_t pass, Nullable_1_UnityEngine_Vector2_ sourceScale, Vector2 sourceOffset, Nullable_1_UnityEngine_Rect_ destinationViewport, Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_ depth, int32_t smartCnt, bool sourceIsMS));
IL2CPP_REGISTER_METHOD(0x00D2CA50, void, __cctor, ());
}
