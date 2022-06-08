using namespace app;

namespace app::methods::SeinTurretSpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHOD(0x00AA0410, void, SpawnSpiritTurret, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHOD(0x00AA06B0, void, OnSetReferenceToSein, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHOD(0x00AA06E0, void, Start, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyGravityPlatformMovementSettings, (SeinTurretSpell * __this, GravityPlatformMovementSettings * obj));
IL2CPP_REGISTER_METHODINFO(0x047789D0, SeinTurretSpell_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AA0F20, void, StartRootMotion, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHOD(0x00AA10D0, void, OnRootMotion, (SeinTurretSpell * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x047072E0, SeinTurretSpell_OnRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AA1250, void, EndRootMotion, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHOD(0x00AA1400, void, OnDestroy, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHOD(0x00AA16F0, void, ModifyHorizontalPlatformMovementSettings, (SeinTurretSpell * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04767278, SeinTurretSpell_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AA1910, void, OnExit, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHOD(0x00AA1920, bool, get_IsStatePerforming, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHOD(0x00AA1930, void, ChangeState, (SeinTurretSpell * __this, SeinTurretSpell_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00AA1A10, void, EnterReleasing, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHOD(0x00AA1A40, void, ExitReleasing, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHOD(0x00AA1AA0, void, EnterStartReleasing, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHOD(0x00AA1C90, void, ExitStartReleasing, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHOD(0x00AA1CA0, void, StartReleasingTurrets, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHODINFO(0x04751D10, SeinTurretSpell_StartReleasingTurrets__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AA1910, void, StopReleasing, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHODINFO(0x04705528, SeinTurretSpell_StopReleasing__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AA1CF0, void, UpdateCharacterState, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHOD(0x00AA1F90, IEnumerator *, HandleSpawningSentries, (SeinTurretSpell * __this));
IL2CPP_REGISTER_METHOD(0x00AA20E0, void, __ctor, (SeinTurretSpell * __this));
}
