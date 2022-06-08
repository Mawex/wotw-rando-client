using namespace app;

namespace app::methods::Moon::HitReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x014AB990, void, Awake, (HitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x014AB9E0, void, OnReceiveEvent, (HitReactionBehaviour * __this, EntityEvent * eventInfo));
IL2CPP_REGISTER_METHOD(0x014ABBE0, bool, PlayHitReaction, (HitReactionBehaviour * __this, EntityDamageEvent * damageEvent));
IL2CPP_REGISTER_METHOD(0x014ABD70, void, FixedUpdate, (HitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x014ABDB0, StaggerSettings *, GetStaggerSetting, (HitReactionBehaviour * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (HitReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (HitReactionBehaviour * __this));
}
