#include <interception_macros.h>

namespace app::methods::Moon_Rendering::MoonRenderPipelineManager {
IL2CPP_REGISTER_METHOD(0x007A2E40, MoonRenderPipelineAsset *, get_currentAsset, ());
IL2CPP_REGISTER_METHOD(0x007A2FE0, void, set_currentAsset, (app::MoonRenderPipelineAsset * value));
IL2CPP_REGISTER_METHOD(0x007A3030, MoonRenderPipeline *, get_currentPipeline, ());
}
