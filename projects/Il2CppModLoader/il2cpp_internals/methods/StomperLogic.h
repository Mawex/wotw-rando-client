#include <interception_macros.h>

namespace app::methods::StomperLogic {
IL2CPP_REGISTER_METHOD(0x00659560, void, Awake, (StomperLogic * __this));
IL2CPP_REGISTER_METHOD(0x00659730, void, OnDestroy, (StomperLogic * __this));
IL2CPP_REGISTER_METHOD(0x00659900, void, CalculateDistance, (StomperLogic * __this));
IL2CPP_REGISTER_METHOD(0x00659F90, void, OnEnable, (StomperLogic * __this));
IL2CPP_REGISTER_METHOD(0x00659F90, void, Start, (StomperLogic * __this));
IL2CPP_REGISTER_METHOD(0x00659FA0, void, InitializeIfNeeded, (StomperLogic * __this));
IL2CPP_REGISTER_METHOD(0x0065A770, void, FixedUpdate, (StomperLogic * __this));
IL2CPP_REGISTER_METHOD(0x0065AD40, void, OnRestoreCheckpoint, (StomperLogic * __this));
IL2CPP_REGISTER_METHODINFO(0x04790BD8, StomperLogic_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0065AD80, void, UpdatePosition, (StomperLogic * __this));
IL2CPP_REGISTER_METHOD(0x0065B030, void, ChangeState, (StomperLogic * __this, StomperLogic_State__Enum state));
IL2CPP_REGISTER_METHOD(0x0065B1B0, void, PlayerTouchedTrigger, (StomperLogic * __this));
IL2CPP_REGISTER_METHOD(0x0065B250, void, MoveBody, (StomperLogic * __this, Rigidbody * rigidbody, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0065B560, bool, get_IsSuspended, (StomperLogic * __this));
IL2CPP_REGISTER_METHOD(0x0065B570, void, set_IsSuspended, (StomperLogic * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0065B580, SuspendableMask__Enum, get_Mask, (StomperLogic * __this));
IL2CPP_REGISTER_METHOD(0x0065B590, void, set_Mask, (StomperLogic * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBCC0, IMoonSetupAnimator *, get_MoonSetupAnimator, (StomperLogic * __this));
IL2CPP_REGISTER_METHOD(0x0065B650, void, set_MoonSetupAnimator, (StomperLogic * __this, IMoonSetupAnimator * value));
IL2CPP_REGISTER_METHOD(0x0065B720, void, PlaySound, (StomperLogic * __this, StomperVisuals_SoundEvent__Enum soundEvent));
IL2CPP_REGISTER_METHOD(0x0065B8A0, void, StopSound, (StomperLogic * __this, StomperVisuals_SoundEvent__Enum soundEvent));
IL2CPP_REGISTER_METHOD(0x0065BA40, void, SpawnStompDust, (StomperLogic * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0065BB30, void, PlayTriggerStomperTimeline, (StomperLogic * __this));
IL2CPP_REGISTER_METHOD(0x0065BCF0, void, PlayStomperFallingTimeline, (StomperLogic * __this));
IL2CPP_REGISTER_METHOD(0x0065BEB0, void, SetVisualsFixedJoint, (StomperLogic * __this, Rigidbody * body));
IL2CPP_REGISTER_METHOD(0x0065BF90, void, __ctor, (StomperLogic * __this));
}
