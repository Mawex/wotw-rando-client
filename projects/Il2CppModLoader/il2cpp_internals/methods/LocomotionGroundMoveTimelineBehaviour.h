using namespace app;

namespace app::methods::LocomotionGroundMoveTimelineBehaviour {
IL2CPP_REGISTER_METHOD(0x00FC6960, bool, get_IsAnimationPlaying, (LocomotionGroundMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC69B0, void, PauseTimelinePlayback, (LocomotionGroundMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC6A00, void, ResumeTimelinePlayback, (LocomotionGroundMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetAnimationSpeed, (LocomotionGroundMoveTimelineBehaviour * __this, float speed));
IL2CPP_REGISTER_METHOD(0x00FC6A40, void, PlayAnimation, (LocomotionGroundMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC6DE0, void, OnMovementStoppedPlaying, (LocomotionGroundMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC6E20, void, OnEnterTask, (LocomotionGroundMoveTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC6F80, void, OnExitTask, (LocomotionGroundMoveTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC70C0, void, PlayAnimationIfNotPlaying, (LocomotionGroundMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC7140, void, OnTraversalSpeedChange, (LocomotionGroundMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC71E0, float, get_EffectiveMinSpeed, (LocomotionGroundMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC7200, float, get_EffectiveMaxSpeed, (LocomotionGroundMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00842340, void, __ctor, (LocomotionGroundMoveTimelineBehaviour * __this));
}
