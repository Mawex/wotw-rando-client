using namespace app;

namespace app::methods::SpikeSlugDeathReaction {
IL2CPP_REGISTER_METHOD(0x011C7BD0, void, OnCacheSerializedComponents, (SpikeSlugDeathReaction * __this, Entity * owner));
IL2CPP_REGISTER_METHOD(0x011C7CB0, void, OnInitializeTask, (SpikeSlugDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C7EA0, void, ResetTimeline, (SpikeSlugDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x011C8100, void, OnHitGround, (SpikeSlugDeathReaction * __this, Vector3 pos, Collider * col));
IL2CPP_REGISTER_METHOD(0x011C8110, void, StartDeathTimeline, (SpikeSlugDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x011C82D0, void, ModifyDeathKickbackForce, (SpikeSlugDeathReaction * __this, Damage * damage, float minBoost, float minMagntiude, float minUpDirection));
IL2CPP_REGISTER_METHOD(0x011C85B0, void, OnEnterTask, (SpikeSlugDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C8AF0, void, EndReaction, (SpikeSlugDeathReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x04776518, SpikeSlugDeathReaction_EndReaction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011C8BB0, BehaviourStatus__Enum, OnExecuteTask, (SpikeSlugDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C8F30, void, OnExitTask, (SpikeSlugDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C8FF0, void, PlayShake, (SpikeSlugDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x011C90F0, void, __ctor, (SpikeSlugDeathReaction * __this));
}
