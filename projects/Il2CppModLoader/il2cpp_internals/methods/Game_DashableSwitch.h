using namespace app;

namespace app::methods::Game::DashableSwitch {
IL2CPP_REGISTER_METHOD(0x00A09730, void, Reset, (DashableSwitch * __this));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, ShouldCreateCheckpoint, (DashableSwitch * __this));
IL2CPP_REGISTER_METHOD(0x01523B50, bool, get_IsOn, (DashableSwitch * __this));
IL2CPP_REGISTER_METHOD(0x006DC040, void, set_IsOn, (DashableSwitch * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01523C60, bool, get_IsUberStateInActivatedState, (DashableSwitch * __this));
IL2CPP_REGISTER_METHOD(0x01523D60, bool, get_IsPlayingTransitionAnimation, (DashableSwitch * __this));
IL2CPP_REGISTER_METHOD(0x01523D80, bool, HitFromTop, (DashableSwitch * __this, Vector3 impactVelocity));
IL2CPP_REGISTER_METHOD(0x01523F10, void, OnCollisionEnter, (DashableSwitch * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x01524100, void, OnDashHit, (DashableSwitch * __this, Vector3 impactVelocity));
IL2CPP_REGISTER_METHOD(0x015241F0, void, PushButton, (DashableSwitch * __this));
IL2CPP_REGISTER_METHOD(0x015243F0, void, RecedeSlightly, (DashableSwitch * __this));
IL2CPP_REGISTER_METHOD(0x015244D0, void, Perform, (DashableSwitch * __this, DashableSwitchSetupData * setupData));
IL2CPP_REGISTER_METHOD(0x01524730, void, __ctor, (DashableSwitch * __this));
}
