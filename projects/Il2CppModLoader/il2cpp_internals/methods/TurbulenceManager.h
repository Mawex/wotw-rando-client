#include <interception_macros.h>

namespace app::methods::TurbulenceManager {
IL2CPP_REGISTER_METHOD(0x00B153C0, void, OnEnable, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00B15470, void, OnEditorEnable, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00B15510, void, OnEditorDisable, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00B155B0, int32_t, get_InfluencerCount, ());
IL2CPP_REGISTER_METHOD(0x00B15660, TurbulenceManagerBinder *, get_Binder, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00B157B0, SceneSettingsComponent *, get_m_currentSettings, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, Renderer *, get_TurbulenceMapRenderer, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00B159B0, int32_t, IndexByWeight, (TurbulenceManager * __this, int32_t count, float weight));
IL2CPP_REGISTER_METHOD(0x00B15A80, float, get_WorkingTime, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x008682A0, float, get_LegacyTimeLineSpeed, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00B15B30, void, set_LegacyTimeLineSpeed, (TurbulenceManager * __this, float value));
IL2CPP_REGISTER_METHOD(0x0091E0B0, float, get_LegacyTimeLineStrength, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00B15B40, void, set_LegacyTimeLineStrength, (TurbulenceManager * __this, float value));
IL2CPP_REGISTER_METHOD(0x008556D0, int32_t, get_TimelineSamplePriority, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00B15B50, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00B15C30, void, RegisterInfluencer, (ITurbulenceInfluencer * influencer));
IL2CPP_REGISTER_METHOD(0x00B15EE0, void, UnregisterInfluencer, (ITurbulenceInfluencer * influencer));
IL2CPP_REGISTER_METHOD(0x00B16000, void, ResetTimer, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00B16010, float, SampleTurbulenceValueAtTime, (TurbulenceManager * __this, float strength, float speed, float timeOffset, float time));
IL2CPP_REGISTER_METHOD(0x00B16190, float, GetStrengthMultiplier, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00B16500, float, GetSpeedMultiplier, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00B16870, void, UpdateWithDeltaTime, (TurbulenceManager * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00B16880, void, Update, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00B168E0, void, OnRenderObject, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00B16AF0, void, DoUpdate, (TurbulenceManager * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00B16E90, TurbulenceSettings *, GetTurbulenceSettings, (TurbulenceManager * __this, SceneSettings * sceneSettings));
IL2CPP_REGISTER_METHOD(0x00B16F70, void, StopAnimation, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00B16F80, void, TimelineSample, (TurbulenceManager * __this, float time));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EnterTimelinePreview, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitTimelinePreview, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00B16FB0, void, __ctor, (TurbulenceManager * __this));
IL2CPP_REGISTER_METHOD(0x00B17120, void, __cctor, ());
}
