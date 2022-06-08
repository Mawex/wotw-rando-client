#include <interception_macros.h>

namespace app::methods::SandWormUnclogBehaviour {
IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_IsWaterWorm, (SandWormUnclogBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00603D70, void, set_IsWaterWorm, (SandWormUnclogBehaviour * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00C27890, void, OnEntityInitialized, (SandWormUnclogBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C27960, void, OnEnter, (SandWormUnclogBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C28150, BehaviourStatus__Enum, OnExecute, (SandWormUnclogBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C28720, void, OnExit, (SandWormUnclogBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C28770, SandWormSandDigLocomotionBehaviour_SpeedEntry, GetSpeedSetting, (SandWormUnclogBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047641B8, SandWormUnclogBehaviour_GetSpeedSetting__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C28790, void, __ctor, (SandWormUnclogBehaviour * __this));
}
