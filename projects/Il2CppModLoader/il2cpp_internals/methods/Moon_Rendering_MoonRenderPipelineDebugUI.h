using namespace app;

namespace app::methods::Moon::Rendering::MoonRenderPipelineDebugUI {
IL2CPP_REGISTER_METHOD(0x007940D0, QualityProfile *, getProfile, (MoonRenderPipelineDebugUI * __this, MoonRenderPipelineDebugUI_Quality__Enum quality));
IL2CPP_REGISTER_METHODINFO(0x047619F8, MoonRenderPipelineDebugUI_getProfile__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00794310, void, Awake, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x00794690, void, OnEnable, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x00794790, void, OnDisable, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x00794820, void, SetDefaultQuality, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x007949E0, void, Start, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x00794A80, void, setQuality, (MoonRenderPipelineDebugUI * __this, MoonRenderPipelineDebugUI_Quality__Enum quality));
IL2CPP_REGISTER_METHOD(0x00794C30, void, Update, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x00794F60, void, FixedUpdate, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x00794F60, void, updateInput, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x00795040, void, OnGUI, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x00795200, void, drawContent, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x007956F0, void, drawFpsCounter, (MoonRenderPipelineDebugUI * __this, bool interactive));
IL2CPP_REGISTER_METHOD(0x00795A00, void, drawEarlyZInfo, (bool interactive));
IL2CPP_REGISTER_METHOD(0x00795DF0, void, drawRenderOptions, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x0079CFE0, void, DrawDebugPerSceneSettings, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x0079D540, void, drawRenderInfo, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x0079F250, void, updateTimings, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x0079F300, void, drawTimings, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x007A0730, void, startTimingCapture, (MoonRenderPipelineDebugUI * __this, bool profilerEnabled));
IL2CPP_REGISTER_METHOD(0x007A07A0, void, updateTimingCapture, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x007A1BE0, void, updateFpsCounter, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x007A1D40, RenderScope__Enum, ui_ToggleField, (MoonRenderPipelineDebugUI * __this, String * label, RenderScope__Enum value));
IL2CPP_REGISTER_METHOD(0x007A1E40, FloatRange, floatRange, (String * label, FloatRange value, float min, float max));
IL2CPP_REGISTER_METHOD(0x007A1FC0, bool, beginSection, (bool * foldout, String * label));
IL2CPP_REGISTER_METHOD(0x007A2160, void, beginSection, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x007A2290, void, endSection, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x007A2330, void, beginIndent, (float space));
IL2CPP_REGISTER_METHOD(0x007A23E0, void, endIndent, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x007A2400, void, __ctor, (MoonRenderPipelineDebugUI * __this));
IL2CPP_REGISTER_METHOD(0x007A26F0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x007A2980, void, _drawRenderInfo_g__resolutionButton_87_0, (MoonRenderPipelineAsset_XboxResolution__Enum resolution));
}
