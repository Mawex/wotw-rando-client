using namespace app;

namespace app::methods::Moon::FlutteringProjectileDropBehaviour {
IL2CPP_REGISTER_METHOD(0x01225C20, void, OnEntityInitialized, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01225FC0, void, OnEnter, (FlutteringProjectileDropBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012260C0, BehaviourStatus__Enum, OnExecute, (FlutteringProjectileDropBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01226470, void, OnExit, (FlutteringProjectileDropBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01226560, void, StartTimeline, (FlutteringProjectileDropBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x01226590, void, ResetTimeline, (FlutteringProjectileDropBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x012267C0, float, GetLookDirection, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012268A0, float, GetDirectionToTarget, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012269C0, float, GetRandomProjectileDropRate, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01226A80, void, UpdateSpeed, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01226D40, void, Turn, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01226E30, void, Accelerate, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01227000, void, Brake, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01227170, void, UpdateShooting, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01227280, void, Shoot, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012277C0, void, UpdateFloating, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01227D50, void, UpdateFlyingOverCharacter, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01227F60, void, UpdateBrakingPosition, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C4F470, bool, IsPointInsideAllowedArea, (FlutteringProjectileDropBehaviour * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x01228210, void, OnFlutteringTurnStart, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0477D700, FlutteringProjectileDropBehaviour_OnFlutteringTurnStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01228220, void, OnFlutteringTurnEnd, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0478F180, FlutteringProjectileDropBehaviour_OnFlutteringTurnEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01228250, void, OnFlutteringTurnFlipEvent, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04761BF8, FlutteringProjectileDropBehaviour_OnFlutteringTurnFlipEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01228330, void, OnHitByHeavyAttack, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01226470, void, Stop, (FlutteringProjectileDropBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012283F0, void, __ctor, (FlutteringProjectileDropBehaviour * __this));
}
