using namespace app;

namespace app::methods::MeshTrailAnimator {
IL2CPP_REGISTER_METHOD(0x031119D0, MeshTrail *, get_MeshTrail, (MeshTrailAnimator * __this));
IL2CPP_REGISTER_METHOD(0x03111A60, void, OnStartPlayback, (MeshTrailAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03111BD0, void, OnUpdateEntity, (MeshTrailAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x03111CE0, void, OnStopPlayback, (MeshTrailAnimator * __this));
IL2CPP_REGISTER_METHOD(0x03111DB0, void, SynchronizeData, (MeshTrailAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x03111E40, void, __ctor, (MeshTrailAnimator * __this));
}
