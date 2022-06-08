using namespace app;

namespace app::methods::NickDeathReaction {
IL2CPP_REGISTER_METHOD(0x005FC700, void, OnInitializeTask, (NickDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005FC990, void, StartTimeline, (NickDeathReaction * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x005FC9C0, void, ResetTimeline, (NickDeathReaction * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x005FCBE0, void, HandleCollision, (NickDeathReaction * __this, MoonControllerColliderHit hit));
IL2CPP_REGISTER_METHODINFO(0x04720C48, NickDeathReaction_HandleCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005FCC40, NickDeathReaction_DeathState__Enum, GetNextOnHitGroundState, (NickDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x005FCC70, void, OnEnterTask, (NickDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005FCDF0, BehaviourStatus__Enum, OnExecuteTask, (NickDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005FCE10, void, OnExitTask, (NickDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005FCE50, void, SetState, (NickDeathReaction * __this, NickDeathReaction_DeathState__Enum state));
IL2CPP_REGISTER_METHOD(0x005FCFF0, void, EnterState, (NickDeathReaction * __this, NickDeathReaction_DeathState__Enum state));
IL2CPP_REGISTER_METHOD(0x005FD150, void, ExitState, (NickDeathReaction * __this, NickDeathReaction_DeathState__Enum state));
IL2CPP_REGISTER_METHOD(0x005FD180, void, UpdateState, (NickDeathReaction * __this, NickDeathReaction_DeathState__Enum state));
IL2CPP_REGISTER_METHOD(0x005FD4A0, void, EnterHit, (NickDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x005FD4E0, void, EnterSpin, (NickDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x005FD510, void, EnterFall, (NickDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x005FD540, void, EnterBounce, (NickDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x005FD5E0, void, EnterDeathEnd, (NickDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x005FD610, void, ExitHit, (NickDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x005FD610, void, ExitSpin, (NickDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x005FD610, void, ExitFall, (NickDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x005FD610, void, ExitBounce, (NickDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x005FD610, void, ExitDeathEnd, (NickDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x005FD620, void, UpdateHit, (NickDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateSpin, (NickDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateFall, (NickDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x005FD740, void, UpdateBounce, (NickDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x005FD860, void, UpdateDeathEnd, (NickDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x005FD940, Vector3, ProcessRootMotion, (NickDeathReaction * __this, Vector3 motion));
IL2CPP_REGISTER_METHOD(0x005FD990, void, __ctor, (NickDeathReaction * __this));
}
