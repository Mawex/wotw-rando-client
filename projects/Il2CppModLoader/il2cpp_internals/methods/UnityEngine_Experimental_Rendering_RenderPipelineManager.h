#include <interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Rendering::RenderPipelineManager {
IL2CPP_REGISTER_METHOD(0x02523610, IRenderPipeline *, get_currentPipeline, ());
IL2CPP_REGISTER_METHOD(0x02523690, void, set_currentPipeline, (IRenderPipeline * value));
IL2CPP_REGISTER_METHOD(0x02523720, void, CleanupRenderPipeline, ());
IL2CPP_REGISTER_METHOD(0x02523970, void, DoRenderLoop_Internal, (IRenderPipelineAsset * pipe, Camera__Array * cameras, void * loopPtr));
IL2CPP_REGISTER_METHOD(0x02523BB0, void, PrepareRenderPipeline, (IRenderPipelineAsset * pipe));
}
