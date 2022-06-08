using namespace app;

namespace app::methods::Moon::ArtOptimization::ArtOptimizationDataModel {
IL2CPP_REGISTER_METHOD(0x002FB9B0, TexturesPool *, get_Pool, (ArtOptimizationDataModel * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_SceneGuid, (ArtOptimizationDataModel * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_SceneGuid, (ArtOptimizationDataModel * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01340020, void, __ctor, (ArtOptimizationDataModel * __this, String * sceneGuid));
IL2CPP_REGISTER_METHOD(0x01340430, void, Clear, (ArtOptimizationDataModel * __this));
IL2CPP_REGISTER_METHOD(0x013404E0, void, InitTexturesPool, (ArtOptimizationDataModel * __this));
IL2CPP_REGISTER_METHOD(0x01340770, void, DumpPool, (ArtOptimizationDataModel * __this));
IL2CPP_REGISTER_METHOD(0x01340790, SerializableUberShaderWrapper *, GetSerializableWrapper, (ArtOptimizationDataModel * __this, UberShaderComponent * uberShader));
IL2CPP_REGISTER_METHOD(0x01340990, UberShaderWrapper *, GetOrCreateWrapper, (ArtOptimizationDataModel * __this, UberShaderComponent * uberShader));
IL2CPP_REGISTER_METHOD(0x01340B90, void, Rebind, (ArtOptimizationDataModel * __this, List_1_UberShaderComponent_ * uberShaders));
IL2CPP_REGISTER_METHOD(0x01340E70, void, CleanUp, (ArtOptimizationDataModel * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_ *, get_UberShaders, (ArtOptimizationDataModel * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ *, get_UberShadersMap, (ArtOptimizationDataModel * __this));
IL2CPP_REGISTER_METHOD(0x013410B0, void, SaveReport, (ArtOptimizationDataModel * __this));
}
