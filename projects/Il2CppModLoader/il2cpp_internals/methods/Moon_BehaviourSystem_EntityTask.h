#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::EntityTask {
IL2CPP_REGISTER_METHOD(0x002FB9B0, Entity *, get_Entity, (EntityTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, List_1_Moon_BehaviourSystem_EntityTask_ *, get_Children, (EntityTask * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, EntityBehaviourDebugData *, get_DebugData, (EntityTask * __this));
IL2CPP_REGISTER_METHOD(0x004E57A0, BehaviourStatus__Enum, get_TaskStatus, (EntityTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB6570, void, set_TaskStatus, (EntityTask * __this, BehaviourStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x00CB65C0, Nullable_1_Moon_BehaviourSystem_BehaviourStatus_, get_ForceReturnTaskStatus, (EntityTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB65D0, void, set_ForceReturnTaskStatus, (EntityTask * __this, Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ value));
IL2CPP_REGISTER_METHOD(0x00672040, bool, get_IsRunningOrBlocking, (EntityTask * __this));
IL2CPP_REGISTER_METHOD(0x00417920, EntityOwnedInitOrder__Enum, get_InitOrder, (EntityTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB65E0, void, OnInitializeTask, (EntityTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterTask, (EntityTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (EntityTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (EntityTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldPauseLocomotionIsConstant, (EntityTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB66D0, void, OnEntityInitialization, (EntityTask * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x00CB6830, void, EndTask, (EntityTask * __this, BehaviourStatus__Enum status));
IL2CPP_REGISTER_METHOD(0x00CB68D0, void, InternalExit, (EntityTask * __this, BehaviourStatus__Enum endStatus));
IL2CPP_REGISTER_METHOD(0x00CB6AB0, void, ExecuteChildTask, (EntityTask * __this, EntityTask * task));
IL2CPP_REGISTER_METHOD(0x00CB6CC0, void, OnEndChildBehaviour, (EntityTask * __this, EntityTask * task, BehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHODINFO(0x0476F980, EntityTask_OnEndChildBehaviour__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CB6DA0, void, __ctor, (EntityTask * __this));
}
