using namespace app;

namespace app::methods::Moon::EntityBehaviour {
IL2CPP_REGISTER_METHOD(0x002FBB80, EntityBehaviourDebugData *, get_DebugData, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x004C6660, EntityBehaviourStatus__Enum, get_Status, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00996540, bool, get_IsRunning, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0121D360, bool, get_IsInterrupted, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0121D370, bool, get_Succeded, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0121D380, bool, get_ShouldPauseTree, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0121D4A0, bool, get_ShouldPauseLocomotion, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, Entity *, get_Entity, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, List_1_Moon_IEntityBehaviour_ *, get_Children, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_Utility, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, Object *, get_ExecutingObject, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_ExecutingObject, (EntityBehaviour * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus_ *, get_OnEndBehaviourEvent, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_OnEndBehaviourEvent, (EntityBehaviour * __this, Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus_ * value));
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_BehaviourTime, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_BehaviourTime, (EntityBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x0121D5C0, void, OnEntityInitialization, (EntityBehaviour * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x00420EE0, EntityOwnedInitOrder__Enum, get_InitOrder, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0121D730, void, Execute, (EntityBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x0121D950, void, UpdateBehaviour, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0121D9D0, void, Interrupt, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0121DA90, void, EndBehaviour, (EntityBehaviour * __this, bool success));
IL2CPP_REGISTER_METHOD(0x0121DB70, void, ExecuteChildBehaviour, (EntityBehaviour * __this, IEntityBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InterruptChildBehaviour, (EntityBehaviour * __this, IEntityBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x00417870, bool, GetShouldPauseTree, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, GetShouldPauseLocomotion, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExecute, (EntityBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEndBehaviour, (EntityBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x0121DD70, void, InterruptChildren, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0121DE10, void, OnEndChildBehaviour, (EntityBehaviour * __this, IEntityBehaviour * behaviour, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHODINFO(0x04764958, EntityBehaviour_OnEndChildBehaviour__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintStatus, (EntityBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0121DF00, void, __ctor, (EntityBehaviour * __this));
}
