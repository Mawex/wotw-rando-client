using namespace app;

namespace app::methods::Moon::ArtOptimization::AnimationSampleUberShaderTask {
IL2CPP_REGISTER_METHOD(0x0133EB10, RenderTexture *, get_RenderTex, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0133EE00, void, __ctor, (AnimationSampleUberShaderTask * __this, int32_t sampleIndex, int32_t animSampleIndex, float progress, ArtOptimizationDataModel * dataModel, UberShaderComponent * uberShader, Bounds bounds));
IL2CPP_REGISTER_METHOD(0x0133EE40, void, OnEnterContext, (AnimationSampleUberShaderTask * __this, IOptimizationTask * antecedent, Object * contextData));
IL2CPP_REGISTER_METHOD(0x0133EE50, void, Update, (AnimationSampleUberShaderTask * __this));
IL2CPP_REGISTER_METHOD(0x0133FDC0, void, SaveSample, (AnimationSampleUberShaderTask * __this, Texture2D * sample, String * sampleName));
IL2CPP_REGISTER_METHOD(0x0133FF60, void, __cctor, (MethodInfo * method));
}
