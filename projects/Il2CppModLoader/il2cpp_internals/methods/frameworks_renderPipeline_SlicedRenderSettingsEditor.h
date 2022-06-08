#include <interception_macros.h>

namespace app::methods::frameworks::renderPipeline::SlicedRenderSettingsEditor {
IL2CPP_REGISTER_METHOD(0x00F62DD0, bool, get_IsEnabled, ());
IL2CPP_REGISTER_METHOD(0x00F62F30, bool, get_IsShowingOverride, ());
IL2CPP_REGISTER_METHOD(0x00F63050, DepthOfFieldController *, get_DofController, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHOD(0x00F63740, LayeredRenderSettings_LayerParams__Array *, GetLayersFromSettings, (SlicedRenderSettingsEditor * __this, LayeredRenderSettings * settings));
IL2CPP_REGISTER_METHOD(0x00F63890, LayeredRenderSettings *, get_SceneSettings, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHOD(0x00F640F0, void, EnsureImguiRegistered, (SlicedRenderSettingsEditor * __this, bool registered));
IL2CPP_REGISTER_METHOD(0x00F641F0, void, RestoreOriginals, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHOD(0x00F643F0, void, CopyDebugSlices, (SlicedRenderSettingsEditor * __this, MoonRenderPipelineDebug_Slice__Array * source, MoonRenderPipelineDebug_Slice__Array * dest));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreOriginals, (SlicedRenderSettingsEditor * __this, SceneSettingsComponent * sceneSettingsComp));
IL2CPP_REGISTER_METHOD(0x00F64690, void, RestoreOriginals, (SlicedRenderSettingsEditor * __this, DepthOfFieldController * dofController));
IL2CPP_REGISTER_METHOD(0x00F64890, void, RestoreTweaks, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreTweaks, (SlicedRenderSettingsEditor * __this, SceneSettingsComponent * sceneSettingsComp));
IL2CPP_REGISTER_METHOD(0x00F64B40, void, RestoreTweaks, (SlicedRenderSettingsEditor * __this, DepthOfFieldController * dofController));
IL2CPP_REGISTER_METHOD(0x00F64CB0, void, Awake, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHOD(0x00F64E60, void, OnDestroy, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHOD(0x00F64F80, void, CreateLineMaterial, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHOD(0x00F65120, void, _updateUI, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHOD(0x00F65180, void, OnEnable, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHOD(0x00F653C0, void, OnDisable, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHOD(0x00F65610, void, OnEndOfFrame, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHODINFO(0x04753B18, SlicedRenderSettingsEditor_OnEndOfFrame__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F65620, void, Update, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHOD(0x00F65710, void, FixedUpdate, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHOD(0x00F66800, void, DrawBlurValue, (SlicedRenderSettingsEditor * __this, float value, float x, bool clipped, bool selected));
IL2CPP_REGISTER_METHOD(0x00F66AA0, void, DrawDepthValue, (SlicedRenderSettingsEditor * __this, float value, float x, bool selected));
IL2CPP_REGISTER_METHOD(0x00F66C50, void, DrawSliceRes, (SlicedRenderSettingsEditor * __this, float value, float x));
IL2CPP_REGISTER_METHOD(0x00F66D70, void, DrawDownscaleValue, (SlicedRenderSettingsEditor * __this, float value, float x, bool clipped, bool selected));
IL2CPP_REGISTER_METHOD(0x00F67020, void, Draw, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHOD(0x00F68200, void, DrawDrsValues, (SlicedRenderSettingsEditor * __this, float x, float y));
IL2CPP_REGISTER_METHOD(0x00F684C0, void, Show, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHOD(0x00F68520, void, Hide, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHOD(0x00F68580, float, ToXCoordinate, (SlicedRenderSettingsEditor * __this, float x));
IL2CPP_REGISTER_METHOD(0x00F68590, float, ToYCoordinate, (SlicedRenderSettingsEditor * __this, float y));
IL2CPP_REGISTER_METHOD(0x007458F0, void, DrawRectAbsolute, (SlicedRenderSettingsEditor * __this, float x1, float y1, float x2, float y2));
IL2CPP_REGISTER_METHOD(0x00F685A0, void, DrawRect, (SlicedRenderSettingsEditor * __this, float x1, float y1, float x2, float y2));
IL2CPP_REGISTER_METHOD(0x00F68680, void, DrawIntWithBackground, (SlicedRenderSettingsEditor * __this, int32_t value, Color backgroundColor, Color textColor, int32_t x, int32_t y, bool fakefloat));
IL2CPP_REGISTER_METHOD(0x00F69030, void, DrawMinus, (SlicedRenderSettingsEditor * __this, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x00F690B0, void, DrawNumber, (SlicedRenderSettingsEditor * __this, int32_t x, int32_t y, int32_t num, bool isLeading));
IL2CPP_REGISTER_METHOD(0x00F692F0, void, DrawDot, (SlicedRenderSettingsEditor * __this, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x00F69370, void, SuspendGameplay, ());
IL2CPP_REGISTER_METHOD(0x00F694B0, void, ResumeGameplay, ());
IL2CPP_REGISTER_METHOD(0x00F695F0, void, __ctor, (SlicedRenderSettingsEditor * __this));
IL2CPP_REGISTER_METHOD(0x00F69AA0, void, __cctor, ());
}
