#include <interception_macros.h>

namespace app::methods::Moon::Rendering::MoonRenderPipeline {
IL2CPP_REGISTER_METHOD(0x007917F0, void, __ctor, (MoonRenderPipeline * __this, MoonRenderPipelineAsset * owner));
IL2CPP_REGISTER_METHOD(0x00791D00, void, Dispose, (MoonRenderPipeline * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, MoonRenderPipelineView *, get_currentView, (MoonRenderPipeline * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_currentView, (MoonRenderPipeline * __this, MoonRenderPipelineView * value));
IL2CPP_REGISTER_METHOD(0x00791D90, MoonRenderPipelineView *, get_gameView, (MoonRenderPipeline * __this));
IL2CPP_REGISTER_METHOD(0x00791DD0, MoonRenderPipelineView *, get_sceneView, (MoonRenderPipeline * __this));
IL2CPP_REGISTER_METHOD(0x00791E10, double, get_currentDRSScale, (MoonRenderPipeline * __this));
IL2CPP_REGISTER_METHOD(0x00791E20, double, get_currentDRSScaleY, (MoonRenderPipeline * __this));
IL2CPP_REGISTER_METHOD(0x00791E30, void, Render, (MoonRenderPipeline * __this, ScriptableRenderContext context, Camera__Array * cameras));
IL2CPP_REGISTER_METHOD(0x007928E0, MoonRenderPipelineViewType__Enum, getViewType, (Camera__Array * cameras, Camera * * camera));
IL2CPP_REGISTER_METHOD(0x00792930, void, __cctor, ());
}
