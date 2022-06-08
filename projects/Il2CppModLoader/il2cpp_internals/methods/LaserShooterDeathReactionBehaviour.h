#include <interception_macros.h>

namespace app::methods::LaserShooterDeathReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00F134D0, void, OnInitializeTask, (LaserShooterDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F13520, void, OnEnterTask, (LaserShooterDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (LaserShooterDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F13730, void, StartTimeline, (LaserShooterDeathReactionBehaviour * __this, MoonTimeline * timeline, Action * onFinnished));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (LaserShooterDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, _OnEnterTask_b__4_0, (LaserShooterDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04766178, LaserShooterDeathReactionBehaviour__OnEnterTask_b__4_0__MethodInfo);
}
