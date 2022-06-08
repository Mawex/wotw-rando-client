using namespace app;

namespace app::methods::SeinRide_CartRidingState {
IL2CPP_REGISTER_METHOD(0x005D3AC0, void, OnBegin, (SeinRide_CartRidingState * __this, IRideable * rideable, bool skipMountAnimation));
IL2CPP_REGISTER_METHOD(0x005D3C70, void, Update, (SeinRide_CartRidingState * __this));
IL2CPP_REGISTER_METHOD(0x005D41E0, void, OnJumpAnimationEnd, (SeinRide_CartRidingState * __this));
IL2CPP_REGISTER_METHODINFO(0x04775CA8, SeinRide_CartRidingState_OnJumpAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005D41F0, void, OnJumpLandAnimationEnd, (SeinRide_CartRidingState * __this));
IL2CPP_REGISTER_METHODINFO(0x0470BD30, SeinRide_CartRidingState_OnJumpLandAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005D4200, void, OnJump, (SeinRide_CartRidingState * __this, float YSpeed));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_MatchRotation, (SeinRide_CartRidingState * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_LockPlayerToAttachmentPoint, (SeinRide_CartRidingState * __this));
IL2CPP_REGISTER_METHOD(0x005D44A0, bool, IsCartFalling, (SeinRide_CartRidingState * __this));
IL2CPP_REGISTER_METHODINFO(0x04798F38, SeinRide_CartRidingState_IsCartFalling__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SeinRide_CartRidingState * __this));
}
