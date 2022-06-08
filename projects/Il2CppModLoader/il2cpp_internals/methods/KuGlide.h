using namespace app;

namespace app::methods::KuGlide {
IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsStatePerforming, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x01238590, bool, get_InWindZone, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x01238780, bool, get_WantsToGlide, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x01238830, bool, get_CanGlide, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x012388F0, bool, ShouldEnterGlide, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsGliding, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x01238930, void, set_IsGliding, (KuGlide * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01238960, void, OnSetReferenceToKu, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x01238990, void, OnEnterGlide, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x01238D30, void, OnExitGlide, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x01236310, void, OnExit, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x01239090, void, UpdateState, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x01239420, void, HandleFloatZones, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x01239870, void, ModifyGravityPlatformMovementSettings, (KuGlide * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0474AF68, KuGlide_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01239910, void, ModifyHorizontalPlatformMovementSettings, (KuGlide * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x047950D8, KuGlide_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012399A0, bool, get_HasStartedTurning, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x012399D0, bool, get_HasFinishedTurning, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x008519A0, bool, get_WantsToFaceLeft, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x008519B0, void, set_WantsToFaceLeft, (KuGlide * __this, bool value));
IL2CPP_REGISTER_METHOD(0x012399F0, bool, get_ShouldInterruptTurning, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x01239A00, bool, get_IsCancellable, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x01239A20, void, InterruptTurning, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x01239A40, void, Turn, (KuGlide * __this, bool faceLeft));
IL2CPP_REGISTER_METHOD(0x01239B70, bool, IsEffectivelyDoubleJumping, (KuGlide * __this));
IL2CPP_REGISTER_METHOD(0x01239C00, void, __ctor, (KuGlide * __this));
}
