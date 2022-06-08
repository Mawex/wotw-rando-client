#include <interception_macros.h>

namespace app::methods::TurtleRollBackBehaviour {
IL2CPP_REGISTER_METHOD(0x013D85F0, void, OnEnterTask, (TurtleRollBackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, Finished, (TurtleRollBackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0471A3D0, TurtleRollBackBehaviour_Finished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420230, BehaviourStatus__Enum, OnExecuteTask, (TurtleRollBackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x013D8900, void, OnExitTask, (TurtleRollBackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, RootMotionRollBackModifier, (TurtleRollBackBehaviour * __this, Vector3 motion));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (TurtleRollBackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (TurtleRollBackBehaviour * __this));
}
