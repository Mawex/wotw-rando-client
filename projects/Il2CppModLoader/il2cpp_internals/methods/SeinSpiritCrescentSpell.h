using namespace app;

namespace app::methods::SeinSpiritCrescentSpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinSpiritCrescentSpell * __this));
IL2CPP_REGISTER_METHOD(0x005E1270, bool, get_CanAfford, (SeinSpiritCrescentSpell * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinSpiritCrescentSpell * __this));
IL2CPP_REGISTER_METHOD(0x005E12B0, bool, KeepPlayingThrowAnimation, (SeinSpiritCrescentSpell * __this));
IL2CPP_REGISTER_METHODINFO(0x04736048, SeinSpiritCrescentSpell_KeepPlayingThrowAnimation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005E1300, bool, KeepPlayingAirThrowAnimation, (SeinSpiritCrescentSpell * __this));
IL2CPP_REGISTER_METHODINFO(0x04766060, SeinSpiritCrescentSpell_KeepPlayingAirThrowAnimation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005E1350, void, OnSetReferenceToSein, (SeinSpiritCrescentSpell * __this));
IL2CPP_REGISTER_METHOD(0x005E1380, void, OnDestroy, (SeinSpiritCrescentSpell * __this));
IL2CPP_REGISTER_METHOD(0x005E13C0, void, UpdateCharacterState, (SeinSpiritCrescentSpell * __this));
IL2CPP_REGISTER_METHOD(0x005E1680, void, PlayThrowAnimation, (SeinSpiritCrescentSpell * __this));
IL2CPP_REGISTER_METHOD(0x005E1E10, float, ClampToPlane, (SeinSpiritCrescentSpell * __this, float angle, Vector2 planeNormal));
IL2CPP_REGISTER_METHOD(0x005E1E80, void, SpawnBoomerang, (SeinSpiritCrescentSpell * __this));
IL2CPP_REGISTER_METHOD(0x005E28D0, void, OnCatchBoomerang, (SeinSpiritCrescentSpell * __this));
IL2CPP_REGISTER_METHOD(0x005E2B10, void, __ctor, (SeinSpiritCrescentSpell * __this));
}
