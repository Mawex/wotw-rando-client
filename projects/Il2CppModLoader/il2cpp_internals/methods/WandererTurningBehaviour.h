using namespace app;

namespace app::methods::WandererTurningBehaviour {
IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_TargetLookDirectionX, (WandererTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x008D27B0, void, set_TargetLookDirectionX, (WandererTurningBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x008D27C0, float, get_CurrentTurningDirection, (WandererTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (WandererTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008D27D0, void, OnInitializeTask, (WandererTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008D2950, bool, get_IsPlaying, (WandererTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x008D2A30, void, OnEnterTask, (WandererTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (WandererTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008D2CA0, BehaviourStatus__Enum, OnExecuteTask, (WandererTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008D2CE0, void, TurningFinished, (WandererTurningBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04792BD0, WandererTurningBehaviour_TurningFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008D2F30, void, PlayAnimation, (WandererTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x008D3370, void, SetAnimTime, (WandererTurningBehaviour * __this, float time));
IL2CPP_REGISTER_METHOD(0x008D34D0, bool, ShouldEndBehaviour, (WandererTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (WandererTurningBehaviour * __this));
}
