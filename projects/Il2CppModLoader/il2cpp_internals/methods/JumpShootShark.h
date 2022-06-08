using namespace app;

namespace app::methods::JumpShootShark {
IL2CPP_REGISTER_METHOD(0x00E4CB20, bool, ShouldIgnoreDamage, (JumpShootShark * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x047829C8, JumpShootShark_ShouldIgnoreDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E4CB80, void, Awake, (JumpShootShark * __this));
IL2CPP_REGISTER_METHOD(0x00E4CC50, void, OnDestroy, (JumpShootShark * __this));
IL2CPP_REGISTER_METHOD(0x00E4CD20, void, HideGraphics, (JumpShootShark * __this));
IL2CPP_REGISTER_METHOD(0x00E4CD90, void, ShowGraphics, (JumpShootShark * __this));
IL2CPP_REGISTER_METHOD(0x00E4CE00, void, Start, (JumpShootShark * __this));
IL2CPP_REGISTER_METHOD(0x00E4E030, void, UpdateJumpingState, (JumpShootShark * __this));
IL2CPP_REGISTER_METHODINFO(0x04701D18, JumpShootShark_UpdateJumpingState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E4E340, void, ExitJumpingState, (JumpShootShark * __this));
IL2CPP_REGISTER_METHODINFO(0x0475F350, JumpShootShark_ExitJumpingState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E4E350, void, ShootProjectileAtPlayer, (JumpShootShark * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldEmerge, (JumpShootShark * __this));
IL2CPP_REGISTER_METHOD(0x00E4E6B0, void, SetEmergeLocation, (JumpShootShark * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00E4EA90, void, __ctor, (JumpShootShark * __this));
IL2CPP_REGISTER_METHOD(0x00E4EBE0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00E4ED30, void, _Start_b__21_0, (JumpShootShark * __this));
IL2CPP_REGISTER_METHODINFO(0x0477B410, JumpShootShark__Start_b__21_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E4CD90, void, _Start_b__21_1, (JumpShootShark * __this));
IL2CPP_REGISTER_METHODINFO(0x0475E1C8, JumpShootShark__Start_b__21_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E4EDC0, void, _Start_b__21_2, (JumpShootShark * __this));
IL2CPP_REGISTER_METHODINFO(0x04713AE0, JumpShootShark__Start_b__21_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E4EF90, void, _Start_b__21_3, (JumpShootShark * __this));
IL2CPP_REGISTER_METHODINFO(0x04780E18, JumpShootShark__Start_b__21_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E4F0B0, void, _Start_b__21_4, (JumpShootShark * __this));
IL2CPP_REGISTER_METHODINFO(0x047938A8, JumpShootShark__Start_b__21_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E4F1B0, bool, _Start_b__21_5, (JumpShootShark * __this));
IL2CPP_REGISTER_METHODINFO(0x047621B8, JumpShootShark__Start_b__21_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E4F200, bool, _Start_b__21_6, (JumpShootShark * __this));
IL2CPP_REGISTER_METHODINFO(0x04794818, JumpShootShark__Start_b__21_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E4F250, bool, _Start_b__21_7, (JumpShootShark * __this));
IL2CPP_REGISTER_METHODINFO(0x04778650, JumpShootShark__Start_b__21_7__MethodInfo);
}
