using namespace app;

namespace app::methods::BabyWormWater {
IL2CPP_REGISTER_METHOD(0x00F80B90, bool, DigEdgeZoneEdgeAhead, (BabyWormWater * __this));
IL2CPP_REGISTER_METHOD(0x00F80C80, void, SetDigZoneIntersectingPoint, (BabyWormWater * __this, Vector3 center));
IL2CPP_REGISTER_METHOD(0x00F80EA0, bool, IsDigZoneValid, (BabyWormWater * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SpawnTrailEffect, (BabyWormWater * __this));
IL2CPP_REGISTER_METHOD(0x00F80F50, void, RefreshTrailEffectPosition, (BabyWormWater * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StopTrailEffect, (BabyWormWater * __this, int32_t frameDelay));
IL2CPP_REGISTER_METHOD(0x00F810F0, void, OnRecieveBashDamage, (BabyWormWater * __this));
IL2CPP_REGISTER_METHOD(0x00F81290, void, RefreshClosestTarget, (BabyWormWater * __this));
IL2CPP_REGISTER_METHOD(0x00F812A0, void, ApplySpeedModifiers, (BabyWormWater * __this));
IL2CPP_REGISTER_METHOD(0x00F81440, float, get_TurnSpeedModifier, (BabyWormWater * __this));
IL2CPP_REGISTER_METHOD(0x00F81490, void, __ctor, (BabyWormWater * __this));
}
