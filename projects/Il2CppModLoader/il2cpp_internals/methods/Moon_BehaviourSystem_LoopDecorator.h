using namespace app;

namespace app::methods::Moon::BehaviourSystem::LoopDecorator {
IL2CPP_REGISTER_METHOD(0x0300E920, void, OnEnter, (LoopDecorator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0300E960, BehaviourStatus__Enum, OnExecute, (LoopDecorator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldEvaluateEachTick, (LoopDecorator * __this));
IL2CPP_REGISTER_METHOD(0x0300E9F0, void, __ctor, (LoopDecorator * __this));
}
