using namespace app;

namespace app::methods::LizardLocomotionTurningTimelineBehaviour {
IL2CPP_REGISTER_METHOD(0x00FB17C0, Transform *, get_VFXHolder, (LizardLocomotionTurningTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FB17F0, void, Prewarm, (LizardLocomotionTurningTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FB1C80, void, OnInitializeTask, (LizardLocomotionTurningTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FB1DB0, void, OnEnterTask, (LizardLocomotionTurningTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FB1E40, BehaviourStatus__Enum, OnExecuteTask, (LizardLocomotionTurningTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FB1ED0, void, OnExitTask, (LizardLocomotionTurningTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FB1F30, Vector3, RootMotionModifier, (LizardLocomotionTurningTimelineBehaviour * __this, Vector3 motion));
IL2CPP_REGISTER_METHOD(0x00FB20E0, bool, IsToNearToLedge, (LizardLocomotionTurningTimelineBehaviour * __this, float direction));
IL2CPP_REGISTER_METHOD(0x00FB2130, void, UpdateVFX, (LizardLocomotionTurningTimelineBehaviour * __this, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHOD(0x00FB2200, void, StopRunningEfffect, (LizardLocomotionTurningTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FB2310, void, __ctor, (LizardLocomotionTurningTimelineBehaviour * __this));
}
