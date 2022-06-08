using namespace app;

namespace app::methods::Moon::Timeline::WaitTimelineEntity {
IL2CPP_REGISTER_METHOD(0x008693A0, float, get_CurrentTime, (WaitTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F0F850, void, OnStartPlayback, (WaitTimelineEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (WaitTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPausePlayback, (WaitTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResumePlayback, (WaitTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E93250, void, OnUpdateEntity, (WaitTimelineEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01E93580, void, __ctor, (WaitTimelineEntity * __this));
}
