using namespace app;

namespace app::methods::Moon::Timeline::IKPostprocessPlayer {
IL2CPP_REGISTER_METHOD(0x0076F5E0, IKTargetBehaviour *, get_TargetBehaviour, (IKPostprocessPlayer * __this));
IL2CPP_REGISTER_METHOD(0x0076F720, void, OnUpdateEntity, (IKPostprocessPlayer * __this, float delta));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPausePlayback, (IKPostprocessPlayer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResumePlayback, (IKPostprocessPlayer * __this));
IL2CPP_REGISTER_METHOD(0x0076FB00, void, OnStartPlayback, (IKPostprocessPlayer * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0076FB90, void, OnStopPlayback, (IKPostprocessPlayer * __this));
IL2CPP_REGISTER_METHOD(0x0076FC40, void, __ctor, (IKPostprocessPlayer * __this));
}
