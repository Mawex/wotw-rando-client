#include <interception_macros.h>

namespace app::methods::UnityEngine::Rendering::AsyncGPUReadback {
IL2CPP_REGISTER_METHOD(0x02973830, void, SetUpScriptingRequest, (AsyncGPUReadbackRequest request, Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_ * callback));
IL2CPP_REGISTER_METHOD(0x02973890, AsyncGPUReadbackRequest, Request, (Texture * src, int32_t mipIndex, Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_ * callback));
IL2CPP_REGISTER_METHOD(0x02973980, AsyncGPUReadbackRequest, Request_Internal_Texture_1, (Texture * src, int32_t mipIndex));
IL2CPP_REGISTER_METHOD(0x02973A10, void, Request_Internal_Texture_1_Injected, (Texture * src, int32_t mipIndex, AsyncGPUReadbackRequest * ret));
}
