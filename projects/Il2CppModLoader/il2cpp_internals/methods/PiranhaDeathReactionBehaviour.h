#include <interception_macros.h>

namespace app::methods::PiranhaDeathReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x0115DCC0, void, OnInitializeTask, (PiranhaDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0115DDB0, void, OnEnterTask, (PiranhaDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0115E2F0, BehaviourStatus__Enum, OnExecuteTask, (PiranhaDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0115E5B0, void, StartTimeline, (PiranhaDeathReactionBehaviour * __this, MoonTimeline * timeline, Action * onFinnished));
IL2CPP_REGISTER_METHOD(0x00B6AF60, void, EndReaction, (PiranhaDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04714FF8, PiranhaDeathReactionBehaviour_EndReaction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0115E5F0, void, __ctor, (PiranhaDeathReactionBehaviour * __this));
}
