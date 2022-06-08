#include <interception_macros.h>

namespace app::methods::LizardLocomotionBehaviour {
IL2CPP_REGISTER_METHOD(0x00FB0BA0, Transform *, get_VFXHolder, (LizardLocomotionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FB0BD0, void, Prewarm, (LizardLocomotionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00FB1060, void, OnInitializeTask, (LizardLocomotionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FB1250, void, OnEnterTask, (LizardLocomotionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FB1400, BehaviourStatus__Enum, OnExecuteTask, (LizardLocomotionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FB1490, void, OnExitTask, (LizardLocomotionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FB15E0, void, UpdateVFX, (LizardLocomotionBehaviour * __this, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHOD(0x00FB16B0, void, StopRunningEfffect, (LizardLocomotionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00842340, void, __ctor, (LizardLocomotionBehaviour * __this));
}
