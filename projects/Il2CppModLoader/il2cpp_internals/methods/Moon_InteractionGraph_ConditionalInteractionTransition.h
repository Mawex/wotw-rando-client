#include <interception_macros.h>

namespace app::methods::Moon::InteractionGraph::ConditionalInteractionTransition {
IL2CPP_REGISTER_METHOD(0x0198CE50, IInteractionNode *, get_TransitionDestination, (ConditionalInteractionTransition * __this));
IL2CPP_REGISTER_METHOD(0x0198CF10, ICondition *, get_ResolvedCondition, (ConditionalInteractionTransition * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOwnerEnter, (ConditionalInteractionTransition * __this, IInteractionNode * owner));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOwnerExit, (ConditionalInteractionTransition * __this, IInteractionNode * owner));
IL2CPP_REGISTER_METHOD(0x0198CFB0, bool, Validate, (ConditionalInteractionTransition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00626870, void, __ctor, (ConditionalInteractionTransition * __this));
}
