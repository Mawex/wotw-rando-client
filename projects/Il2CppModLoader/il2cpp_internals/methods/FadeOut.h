using namespace app;

namespace app::methods::FadeOut {
IL2CPP_REGISTER_METHOD(0x0098F310, void, Perform, (FadeOut * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0098F320, void, FixedUpdate, (FadeOut * __this));
IL2CPP_REGISTER_METHOD(0x0098F440, void, Stop, (FadeOut * __this));
IL2CPP_REGISTER_METHODINFO(0x047107A8, FadeOut_Stop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0098F490, bool, get_IsPerforming, (FadeOut * __this));
IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_IsSuspended, (FadeOut * __this));
IL2CPP_REGISTER_METHOD(0x0098F4B0, void, set_IsSuspended, (FadeOut * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0098F4C0, void, Serialize, (FadeOut * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0098F510, void, UpdateShaderValue, (FadeOut * __this));
IL2CPP_REGISTER_METHOD(0x0098F5D0, void, __ctor, (FadeOut * __this));
}
