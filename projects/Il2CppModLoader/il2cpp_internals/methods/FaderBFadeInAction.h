using namespace app;

namespace app::methods::FaderBFadeInAction {
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_Duration, (FaderBFadeInAction * __this));
IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_Duration, (FaderBFadeInAction * __this, float value));
IL2CPP_REGISTER_METHOD(0x00993C80, void, Perform, (FaderBFadeInAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (FaderBFadeInAction * __this));
IL2CPP_REGISTER_METHOD(0x00993DF0, bool, get_IsPerforming, (FaderBFadeInAction * __this));
IL2CPP_REGISTER_METHOD(0x00993EB0, String *, GetNiceName, (FaderBFadeInAction * __this));
IL2CPP_REGISTER_METHOD(0x00993F70, void, __ctor, (FaderBFadeInAction * __this));
}
