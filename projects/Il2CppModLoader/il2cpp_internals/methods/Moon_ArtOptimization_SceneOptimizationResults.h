using namespace app;

namespace app::methods::Moon::ArtOptimization::SceneOptimizationResults {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_SceneName, (SceneOptimizationResults * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_SceneName, (SceneOptimizationResults * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00CAFFB0, void, __ctor, (SceneOptimizationResults * __this, String * sceneName));
IL2CPP_REGISTER_METHOD(0x00CB0140, void, RegisterStrippedModifier, (SceneOptimizationResults * __this, String * typeName));
IL2CPP_REGISTER_METHOD(0x002FB990, IReadOnlyDictionary_2_System_String_System_Int32_ *, get_StrippedModifiers, (SceneOptimizationResults * __this));
IL2CPP_REGISTER_METHOD(0x00CB0290, float, get_StrippedObjectsPercentage, (SceneOptimizationResults * __this));
IL2CPP_REGISTER_METHOD(0x00CB02B0, float, get_StrippedModifiersPercentage, (SceneOptimizationResults * __this));
IL2CPP_REGISTER_METHOD(0x00CB02D0, float, get_IgnoredObjectsPercenrage, (SceneOptimizationResults * __this));
IL2CPP_REGISTER_METHOD(0x00CB02F0, float, get_IgnoredModifiersPercentage, (SceneOptimizationResults * __this));
}
