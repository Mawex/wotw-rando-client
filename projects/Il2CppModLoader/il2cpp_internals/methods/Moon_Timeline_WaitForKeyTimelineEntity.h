using namespace app;

namespace app::methods::Moon::Timeline::WaitForKeyTimelineEntity {
IL2CPP_REGISTER_METHOD(0x0064D960, float, get_CurrentTime, (WaitForKeyTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E93050, void, OnStartPlayback, (WaitForKeyTimelineEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (WaitForKeyTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPausePlayback, (WaitForKeyTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResumePlayback, (WaitForKeyTimelineEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E93060, void, OnUpdateEntity, (WaitForKeyTimelineEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHODINFO(0x0472DEA0, WaitForKeyTimelineEntity_OnUpdateEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, HasFinished, (WaitForKeyTimelineEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01E931A0, void, __ctor, (WaitForKeyTimelineEntity * __this));
}
