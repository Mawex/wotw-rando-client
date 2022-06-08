#include <interception_macros.h>

namespace app::methods::Moon::InteractionGraph::InteractionNode {
IL2CPP_REGISTER_METHOD(0x0198ECE0, IInteractionActor *, get_Actor, (InteractionNode * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, Action_1_IContext_ *, get_OnActivated, (InteractionNode * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_OnActivated, (InteractionNode * __this, Action_1_IContext_ * value));
IL2CPP_REGISTER_METHOD(0x002FBBE0, Action_1_IContext_ *, get_OnFinished, (InteractionNode * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_OnFinished, (InteractionNode * __this, Action_1_IContext_ * value));
IL2CPP_REGISTER_METHOD(0x0198EDA0, void, Finalize, (InteractionNode * __this));
IL2CPP_REGISTER_METHOD(0x0198EE30, void, OnDestroy, (InteractionNode * __this));
IL2CPP_REGISTER_METHOD(0x0198EE40, void, MoonCleanup, (InteractionNode * __this));
IL2CPP_REGISTER_METHOD(0x0198EF20, List_1_Moon_InteractionGraph_IInteractionTransition_ *, get_Transitions, (InteractionNode * __this));
IL2CPP_REGISTER_METHOD(0x0198F1A0, List_1_Moon_InteractionGraph_IInteractionNodeDecorator_ *, get_Decorators, (InteractionNode * __this));
IL2CPP_REGISTER_METHOD(0x00C03C70, InteractionNodeStatus__Enum, get_InteractionNodeStatus, (InteractionNode * __this));
IL2CPP_REGISTER_METHOD(0x00C03C80, void, set_InteractionNodeStatus, (InteractionNode * __this, InteractionNodeStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x0198F420, bool, get_HasInputTransitions, (InteractionNode * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, InteractionSettings *, get_InteractionSettings, (InteractionNode * __this));
IL2CPP_REGISTER_METHOD(0x0198ECE0, IInteractionActor *, get_ResolvedActor, (InteractionNode * __this));
IL2CPP_REGISTER_METHOD(0x0198F4B0, void, Initialize, (InteractionNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (InteractionNode * __this));
IL2CPP_REGISTER_METHOD(0x0198F650, void, OnEnter, (InteractionNode * __this));
IL2CPP_REGISTER_METHOD(0x0198FC00, void, OnExit, (InteractionNode * __this));
IL2CPP_REGISTER_METHOD(0x00B91440, int32_t, GetStateId, (InteractionNode * __this));
IL2CPP_REGISTER_METHOD(0x0198FEB0, void, __ctor, (InteractionNode * __this));
}
