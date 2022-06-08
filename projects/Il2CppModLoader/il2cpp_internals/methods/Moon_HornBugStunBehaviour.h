#include <interception_macros.h>

namespace app::methods::Moon::HornBugStunBehaviour {
IL2CPP_REGISTER_METHOD(0x010FA930, void, OnEntityInitialized, (HornBugStunBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010FA9D0, bool, IsBlockingInterruption, (HornBugStunBehaviour * __this, EntityDamageEvent * damageEvent, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
IL2CPP_REGISTER_METHOD(0x010FAA50, void, CacheSerializedComponents, (HornBugStunBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010FAAD0, void, Awake, (HornBugStunBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010FAB50, void, OnEnter, (HornBugStunBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010FAC40, BehaviourStatus__Enum, OnExecute, (HornBugStunBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010FAD70, void, OnExit, (HornBugStunBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010FAD70, void, Stop, (HornBugStunBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010FADC0, void, StartRecovery, (HornBugStunBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010FAF70, void, StartTurnRecovery, (HornBugStunBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x004F2F80, void, OnRecoveryEnded, (HornBugStunBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04737230, HornBugStunBehaviour_OnRecoveryEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010FB210, void, StartLoop, (HornBugStunBehaviour * __this, float duration));
IL2CPP_REGISTER_METHOD(0x010FB2F0, void, __ctor, (HornBugStunBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x010FB5E0, void, _StartTurnRecovery_b__21_0, (HornBugStunBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0475F608, HornBugStunBehaviour__StartTurnRecovery_b__21_0__MethodInfo);
}
