#include <interception_macros.h>

namespace app::methods::Moon::Rendering::SliceRenderSettings_Slice {
IL2CPP_REGISTER_METHOD(0x00120380, void, Lerp, (SliceRenderSettings_Slice__Boxed * __this, SliceRenderSettings_Slice from, SliceRenderSettings_Slice to, float t));
IL2CPP_REGISTER_METHOD(0x00EBDA20, float, GetPixelRadius, (float blurAmount, int32_t resolutionX));
IL2CPP_REGISTER_METHOD(0x00EBDAE0, float, GetCameraMotionBlurPixelRadius, (float blurForce, float RTPixelSize));
IL2CPP_REGISTER_METHOD(0x00EBDBA0, int32_t, FindKernelByRadius, (Single__Array * kernelSettings, float kernelPixelRadius));
IL2CPP_REGISTER_METHOD(0x00EBDC20, void, GetComputeKernel, (float kernelPixelRadius, float camMovementDelta, int32_t * kernelPassIndex, int32_t * threadSize, int32_t * passMaxRadius, int32_t * passIndex));
IL2CPP_REGISTER_METHOD(0x00EBDDE0, int32_t, GetKernelPassIndex, (float kernelPixelRadius, float camMovementDelta, int32_t kernelBias, bool useBilinear, bool useLinMB));
IL2CPP_REGISTER_METHOD(0x00EBDFB0, String *, GetKernelPassName, (int32_t index));
IL2CPP_REGISTER_METHOD(0x00EBE080, String *, GetKernelPassName, (float kernelRadius, float minRTize, int32_t kernelBias, int32_t sliceIndex, float camMovementDelta, bool useLinMB));
IL2CPP_REGISTER_METHOD(0x00EBE190, void, __cctor, ());
}
