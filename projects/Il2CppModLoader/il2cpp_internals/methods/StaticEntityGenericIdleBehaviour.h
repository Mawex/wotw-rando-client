#include <interception_macros.h>

namespace app::methods::StaticEntityGenericIdleBehaviour {
IL2CPP_REGISTER_METHOD(0x009B6360, void, OnEnterTask, (StaticEntityGenericIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009B6420, void, PlayIdle, (StaticEntityGenericIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (StaticEntityGenericIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009B6590, void, OnExitTask, (StaticEntityGenericIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (StaticEntityGenericIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (StaticEntityGenericIdleBehaviour * __this));
}
