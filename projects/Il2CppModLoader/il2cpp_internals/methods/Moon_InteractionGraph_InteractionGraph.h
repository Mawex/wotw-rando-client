#include <interception_macros.h>

namespace app::methods::Moon::InteractionGraph::InteractionGraph {
IL2CPP_REGISTER_METHOD(0x0198D6D0, IInteractionNode *, get_ResolvedRootNode, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x0198D790, IInteractionNode *, get_CurrentActiveNode, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsActive, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsSuspended, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x006DC040, void, set_IsSuspended, (InteractionGraph * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006DC050, SuspendableMask__Enum, get_Mask, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x0198D820, void, set_Mask, (InteractionGraph * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0198D8D0, IInteractionNode__Array *, get_Nodes, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x0198D900, void, Finalize, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x0198D930, void, OnDestroy, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x0198D930, void, MoonCleanup, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x0198D950, IInteractionNode__Array *, GetNodes, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x0198DAB0, void, OnEnable, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x0198DB70, void, OnDisable, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x0198DC30, void, Start, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x0198DC40, void, OnUpdate, (InteractionGraph * __this, float delta));
IL2CPP_REGISTER_METHOD(0x0198DF80, void, StartInteractionGraph, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x0198E2C0, void, StopInteractionGraph, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x0198E4A0, void, OnStateChanged, (InteractionGraph * __this, StateMachine_1 * sm));
IL2CPP_REGISTER_METHODINFO(0x0478E6C8, InteractionGraph_OnStateChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0198E540, void, BuildStateMachine, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (InteractionGraph * __this));
IL2CPP_REGISTER_METHOD(0x0198EA10, void, __ctor, (InteractionGraph * __this));
}
