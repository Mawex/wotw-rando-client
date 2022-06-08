#include <interception_macros.h>

namespace app::methods::MinerIdle {
IL2CPP_REGISTER_METHOD(0x0144BA50, void, OnInitializeTask, (MinerIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0144BB40, void, OnEnterTask, (MinerIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (MinerIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0144BE70, void, OnExitTask, (MinerIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (MinerIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (MinerIdle * __this));
IL2CPP_REGISTER_METHOD(0x0144BF90, void, PlayTimeline, (MinerIdle * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x0144C1D0, void, ChangeState, (MinerIdle * __this, MinerIdle_IdleStates__Enum state));
IL2CPP_REGISTER_METHODINFO(0x04793258, MinerIdle_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0144C310, MinerIdle_IdleStates__Enum, PickNewState, (MinerIdle * __this));
IL2CPP_REGISTER_METHOD(0x0144C4E0, void, OnTimelineFinished, (MinerIdle * __this));
IL2CPP_REGISTER_METHODINFO(0x04733340, MinerIdle_OnTimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0144C540, void, __ctor, (MinerIdle * __this));
IL2CPP_REGISTER_METHOD(0x0144C560, void, _OnEnterTask_b__11_0, (MinerIdle * __this));
IL2CPP_REGISTER_METHODINFO(0x047533C0, MinerIdle__OnEnterTask_b__11_0__MethodInfo);
}
