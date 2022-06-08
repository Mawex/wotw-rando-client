#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::DecoratorNode {
IL2CPP_REGISTER_METHOD(0x0300CEF0, BehaviourStatus__Enum, get_DecoratorStatus, (DecoratorNode * __this));
IL2CPP_REGISTER_METHOD(0x002FBC60, BehaviourNode *, get_Child, (DecoratorNode * __this));
IL2CPP_REGISTER_METHOD(0x0300CF40, void, set_Child, (DecoratorNode * __this, BehaviourNode * value));
IL2CPP_REGISTER_METHOD(0x0300D000, BehaviourStatus__Enum, Execute, (DecoratorNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0300D130, BehaviourStatus__Enum, ExecuteDecorator, (DecoratorNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0300D2D0, void, Reset, (DecoratorNode * __this, IContext * context, bool recursively));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldEvaluateEachTick, (DecoratorNode * __this));
IL2CPP_REGISTER_METHOD(0x0060C1C0, void, __ctor, (DecoratorNode * __this));
}
