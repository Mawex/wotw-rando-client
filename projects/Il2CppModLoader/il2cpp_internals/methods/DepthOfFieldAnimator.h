using namespace app;

namespace app::methods::DepthOfFieldAnimator {
IL2CPP_REGISTER_METHOD(0x002FBC20, LayeredRenderSettings *, get_LayeredRenderSettings, (DepthOfFieldAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FC510, float, get_LayeredRenderSettingsWeight, (DepthOfFieldAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B83350, void, set_LayeredRenderSettingsWeight, (DepthOfFieldAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FBC00, SliceRenderSettings *, get_SliceRenderInfluenceSettings, (DepthOfFieldAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_SliceRenderSettingsWeight, (DepthOfFieldAnimator * __this));
IL2CPP_REGISTER_METHOD(0x008D27B0, void, set_SliceRenderSettingsWeight, (DepthOfFieldAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x008556D0, SliceRenderSettingsInfluencerOrder__Enum, get_SliceRenderInfluenceOrder, (DepthOfFieldAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FC380, int32_t, get_SliceRenderInfluenceOrderOffset, (DepthOfFieldAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B83360, void, OnStartPlayback, (DepthOfFieldAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B83420, void, OnStartWhenPlaybackOrPreview, (DepthOfFieldAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B834D0, void, OnUpdateEntity, (DepthOfFieldAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00B834F0, void, UpdateWithTime, (DepthOfFieldAnimator * __this, float time));
IL2CPP_REGISTER_METHOD(0x00B83570, void, HandleLayerSettingsOverride, (DepthOfFieldAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B83770, void, OnStopPlayback, (DepthOfFieldAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B83770, void, OnDisable, (DepthOfFieldAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B83780, void, OnStopWhenPlaybackOrPreview, (DepthOfFieldAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B83920, void, CopySettingsFromScene, (DepthOfFieldAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B83BE0, void, __ctor, (DepthOfFieldAnimator * __this));
}
