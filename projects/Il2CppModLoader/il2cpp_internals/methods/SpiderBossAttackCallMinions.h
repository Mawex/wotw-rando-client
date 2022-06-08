#include <interception_macros.h>

namespace app::methods::SpiderBossAttackCallMinions {
IL2CPP_REGISTER_METHOD(0x00966940, EntityPlaceholder__Array *, get_Spawners, (SpiderBossAttackCallMinions * __this));
IL2CPP_REGISTER_METHOD(0x00966A80, void, OnEntityInitialized, (SpiderBossAttackCallMinions * __this));
IL2CPP_REGISTER_METHOD(0x00966C40, void, Start, (SpiderBossAttackCallMinions * __this));
IL2CPP_REGISTER_METHOD(0x00966DE0, void, OnDestroy, (SpiderBossAttackCallMinions * __this));
IL2CPP_REGISTER_METHOD(0x009670D0, void, OnRestoreCheckpoint, (SpiderBossAttackCallMinions * __this));
IL2CPP_REGISTER_METHODINFO(0x04740848, SpiderBossAttackCallMinions_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00967180, void, FixedUpdate, (SpiderBossAttackCallMinions * __this));
IL2CPP_REGISTER_METHOD(0x009673B0, EntityPlaceholder *, FindPlaceholderForSpawning, (SpiderBossAttackCallMinions * __this));
IL2CPP_REGISTER_METHOD(0x009675E0, void, OnSpiderHealthReachedZero, (SpiderBossAttackCallMinions * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x04756968, SpiderBossAttackCallMinions_OnSpiderHealthReachedZero__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009677F0, void, OnEnter, (SpiderBossAttackCallMinions * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00967B30, BehaviourStatus__Enum, OnExecute, (SpiderBossAttackCallMinions * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00967B90, void, OnExit, (SpiderBossAttackCallMinions * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00965930, void, InitializeCancellableController, (SpiderBossAttackCallMinions * __this));
IL2CPP_REGISTER_METHOD(0x00965980, void, InitializeHitReactionController, (SpiderBossAttackCallMinions * __this));
IL2CPP_REGISTER_METHOD(0x00967E90, void, ChangeState, (SpiderBossAttackCallMinions * __this, SpiderBossAttackCallMinions_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x003F8E90, void, UpdateState, (SpiderBossAttackCallMinions * __this));
IL2CPP_REGISTER_METHOD(0x00965A10, void, OnEnterTransition, (SpiderBossAttackCallMinions * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterShootAndEnd, (SpiderBossAttackCallMinions * __this));
IL2CPP_REGISTER_METHOD(0x00967ED0, void, OnTimelineEnded, (SpiderBossAttackCallMinions * __this));
IL2CPP_REGISTER_METHODINFO(0x04773808, SpiderBossAttackCallMinions_OnTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00967EF0, void, SpawnMinions, (SpiderBossAttackCallMinions * __this));
IL2CPP_REGISTER_METHODINFO(0x0472C148, SpiderBossAttackCallMinions_SpawnMinions__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00968270, float, ComputeUtility, (SpiderBossAttackCallMinions * __this));
IL2CPP_REGISTER_METHOD(0x00968460, void, ResetAliveSpiderling, (SpiderBossAttackCallMinions * __this));
IL2CPP_REGISTER_METHOD(0x009685F0, void, __ctor, (SpiderBossAttackCallMinions * __this));
}
