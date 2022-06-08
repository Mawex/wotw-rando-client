using namespace app;

namespace app::methods::SceneSettingsComponent {
IL2CPP_REGISTER_METHOD(0x00BBDFF0, SceneSettings *, get_GetSettings, (SceneSettingsComponent * __this));
IL2CPP_REGISTER_METHOD(0x00BBE170, void, UpdateSceneSettings, (SceneSettingsComponent * __this));
IL2CPP_REGISTER_METHOD(0x00BBE6B0, void, ResetSettings, (SceneSettingsComponent * __this));
IL2CPP_REGISTER_METHOD(0x00BBE6D0, CameraSettings *, GetCameraSettings, (SceneSettingsComponent * __this));
IL2CPP_REGISTER_METHOD(0x002FBC20, FogGradientController *, get_SceneFogSettings, (SceneSettingsComponent * __this));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_SceneFogSettings, (SceneSettingsComponent * __this, FogGradientController * value));
IL2CPP_REGISTER_METHOD(0x00BBE850, bool, get_HasFogSettings, (SceneSettingsComponent * __this));
IL2CPP_REGISTER_METHOD(0x00BBE900, void, FixedUpdate, (SceneSettingsComponent * __this));
IL2CPP_REGISTER_METHOD(0x00BBE910, int32_t, GetHighestResolutionSliceIndex, (SceneSettingsComponent * __this));
IL2CPP_REGISTER_METHOD(0x00BBEA70, float, GetDownSamplingRatioForRenderer, (SceneSettingsComponent * __this, Renderer * renderer));
IL2CPP_REGISTER_METHOD(0x00BBEC50, float, GetDownSamplingRatioForRenderer, (Renderer * renderer, SliceRenderSettings_Slice__Array * slices, LayeredRenderSettings * layeredRenderSettings));
IL2CPP_REGISTER_METHOD(0x00BBED90, float, GetDofRatioForRenderer, (SceneSettingsComponent * __this, Renderer * renderer));
IL2CPP_REGISTER_METHOD(0x00BBEF60, float, GetDofRatioForRenderer, (Renderer * renderer, SliceRenderSettings_Slice__Array * slices, LayeredRenderSettings * layeredRenderSettings));
IL2CPP_REGISTER_METHOD(0x00BBF0A0, int32_t, GetLayerIndexForRenderer, (SceneSettingsComponent * __this, Renderer * renderer));
IL2CPP_REGISTER_METHOD(0x00BBF1E0, int32_t, GetLayerIndexForRenderer, (SceneSettingsComponent * __this, Renderer * renderer, SliceRenderSettings_Slice__Array * slices, LayeredRenderSettings * layeredRenderSettings));
IL2CPP_REGISTER_METHOD(0x00BBF300, void, __ctor, (SceneSettingsComponent * __this));
IL2CPP_REGISTER_METHOD(0x00BBF590, void, __cctor, (MethodInfo * method));
}
