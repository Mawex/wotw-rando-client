using namespace app;

namespace app::methods::UberTurbulanceAnimator {
IL2CPP_REGISTER_METHOD(0x01291E10, float, get_SpeedWeight, (UberTurbulanceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01291E90, float, get_MagnitudeWeight, (UberTurbulanceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007F58D0, float, get_TurbulenceMagnitude, (UberTurbulanceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00623260, float, get_TurbulenceSpeed, (UberTurbulanceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, TurbulenceInfluencerOrder__Enum, get_TurbulenceApplyOrder, (UberTurbulanceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00763250, void, OnUpdateEntity, (UberTurbulanceAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01291F10, void, OnStartPlayback, (UberTurbulanceAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01291FB0, void, OnStopPlayback, (UberTurbulanceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01291FB0, void, OnDisable, (UberTurbulanceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01291FC0, void, OnStartWhenPlaybackOrPreview, (UberTurbulanceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01292060, void, OnStopWhenPlaybackOrPreview, (UberTurbulanceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01292100, void, UpdateAtTime, (UberTurbulanceAnimator * __this, float timeValue));
IL2CPP_REGISTER_METHOD(0x01292110, void, __ctor, (UberTurbulanceAnimator * __this));
}
