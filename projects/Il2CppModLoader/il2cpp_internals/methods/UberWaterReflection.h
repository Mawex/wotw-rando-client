using namespace app;

namespace app::methods::UberWaterReflection {
IL2CPP_REGISTER_METHOD(0x012A1000, UberWaterReflectionView *, GetView, (MoonRenderPipelineView * view));
IL2CPP_REGISTER_METHOD(0x012A1110, void, PrepareDrawRenderers, (MoonRenderPipelineView * view));
IL2CPP_REGISTER_METHOD(0x012A11C0, void, RenderAllVisible, (MoonRenderPipelineView * view, float currentDRSScale, float currentDRSScaleY));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (UberWaterReflection * __this));
IL2CPP_REGISTER_METHOD(0x012A1290, void, __cctor, (MethodInfo * method));
}
