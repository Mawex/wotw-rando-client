#include <interception_macros.h>

namespace app::methods::Moon::ArtOptimization::AnimationModifierSampleTask {
IL2CPP_REGISTER_METHOD(0x0133CF00, RenderTexture *, get_RenderTex, ());
IL2CPP_REGISTER_METHOD(0x0133D1F0, void, __ctor, (AnimationModifierSampleTask * __this, int32_t index, int32_t animSampleIndex, float progress, ArtOptimizationDataModel * dataModel, UberShaderComponent * uberShader, UberShaderModifier * modifier));
IL2CPP_REGISTER_METHOD(0x0133D220, bool, IsModifierTypeIgnored, (AnimationModifierSampleTask * __this, Type * modifierType));
IL2CPP_REGISTER_METHOD(0x0133D2C0, void, OnEnterContext, (AnimationModifierSampleTask * __this, IOptimizationTask * antecedent, Object * contextData));
IL2CPP_REGISTER_METHOD(0x0133D2D0, void, Update, (AnimationModifierSampleTask * __this));
IL2CPP_REGISTER_METHOD(0x0133E290, void, SaveSample, (AnimationModifierSampleTask * __this, Texture2D * sample, String * sampleName));
IL2CPP_REGISTER_METHOD(0x0133E430, void, __cctor, ());
}
