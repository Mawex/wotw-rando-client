#include <interception_macros.h>

namespace app::methods::LayeredRenderSettings {
IL2CPP_REGISTER_METHOD(0x00F267A0, LayeredRenderSettings_LayeredRenderSettingsPlatformOverride__Enum, get_CurrentPlatformOverride, ());
IL2CPP_REGISTER_METHOD(0x00F26840, LayeredRenderSettings_LayerParams__Array *, get_Layers, (LayeredRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x00F26BB0, float, get_FarPlane, (LayeredRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x00F26BE0, LayeredRenderSettings_LayerParams__Array *, GetLayersForOverride, (LayeredRenderSettings * __this, LayeredRenderSettings_LayeredRenderSettingsPlatformOverride__Enum overridePlatform));
IL2CPP_REGISTER_METHOD(0x00F26CC0, void, CopyFrom, (LayeredRenderSettings * __this, LayeredRenderSettings * copy));
IL2CPP_REGISTER_METHOD(0x00F27010, void, __ctor, (LayeredRenderSettings * __this, LayeredRenderSettings * copy));
IL2CPP_REGISTER_METHOD(0x00F274F0, bool, get_IsGameplay, (LayeredRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x00F27500, int32_t, GetLayerIndexForRenderer, (LayeredRenderSettings * __this, Renderer * renderer));
IL2CPP_REGISTER_METHOD(0x00F27790, void, Validate, (LayeredRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ISerializationCallbackReceiver_OnBeforeSerialize, (LayeredRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x00F27DC0, void, ISerializationCallbackReceiver_OnAfterDeserialize, (LayeredRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x00F27EB0, void, RefreshOverride, (LayeredRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x00F28100, LayeredRenderSettings_LayeredRenderSettingsOverride, EvaluateOverride, (LayeredRenderSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
