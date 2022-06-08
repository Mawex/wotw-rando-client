using namespace app;

namespace app::methods::Moon::Timeline::MoveCameraToPointAnimator {
IL2CPP_REGISTER_METHOD(0x00776550, GameObject *, get_ExternalTarget, (MoveCameraToPointAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (MoveCameraToPointAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00776600, void, OnStartPlayback, (MoveCameraToPointAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (MoveCameraToPointAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, MoonReference_1_UnityEngine_Transform_ *, GetTransformTarget, (MoveCameraToPointAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00776A40, void, OnDrawGizmosSelected, (MoveCameraToPointAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00776E50, void, SynchronizeData, (MoveCameraToPointAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x00776FB0, void, __ctor, (MoveCameraToPointAnimator * __this));
}
