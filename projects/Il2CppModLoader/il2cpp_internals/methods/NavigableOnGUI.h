using namespace app;

namespace app::methods::NavigableOnGUI {
IL2CPP_REGISTER_METHOD(0x00887DE0, bool, get_isSelected, (NavigableOnGUI_1 * __this));
IL2CPP_REGISTER_METHOD(0x00887E00, void, UpdateInput, (NavigableOnGUI_1 * __this));
IL2CPP_REGISTER_METHOD(0x00888080, void, ClearInput, (NavigableOnGUI_1 * __this));
IL2CPP_REGISTER_METHOD(0x008880A0, void, BeginOnGUI, (NavigableOnGUI_1 * __this));
IL2CPP_REGISTER_METHOD(0x008880C0, void, EndOnGUI, (NavigableOnGUI_1 * __this));
IL2CPP_REGISTER_METHOD(0x008880E0, void, BeginControl, (NavigableOnGUI_1 * __this));
IL2CPP_REGISTER_METHOD(0x00888320, void, EndControl, (NavigableOnGUI_1 * __this));
IL2CPP_REGISTER_METHOD(0x00888580, bool, Button, (NavigableOnGUI_1 * __this, String * label, GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x00888690, bool, Toggle, (NavigableOnGUI_1 * __this, bool value, String * label, GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x00888860, bool, Foldout, (NavigableOnGUI_1 * __this, bool value, String * label, GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x00888A60, float, HorizontalSlider, (NavigableOnGUI_1 * __this, float value, float min, float max, float minStep, GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x00888D40, float, FloatInput, (NavigableOnGUI_1 * __this, float value, GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x00888E60, int32_t, IntInput, (NavigableOnGUI_1 * __this, int32_t value, GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x00888EE0, void, BeginField, (NavigableOnGUI_1 * __this, String * label));
IL2CPP_REGISTER_METHOD(0x008890B0, void, EndField, (NavigableOnGUI_1 * __this));
IL2CPP_REGISTER_METHOD(0x008891A0, NavigableOnGUI_Field_1, GetField, (NavigableOnGUI_1 * __this, String * label));
IL2CPP_REGISTER_METHOD(0x008891D0, bool, ButtonField, (NavigableOnGUI_1 * __this, String * label));
IL2CPP_REGISTER_METHOD(0x00889330, bool, FoldoutField, (NavigableOnGUI_1 * __this, String * label, bool value));
IL2CPP_REGISTER_METHOD(0x00889480, bool, ToggleField, (NavigableOnGUI_1 * __this, String * label, bool value));
IL2CPP_REGISTER_METHOD(0x008895D0, float, SliderField, (NavigableOnGUI_1 * __this, String * label, float value, float min, float max));
IL2CPP_REGISTER_METHOD(0x008897F0, int32_t, SliderField, (NavigableOnGUI_1 * __this, String * label, int32_t value, int32_t min, int32_t max));
IL2CPP_REGISTER_METHOD(0x008899F0, float, FloatField, (NavigableOnGUI_1 * __this, String * label, float value));
IL2CPP_REGISTER_METHOD(0x00889B50, int32_t, IntField, (NavigableOnGUI_1 * __this, String * label, int32_t value));
IL2CPP_REGISTER_METHOD(0x00889C90, void, LabelField, (NavigableOnGUI_1 * __this, String * label, String * value));
IL2CPP_REGISTER_METHOD(0x00889D90, void, __ctor, (NavigableOnGUI_1 * __this));
IL2CPP_REGISTER_METHOD(0x00889DB0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0088A110, void, _UpdateInput_g__updateTracker_16_0, (NavigableOnGUI_1 * __this, NavigableOnGUI_Tracker_1 * tracker, Input_InputButtonProcessor * decrementButton, Input_InputButtonProcessor * incrementButton, bool updateChangingValue));
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_FXAADepthPrecull__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_FXAADepthPrecull__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04711B38, NavigableOnGUI_1_EnumField__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_DeferredLightingDebug__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_DeferredLightingDebug__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x047709E0, NavigableOnGUI_1_EnumField_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_FXAAHiRes__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_FXAAHiRes__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04740C40, NavigableOnGUI_1_EnumField_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_TLCCulling__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_TLCCulling__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04737C50, NavigableOnGUI_1_EnumField_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_TLCLighting__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_TLCLighting__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x0470A9A8, NavigableOnGUI_1_EnumField_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_TLCLightingDebug__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_TLCLightingDebug__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x047073B8, NavigableOnGUI_1_EnumField_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_FxaaQualityLevel__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_FxaaQualityLevel__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x047325A8, NavigableOnGUI_1_EnumField_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, SrpSampler_Scope__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, SrpSampler_Scope__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x0471B820, NavigableOnGUI_1_EnumField_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineDebugUI_QualityForInspector__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineDebugUI_QualityForInspector__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04779FF0, NavigableOnGUI_1_EnumField_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04711450, NavigableOnGUI_1_EnumField_9__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_WaterReflectionSortMode__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_WaterReflectionSortMode__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x0475DD68, NavigableOnGUI_1_EnumField_10__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_DofBlurType__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_DofBlurType__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04713768, NavigableOnGUI_1_EnumField_11__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_SliceCompositionType__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_SliceCompositionType__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04753928, NavigableOnGUI_1_EnumField_12__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineDebugUI_TextureQuality__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineDebugUI_TextureQuality__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04735628, NavigableOnGUI_1_EnumField_13__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, SceneRTAllocationPolicy__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, SceneRTAllocationPolicy__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x047545D0, NavigableOnGUI_1_EnumField_14__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, SliceRTAllocationPolicy__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, SliceRTAllocationPolicy__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04748A40, NavigableOnGUI_1_EnumField_15__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_FrameBufferFormat__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_FrameBufferFormat__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x0477E688, NavigableOnGUI_1_EnumField_16__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, RenderTextureFormat__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, RenderTextureFormat__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x047143D0, NavigableOnGUI_1_EnumField_17__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_FrameBufferDepth__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_FrameBufferDepth__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04750148, NavigableOnGUI_1_EnumField_18__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_XboxResolution__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_XboxResolution__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x0476DCD8, NavigableOnGUI_1_EnumField_19__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_DebugDownsample__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_DebugDownsample__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x047398B0, NavigableOnGUI_1_EnumField_20__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, ClearPolicy__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, ClearPolicy__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04752E48, NavigableOnGUI_1_EnumField_21__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, ClearFlagMode__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, ClearFlagMode__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x0478A6F0, NavigableOnGUI_1_EnumField_22__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_ClearSceneRT__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_ClearSceneRT__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04748B48, NavigableOnGUI_1_EnumField_23__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_ClearSliceBlurRT__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_ClearSliceBlurRT__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04723598, NavigableOnGUI_1_EnumField_24__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineDebugUI_MSAA__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineDebugUI_MSAA__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x0476C630, NavigableOnGUI_1_EnumField_25__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, FilterMode__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, FilterMode__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04765FE8, NavigableOnGUI_1_EnumField_26__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_HDRRecMode__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_HDRRecMode__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04717640, NavigableOnGUI_1_EnumField_27__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_MaskErasingFixType__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_MaskErasingFixType__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x047735D0, NavigableOnGUI_1_EnumField_28__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_POT__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_POT__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x0471AEB8, NavigableOnGUI_1_EnumField_29__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineDebugUI_SliceRangeMode__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineDebugUI_SliceRangeMode__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04754368, NavigableOnGUI_1_EnumField_30__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_RenderQueues__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_RenderQueues__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04723CD0, NavigableOnGUI_1_EnumField_31__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, SortFlags__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, SortFlags__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04768858, NavigableOnGUI_1_EnumField_32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, MoonRenderPipelineAsset_GodRaySampleCount__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, MoonRenderPipelineAsset_GodRaySampleCount__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x0474A0D0, NavigableOnGUI_1_EnumField_33__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F8C0, FullScreenMode__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, FullScreenMode__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHODINFO(0x04776E10, NavigableOnGUI_1_EnumField_34__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157F2E0, Int32Enum__Enum, EnumControl, (NavigableOnGUI_1 * __this, Int32Enum__Enum value, bool sliderMode));
IL2CPP_REGISTER_METHOD(0x0157F8C0, Int32Enum__Enum, EnumField, (NavigableOnGUI_1 * __this, String * label, Int32Enum__Enum value, bool sliderMode));
}
