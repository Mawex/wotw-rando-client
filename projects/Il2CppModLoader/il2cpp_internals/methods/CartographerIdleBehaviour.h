using namespace app;

namespace app::methods::CartographerIdleBehaviour {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (CartographerIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B413A0, void, OnInitializeTask, (CartographerIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B414A0, void, PlayBaseIdle, (CartographerIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B41620, void, OnEnterTask, (CartographerIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B416E0, void, FinishBreakup, (CartographerIdleBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04728BD0, CartographerIdleBehaviour_FinishBreakup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B418E0, void, PlayBreakup, (CartographerIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B41C60, BehaviourStatus__Enum, OnExecuteTask, (CartographerIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B41CF0, void, OnExitTask, (CartographerIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (CartographerIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (CartographerIdleBehaviour * __this));
}
