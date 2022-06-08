using namespace app;

namespace app::methods::SpitterEnemy {
IL2CPP_REGISTER_METHOD(0x0099B6F0, Vector2, get_ThrownDirection, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHOD(0x0099B710, void, set_ThrownDirection, (SpitterEnemy * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x0099B740, bool, CanBeOptimized, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHOD(0x0099B7A0, bool, WilhelmScreamZoneRectanglesContain, (SpitterEnemy * __this, Vector2 position));
IL2CPP_REGISTER_METHOD(0x0099BA70, void, Start, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00728F70, bool, IsOnGround, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04775F78, SpitterEnemy_IsOnGround__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099E0F0, bool, HasHitWall, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0473B9A8, SpitterEnemy_HasHitWall__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099E120, void, TurnAround, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0475BB58, SpitterEnemy_TurnAround__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099E190, bool, CanSeePlayer, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04745920, SpitterEnemy_CanSeePlayer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099E210, bool, FurtherThanMinChargeDistance, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04726430, SpitterEnemy_FurtherThanMinChargeDistance__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099E270, bool, CloserThanMinChargeDistance, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHOD(0x0099E2D0, void, FixedUpdate, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHOD(0x0099E8D0, void, UpdateRotation, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHOD(0x0099EBC0, bool, ShouldThrow, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0478BEC8, SpitterEnemy_ShouldThrow__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099ECF0, bool, ShouldStomped, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0474C7D8, SpitterEnemy_ShouldStomped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099EE30, bool, ShouldStun, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0472E710, SpitterEnemy_ShouldStun__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099EF70, bool, IsLightAttackDamage, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x047952B0, SpitterEnemy_IsLightAttackDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099F0A0, void, __ctor, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHOD(0x0099F1F0, bool, _Start_b__21_0, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04789E10, SpitterEnemy__Start_b__21_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099F260, bool, _Start_b__21_1, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0472C228, SpitterEnemy__Start_b__21_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099F2D0, bool, _Start_b__21_2, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0477CCE8, SpitterEnemy__Start_b__21_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099F2F0, bool, _Start_b__21_3, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04786A80, SpitterEnemy__Start_b__21_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099F310, bool, _Start_b__21_4, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04707748, SpitterEnemy__Start_b__21_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099F360, bool, _Start_b__21_5, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04798598, SpitterEnemy__Start_b__21_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099F3D0, bool, _Start_b__21_6, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0476D218, SpitterEnemy__Start_b__21_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099F480, bool, _Start_b__21_7, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0476B258, SpitterEnemy__Start_b__21_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099F520, bool, _Start_b__21_8, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04719D98, SpitterEnemy__Start_b__21_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099F570, bool, _Start_b__21_9, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x047584A8, SpitterEnemy__Start_b__21_9__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C40F0, bool, _Start_b__21_10, (SpitterEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04733508, SpitterEnemy__Start_b__21_10__MethodInfo);
}
