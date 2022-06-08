#include <interception_macros.h>

namespace app::methods::HornBugDeathReaction {
IL2CPP_REGISTER_METHOD(0x00B69260, void, OnInitializeTask, (HornBugDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B69510, void, StartTimeline, (HornBugDeathReaction * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x00B69560, void, ResetTimeline, (HornBugDeathReaction * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00B69780, void, HandleCollision, (HornBugDeathReaction * __this, MoonControllerColliderHit hit));
IL2CPP_REGISTER_METHODINFO(0x04703298, HornBugDeathReaction_HandleCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B697D0, void, OnEnterTask, (HornBugDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B69C40, BehaviourStatus__Enum, OnExecuteTask, (HornBugDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B69D70, void, OnExitTask, (HornBugDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B69DB0, void, SetState, (HornBugDeathReaction * __this, HornBugDeathReaction_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00B69E80, void, EnterState, (HornBugDeathReaction * __this, HornBugDeathReaction_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00B69F00, void, ExitState, (HornBugDeathReaction * __this, HornBugDeathReaction_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00B69F30, void, UpdateState, (HornBugDeathReaction * __this, HornBugDeathReaction_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00B6A160, void, EnterHit, (HornBugDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00B6A190, void, EnterFall, (HornBugDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00B6A1C0, void, EnterDeathEnd, (HornBugDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00B6A350, void, ExitHit, (HornBugDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00B6A350, void, ExitFall, (HornBugDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00B6A350, void, ExitDeathEnd, (HornBugDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00B6A360, void, UpdateHit, (HornBugDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00B6A480, void, UpdateFall, (HornBugDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00B6A680, void, UpdateDeathEnd, (HornBugDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00B6A760, void, EnterDrown, (HornBugDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00B6AAA0, bool, InWater, (HornBugDeathReaction * __this, float checkOffset));
IL2CPP_REGISTER_METHOD(0x00B6AC70, void, UpdateDrown, (HornBugDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00B6A350, void, ExitDrown, (HornBugDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, ProcessRootMotion, (HornBugDeathReaction * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x047287A8, HornBugDeathReaction_ProcessRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B6AEB0, void, __ctor, (HornBugDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00B6AF60, void, _EnterDeathEnd_b__36_0, (HornBugDeathReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x04784C60, HornBugDeathReaction__EnterDeathEnd_b__36_0__MethodInfo);
}
