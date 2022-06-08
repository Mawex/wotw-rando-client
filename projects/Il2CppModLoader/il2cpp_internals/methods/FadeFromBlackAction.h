using namespace app;

namespace app::methods::FadeFromBlackAction {
IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_Duration, (FadeFromBlackAction * __this));
IL2CPP_REGISTER_METHOD(0x008A34D0, void, set_Duration, (FadeFromBlackAction * __this, float value));
IL2CPP_REGISTER_METHOD(0x0098F080, void, Perform, (FadeFromBlackAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (FadeFromBlackAction * __this));
IL2CPP_REGISTER_METHOD(0x0098F1A0, bool, get_IsPerforming, (FadeFromBlackAction * __this));
IL2CPP_REGISTER_METHOD(0x0098F260, String *, GetNiceName, (FadeFromBlackAction * __this));
IL2CPP_REGISTER_METHOD(0x0043BB90, void, __ctor, (FadeFromBlackAction * __this));
}
