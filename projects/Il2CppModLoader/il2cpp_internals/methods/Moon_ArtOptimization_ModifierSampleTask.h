using namespace app;

namespace app::methods::Moon::ArtOptimization::ModifierSampleTask {
IL2CPP_REGISTER_METHOD(0x0134BD60, RenderTexture *, get_RenderTex, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0134C050, void, __ctor, (ModifierSampleTask * __this, int32_t index, float progress, ArtOptimizationDataModel * dataModel, UberShaderComponent * uberShader, UberShaderModifier * modifier));
IL2CPP_REGISTER_METHOD(0x0134C070, bool, IsModifierTypeIgnored, (ModifierSampleTask * __this, Type * modifierType));
IL2CPP_REGISTER_METHOD(0x0134C110, void, Update, (ModifierSampleTask * __this));
IL2CPP_REGISTER_METHOD(0x0134CCC0, void, SaveSample, (ModifierSampleTask * __this, Texture2D * sample, String * sampleName));
IL2CPP_REGISTER_METHOD(0x0134CE60, void, __cctor, (MethodInfo * method));
}
