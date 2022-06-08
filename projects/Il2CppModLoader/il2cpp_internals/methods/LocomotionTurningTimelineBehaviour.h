using namespace app;

namespace app::methods::LocomotionTurningTimelineBehaviour {
IL2CPP_REGISTER_METHOD(0x006C14C0, bool, ShouldPauseLocomotion, (LocomotionTurningTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC9570, bool, get_IsPlaying, (LocomotionTurningTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC9590, void, OnInitializeTask, (LocomotionTurningTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC96B0, bool, CanCancel, (LocomotionTurningTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC96D0, void, PlayAnimation, (LocomotionTurningTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC98F0, bool, ShouldEndBehaviour, (LocomotionTurningTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FC9910, void, OnEnterTask, (LocomotionTurningTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC9950, BehaviourStatus__Enum, OnExecuteTask, (LocomotionTurningTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC9BE0, void, OnExitTask, (LocomotionTurningTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (LocomotionTurningTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, RootMotionModifier, (LocomotionTurningTimelineBehaviour * __this, Vector3 motion));
IL2CPP_REGISTER_METHOD(0x00FC9C40, void, __ctor, (LocomotionTurningTimelineBehaviour * __this));
}
