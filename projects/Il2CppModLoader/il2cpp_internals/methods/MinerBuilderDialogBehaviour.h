#include <interception_macros.h>

namespace app::methods::MinerBuilderDialogBehaviour {
IL2CPP_REGISTER_METHOD(0x008519C0, BuilderNPC_State__Enum, get_DialogState, (MinerBuilderDialogBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x008519D0, void, set_DialogState, (MinerBuilderDialogBehaviour * __this, BuilderNPC_State__Enum value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (MinerBuilderDialogBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x014461C0, void, OnExecute, (MinerBuilderDialogBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x01446460, void, OnEndBehaviour, (MinerBuilderDialogBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x01446610, void, OnUpdateBehaviour, (MinerBuilderDialogBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01446B50, bool, GetShouldPauseTree, (MinerBuilderDialogBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01446BA0, void, OnEndTurningBehaviourEvent, (MinerBuilderDialogBehaviour * __this, EntityTask * behaviour, BehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHODINFO(0x04713900, MinerBuilderDialogBehaviour_OnEndTurningBehaviourEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01446C00, void, HandleHint, (MinerBuilderDialogBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01446FE0, void, BeginInteraction, (MinerBuilderDialogBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01447290, void, EndInteraction, (MinerBuilderDialogBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x014472C0, void, OnDialog, (MinerBuilderDialogBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047033E0, MinerBuilderDialogBehaviour_OnDialog__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014472E0, void, OnGoFixCanon, (MinerBuilderDialogBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0477A460, MinerBuilderDialogBehaviour_OnGoFixCanon__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (MinerBuilderDialogBehaviour * __this));
}
