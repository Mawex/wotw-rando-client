#include <interception_macros.h>

namespace app::methods::GasballDeathReaction {
IL2CPP_REGISTER_METHOD(0x0041DB70, void, SetInstantDeath, (GasballDeathReaction * __this, bool instantDeath));
IL2CPP_REGISTER_METHOD(0x0041DB80, void, OnInitializeTask, (GasballDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0041DBD0, void, OnEnterTask, (GasballDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0041E2A0, void, SpawnExplosion, (GasballDeathReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x04778DE0, GasballDeathReaction_SpawnExplosion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0041E730, BehaviourStatus__Enum, OnExecuteTask, (GasballDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0041E870, void, EndReaction, (GasballDeathReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x0478DDD0, GasballDeathReaction_EndReaction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (GasballDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (GasballDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x0041EB70, void, __ctor, (GasballDeathReaction * __this));
}
