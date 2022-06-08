using namespace app;

namespace app::methods::Moon::Timeline::TimescaleAnimator {
IL2CPP_REGISTER_METHOD(0x00D0B430, void, OnStartPlayback, (TimescaleAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D0B4A0, float, GetTimeScaleToApply, (TimescaleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D0B600, void, OnUpdateEntity, (TimescaleAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00D0B730, void, OnStopPlayback, (TimescaleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D0B770, void, OnBeforeSerialize, (TimescaleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (TimescaleAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D0B7E0, void, __ctor, (TimescaleAnimator * __this));
}
