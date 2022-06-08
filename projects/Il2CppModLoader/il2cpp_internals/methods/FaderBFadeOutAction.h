using namespace app;

namespace app::methods::FaderBFadeOutAction {
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_Duration, (FaderBFadeOutAction * __this));
IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_Duration, (FaderBFadeOutAction * __this, float value));
IL2CPP_REGISTER_METHOD(0x00993F90, void, Perform, (FaderBFadeOutAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009940A0, void, Stop, (FaderBFadeOutAction * __this));
IL2CPP_REGISTER_METHODINFO(0x04721190, FaderBFadeOutAction_Stop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009940F0, bool, get_IsPerforming, (FaderBFadeOutAction * __this));
IL2CPP_REGISTER_METHOD(0x009941B0, String *, GetNiceName, (FaderBFadeOutAction * __this));
IL2CPP_REGISTER_METHOD(0x00993F70, void, __ctor, (FaderBFadeOutAction * __this));
}
