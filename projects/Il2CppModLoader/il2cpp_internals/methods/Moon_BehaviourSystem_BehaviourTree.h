#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::BehaviourTree {
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsInitialized, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsInitialized, (BehaviourTree * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, BehaviourNode *, get_Root, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Root, (BehaviourTree * __this, BehaviourNode * value));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_WasUpdateSkipped, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, IBehaviourNode *, get_LastExecutedLeafNode, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_LastExecutedLeafNode, (BehaviourTree * __this, IBehaviourNode * value));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_HasLastExecutedLeafNode, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x006DC040, void, set_HasLastExecutedLeafNode, (BehaviourTree * __this, bool value));
IL2CPP_REGISTER_METHOD(0x03006630, String *, get_SkippedUpdateReason, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, IBlackboard *, get_Blackboard, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x030066C0, BehaviourStatus__Enum, get_RootStatus, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x030066E0, void, Awake, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x030066F0, void, OnEnable, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x030067A0, void, OnDisable, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x03006850, void, OnDestroy, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x03006870, void, Finalize, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x03006850, void, MoonCleanup, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x030068A0, void, Initialize, (BehaviourTree * __this, Component_1 * agent));
IL2CPP_REGISTER_METHOD(0x03006B50, void, CacheBlackboard, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x03006C00, void, MarkForReset, (BehaviourTree * __this, IBehaviourNode * node));
IL2CPP_REGISTER_METHOD(0x03006CB0, BehaviourStatus__Enum, Execute, (BehaviourTree * __this, IContext * context, bool updateWholeTree));
IL2CPP_REGISTER_METHOD(0x03006E00, void, StartTree, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x03006E10, void, StopTree, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x03006E50, void, UpdateTree, (BehaviourTree * __this, Component_1 * agent, bool updateWholeTree));
IL2CPP_REGISTER_METHOD(0x03006E90, void, SkipTreeUpdate, (BehaviourTree * __this, String * reason));
IL2CPP_REGISTER_METHOD(0x03006EA0, void, Reset, (BehaviourTree * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03006ED0, void, Reset, (BehaviourTree * __this, Component_1 * agent));
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x03006F20, void, OnUpdate, (BehaviourTree * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00615270, bool, get_IsRunning, (BehaviourTree * __this));
IL2CPP_REGISTER_METHOD(0x00674DC0, void, set_IsRunning, (BehaviourTree * __this, bool value));
IL2CPP_REGISTER_METHOD(0x03006F50, void, SetLastExecutedLeafNode, (BehaviourTree * __this, IBehaviourNode * node));
IL2CPP_REGISTER_METHOD(0x03006F60, void, __ctor, (BehaviourTree * __this));
}
