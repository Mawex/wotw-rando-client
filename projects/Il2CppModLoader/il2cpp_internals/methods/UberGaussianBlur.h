#include <interception_macros.h>

namespace app::methods::UberGaussianBlur {
IL2CPP_REGISTER_METHOD(0x013EDC90, void, BlurPingPong, (MoonRenderContext * ctx, RenderTarget * from, RenderTarget * temp, int32_t iterations, float blurSpread, RenderTargetIdentifier final_1, bool doFinal, Rect * viewport));
}
