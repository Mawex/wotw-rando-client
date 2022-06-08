using namespace app;

namespace app::methods::Moon::Setups::ChangeStateSetupData {
IL2CPP_REGISTER_METHOD(0x002FA280, MoonReference_1_Moon_Timeline_MoonTimeline_ *, get_TransitionMoonReference, (ChangeStateSetupData * __this));
IL2CPP_REGISTER_METHOD(0x00E25190, MoonTimeline *, get_Transition, (ChangeStateSetupData * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Transition, (ChangeStateSetupData * __this, MoonTimeline * value));
IL2CPP_REGISTER_METHOD(0x00863E90, float, get_DesiredValue, (ChangeStateSetupData * __this));
IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_DesiredValue, (ChangeStateSetupData * __this, float value));
IL2CPP_REGISTER_METHOD(0x00E25270, void, __ctor, (ChangeStateSetupData * __this));
}
