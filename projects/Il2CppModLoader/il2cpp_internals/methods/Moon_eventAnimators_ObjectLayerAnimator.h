using namespace app;

namespace app::methods::Moon::eventAnimators::ObjectLayerAnimator {
IL2CPP_REGISTER_METHOD(0x00F2CAF0, void, OnStartPlayback, (ObjectLayerAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F2CBF0, void, OnUpdateEntity, (ObjectLayerAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00F2CCF0, void, OnStopPlayback, (ObjectLayerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00F2CD10, void, SynchronizeData, (ObjectLayerAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x00773A00, void, __ctor, (ObjectLayerAnimator * __this));
}
