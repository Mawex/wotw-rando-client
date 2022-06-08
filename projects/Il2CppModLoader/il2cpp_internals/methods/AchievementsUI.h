using namespace app;

namespace app::methods::AchievementsUI {
IL2CPP_REGISTER_METHOD(0x004BDC70, AchievementsUI *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x004BDD70, bool, get_Available, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x004BDE20, bool, get_Visible, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x004BDE50, void, set_Visible, (bool value));
IL2CPP_REGISTER_METHOD(0x004BDF80, void, FixedUpdate, (AchievementsUI * __this));
IL2CPP_REGISTER_METHOD(0x004BE040, Rect, PushDown, (Rect * rect, float offset));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (AchievementsUI * __this));
}
