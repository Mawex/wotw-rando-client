#include <interception_macros.h>

namespace app::methods::Kino::Motion_ReconstructionFilter {
IL2CPP_REGISTER_METHOD(0x01228630, void, __ctor, (Motion_ReconstructionFilter * __this));
IL2CPP_REGISTER_METHOD(0x01228880, void, Release, (Motion_ReconstructionFilter * __this));
IL2CPP_REGISTER_METHOD(0x01228970, void, ProcessImage, (Motion_ReconstructionFilter * __this, float shutterAngle, int32_t sampleCount, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x01229110, bool, CheckTextureFormatSupport, (Motion_ReconstructionFilter * __this));
IL2CPP_REGISTER_METHOD(0x01229150, RenderTexture *, GetTemporaryRT, (Motion_ReconstructionFilter * __this, Texture * source, int32_t divider, RenderTextureFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x01229280, void, ReleaseTemporaryRT, (Motion_ReconstructionFilter * __this, RenderTexture * rt));
}
