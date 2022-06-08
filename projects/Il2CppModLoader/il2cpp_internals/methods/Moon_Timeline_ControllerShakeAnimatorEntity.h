#include <interception_macros.h>

namespace app::methods::Moon::Timeline::ControllerShakeAnimatorEntity {
IL2CPP_REGISTER_METHOD(0x00763150, void, OnPoolSpawned, (ControllerShakeAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (ControllerShakeAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00763160, float, get_CurrentShake, (ControllerShakeAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00763250, void, OnUpdateEntity, (ControllerShakeAnimatorEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00763150, void, OnStopPlayback, (ControllerShakeAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00763270, bool, get_ControllerShakeActive, (ControllerShakeAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x007632F0, float, get_ModifiedStrength, (ControllerShakeAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (ControllerShakeAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00763830, void, OnEnable, (ControllerShakeAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x007638F0, void, OnDisable, (ControllerShakeAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x007639D0, bool, ApproximateEvent, (ControllerShakeAnimatorEntity * __this, int32_t evt, float * time));
IL2CPP_REGISTER_METHOD(0x00763AE0, void, __ctor, (ControllerShakeAnimatorEntity * __this));
}
