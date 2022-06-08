#include <interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Rendering::CullResults {
IL2CPP_REGISTER_METHOD(0x001EC720, void, Init, (CullResults__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02433320, bool, GetCullingParameters, (Camera * camera, ScriptableCullingParameters * cullingParameters));
IL2CPP_REGISTER_METHOD(0x02433390, bool, GetCullingParameters_Internal, (Camera * camera, bool stereoAware, ScriptableCullingParameters * cullingParameters, int32_t managedCullingParametersSize));
IL2CPP_REGISTER_METHOD(0x02433410, void, Internal_Cull, (ScriptableCullingParameters * parameters, ScriptableRenderContext renderLoop, CullResults * results));
IL2CPP_REGISTER_METHOD(0x02433480, void, Cull, (ScriptableCullingParameters * parameters, ScriptableRenderContext renderLoop, CullResults * results));
IL2CPP_REGISTER_METHOD(0x024338A0, void, Internal_Cull_Injected, (ScriptableCullingParameters * parameters, ScriptableRenderContext * renderLoop, CullResults * results));
}
