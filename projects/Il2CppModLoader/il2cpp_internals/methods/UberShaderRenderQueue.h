#include <interception_macros.h>

namespace app::methods::UberShaderRenderQueue {
IL2CPP_REGISTER_METHOD(0x0191B0B0, double, GetUberComponentZ, (UberShaderComponent * component));
IL2CPP_REGISTER_METHOD(0x0191B460, int32_t, RenderlayerFromZ, (double z));
IL2CPP_REGISTER_METHOD(0x0191B7E0, void, SetQeueusFromZ, (double z, Renderer * renderer, bool inZRanges));
IL2CPP_REGISTER_METHOD(0x0191BD80, void, SetRenderQueueExplicit, (GameObject * go, float z));
IL2CPP_REGISTER_METHOD(0x0191BE50, void, SetRenderQueueExplicit, (Renderer * renderer, float z));
IL2CPP_REGISTER_METHOD(0x0191C5F0, void, __cctor, ());
}
