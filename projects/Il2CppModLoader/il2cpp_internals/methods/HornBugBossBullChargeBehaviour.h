#include <interception_macros.h>

namespace app::methods::HornBugBossBullChargeBehaviour {
IL2CPP_REGISTER_METHOD(0x00B606F0, void, OnEntityInitialized, (HornBugBossBullChargeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B60C60, void, PlayTimeline, (HornBugBossBullChargeBehaviour * __this, MoonTimeline * timeline, bool rootMotion, float timeScale));
IL2CPP_REGISTER_METHOD(0x00B60D50, void, OnEnter, (HornBugBossBullChargeBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B60DD0, void, OnStopEvent, (HornBugBossBullChargeBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0475F950, HornBugBossBullChargeBehaviour_OnStopEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B60F60, BehaviourStatus__Enum, OnExecute, (HornBugBossBullChargeBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B610E0, void, OnExit, (HornBugBossBullChargeBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B61180, void, UpdateRun, (HornBugBossBullChargeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B61820, void, SpawnImpactEffect, (HornBugBossBullChargeBehaviour * __this, Vector2 point, Vector2 normal));
IL2CPP_REGISTER_METHOD(0x00B61A10, void, __ctor, (HornBugBossBullChargeBehaviour * __this));
}
