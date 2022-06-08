#include <interception_macros.h>

namespace app::methods::Moon::InteractionGraph::FinishedInteractionTransition {
IL2CPP_REGISTER_METHOD(0x0198D180, IInteractionNode *, get_TransitionDestination, (FinishedInteractionTransition * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOwnerEnter, (FinishedInteractionTransition * __this, IInteractionNode * owner));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnOwnerExit, (FinishedInteractionTransition * __this, IInteractionNode * owner));
IL2CPP_REGISTER_METHOD(0x0198D240, bool, Validate, (FinishedInteractionTransition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (FinishedInteractionTransition * __this));
}
