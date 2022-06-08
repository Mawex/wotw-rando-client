using namespace app;

namespace app::methods::DayThreeTreeSetupController {
IL2CPP_REGISTER_METHOD(0x00DD4D90, void, Start, (DayThreeTreeSetupController * __this));
IL2CPP_REGISTER_METHOD(0x00DD4E30, void, FixedUpdate, (DayThreeTreeSetupController * __this));
IL2CPP_REGISTER_METHOD(0x00DD4E40, void, UpdateState, (DayThreeTreeSetupController * __this));
IL2CPP_REGISTER_METHOD(0x00DD5310, void, ChangeState, (DayThreeTreeSetupController * __this, DayThreeTreeSetupController_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00DD5820, void, OnJumpAnimationEnd, (DayThreeTreeSetupController * __this, TextureAnimation * textureAnimation));
IL2CPP_REGISTER_METHODINFO(0x047652E8, DayThreeTreeSetupController_OnJumpAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DD5A40, void, NaruBranchJumpOnAnimationEnd, (DayThreeTreeSetupController * __this, TextureAnimation * textureAnimation));
IL2CPP_REGISTER_METHODINFO(0x047067C8, DayThreeTreeSetupController_NaruBranchJumpOnAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DD5BE0, void, NaruClimbTrigger, (DayThreeTreeSetupController * __this));
IL2CPP_REGISTER_METHOD(0x00DD6020, void, OnNaruClimbAnimationFinished, (DayThreeTreeSetupController * __this));
IL2CPP_REGISTER_METHODINFO(0x04731F80, DayThreeTreeSetupController_OnNaruClimbAnimationFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (DayThreeTreeSetupController * __this));
}
