using namespace app;

namespace app::methods::Moon::Timeline::FaderAnimatorEntity {
IL2CPP_REGISTER_METHOD(0x00769F00, void, OnStartPlayback, (FaderAnimatorEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0076A050, void, OnStopPlayback, (FaderAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076A1B0, void, OnUpdateEntity, (FaderAnimatorEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0076A1D0, void, SampleValue, (FaderAnimatorEntity * __this, float value));
IL2CPP_REGISTER_METHOD(0x0076A3C0, void, __ctor, (FaderAnimatorEntity * __this));
}
