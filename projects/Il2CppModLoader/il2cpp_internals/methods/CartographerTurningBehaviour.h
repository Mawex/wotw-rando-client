using namespace app;

namespace app::methods::CartographerTurningBehaviour {
IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_TargetLookDirectionX, (CartographerTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x008D27B0, void, set_TargetLookDirectionX, (CartographerTurningBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x0074B550, float, get_CurrentTurningDirection, (CartographerTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (CartographerTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B47510, void, OnInitializeTask, (CartographerTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B47690, bool, get_IsPlaying, (CartographerTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B47770, void, OnEnterTask, (CartographerTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (CartographerTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008D2CA0, BehaviourStatus__Enum, OnExecuteTask, (CartographerTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B479E0, void, TurningFinished, (CartographerTurningBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04713630, CartographerTurningBehaviour_TurningFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B47C30, void, PlayAnimation, (CartographerTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B48030, void, SetAnimTime, (CartographerTurningBehaviour * __this, float time));
IL2CPP_REGISTER_METHOD(0x00B48190, bool, ShouldEndBehaviour, (CartographerTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (CartographerTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (CartographerTurningBehaviour * __this));
}
