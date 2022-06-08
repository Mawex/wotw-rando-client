#include <interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Rendering::RenderPipeline {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RenderPipeline * __this));
IL2CPP_REGISTER_METHOD(0x02434710, void, add_beginCameraRendering, (Action_1_UnityEngine_Camera_ * value));
IL2CPP_REGISTER_METHOD(0x02434810, void, remove_beginCameraRendering, (Action_1_UnityEngine_Camera_ * value));
IL2CPP_REGISTER_METHOD(0x02434910, void, Render, (RenderPipeline * __this, ScriptableRenderContext renderContext, Camera__Array * cameras));
IL2CPP_REGISTER_METHODINFO(0x04777420, RenderPipeline_Render__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F19AD0, bool, get_disposed, (RenderPipeline * __this));
IL2CPP_REGISTER_METHOD(0x0052C650, void, set_disposed, (RenderPipeline * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00B80D80, void, Dispose, (RenderPipeline * __this));
}
