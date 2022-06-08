using namespace app;

namespace app::methods::MoonCharacterController {
IL2CPP_REGISTER_METHOD(0x00F452B0, Vector3, get_Position, (MoonCharacterController * __this));
IL2CPP_REGISTER_METHOD(0x00F45340, void, Prewarm, (MoonCharacterController * __this));
IL2CPP_REGISTER_METHOD(0x00F45340, void, Awake, (MoonCharacterController * __this));
IL2CPP_REGISTER_METHOD(0x00F45400, void, Move, (MoonCharacterController * __this, Vector3 delta, bool useSafeMovementCode));
IL2CPP_REGISTER_METHOD(0x00F45480, void, RenderVolume, (MoonCharacterController * __this, Vector3 p1, Vector3 p2, float radius, Vector3 dir, float distance));
IL2CPP_REGISTER_METHOD(0x00F45B40, void, HideVolume, (MoonCharacterController * __this));
IL2CPP_REGISTER_METHOD(0x00F45C60, bool, SweepTestSafeAll, (MoonCharacterController * __this, Vector3 direction, RaycastHit__Array * * hitInfo, float magnitude, QueryTriggerInteraction__Enum triggerInteraction));
IL2CPP_REGISTER_METHOD(0x00F45CC0, bool, SweepTestSafe, (MoonCharacterController * __this, Vector3 direction, RaycastHit * hitInfo, float magnitude, QueryTriggerInteraction__Enum triggerInteraction));
IL2CPP_REGISTER_METHOD(0x00F45D10, bool, Test, (MoonCharacterController * __this, Vector3 delta));
IL2CPP_REGISTER_METHOD(0x00F45DC0, bool, Test, (MoonCharacterController * __this, Vector3 delta, MoonControllerColliderHit * moonHitInfo, QueryTriggerInteraction__Enum triggerInteraction));
IL2CPP_REGISTER_METHOD(0x00F45FD0, bool, TestAll, (MoonCharacterController * __this, Vector3 delta, MoonControllerColliderHit * moonHitInfo, QueryTriggerInteraction__Enum triggerInteraction));
IL2CPP_REGISTER_METHOD(0x00F46410, bool, CapsuleTest, (MoonCharacterController * __this, Vector3 delta, MoonControllerColliderHit * moonHitInfo, LayerMask mask, QueryTriggerInteraction__Enum triggerInteraction));
IL2CPP_REGISTER_METHOD(0x00F46920, void, Move, (MoonCharacterController * __this, Vector3 delta, Vector3 originalDelta, bool useSafeMovementCode));
IL2CPP_REGISTER_METHOD(0x00F46970, void, MovePrivate, (MoonCharacterController * __this, Vector3 delta, Vector3 originalDelta, bool useSafeMovementCode));
IL2CPP_REGISTER_METHOD(0x00F46FF0, void, __ctor, (MoonCharacterController * __this));
}
