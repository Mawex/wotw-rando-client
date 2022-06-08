#include <interception_macros.h>

namespace app::methods::StatisticianIdle {
IL2CPP_REGISTER_METHOD(0x009B7930, void, OnInitializeTask, (StatisticianIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009B7A90, void, OnEnterTask, (StatisticianIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009B7B50, BehaviourStatus__Enum, OnExecuteTask, (StatisticianIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009B8020, void, OnExitTask, (StatisticianIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (StatisticianIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (StatisticianIdle * __this));
IL2CPP_REGISTER_METHOD(0x009B8030, void, PlayTimeline, (StatisticianIdle * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x009B8250, void, ChangeState, (StatisticianIdle * __this, StatisticianIdle_IdleStates__Enum state));
IL2CPP_REGISTER_METHODINFO(0x0471CBA8, StatisticianIdle_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009B83E0, void, OnTimelineFinished, (StatisticianIdle * __this));
IL2CPP_REGISTER_METHODINFO(0x04705610, StatisticianIdle_OnTimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009B87B0, void, ChangeToRandomState, (StatisticianIdle * __this, StatisticianIdle_IdleStates__Enum__Array * states));
IL2CPP_REGISTER_METHOD(0x009B7A90, void, SetupRandomState, (StatisticianIdle * __this));
IL2CPP_REGISTER_METHOD(0x009B89B0, void, ResetIdle, (StatisticianIdle * __this));
IL2CPP_REGISTER_METHOD(0x009B8AB0, void, __ctor, (StatisticianIdle * __this));
}
