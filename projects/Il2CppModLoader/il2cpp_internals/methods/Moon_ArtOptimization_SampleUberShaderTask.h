#include <interception_macros.h>

namespace app::methods::Moon::ArtOptimization::SampleUberShaderTask {
IL2CPP_REGISTER_METHOD(0x00CAECA0, RenderTexture *, get_RenderTex, ());
IL2CPP_REGISTER_METHOD(0x00CAEF90, void, __ctor, (SampleUberShaderTask * __this, int32_t sampleIndex, float progress, ArtOptimizationDataModel * dataModel, UberShaderComponent * uberShader, Bounds bounds));
IL2CPP_REGISTER_METHOD(0x00CAEFC0, void, Update, (SampleUberShaderTask * __this));
IL2CPP_REGISTER_METHOD(0x00CAFD50, void, SaveSample, (SampleUberShaderTask * __this, Texture2D * sample, String * sampleName));
IL2CPP_REGISTER_METHOD(0x00CAFEF0, void, __cctor, ());
}
