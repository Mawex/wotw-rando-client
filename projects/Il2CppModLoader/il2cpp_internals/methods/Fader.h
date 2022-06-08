using namespace app;

namespace app::methods::Fader {
IL2CPP_REGISTER_METHOD(0x0098FFA0, void, ChangeState, (Fader * __this, Fader_State__Enum state));
IL2CPP_REGISTER_METHOD(0x0098FFB0, void, UpdateState, (Fader * __this));
IL2CPP_REGISTER_METHOD(0x00990260, void, Start, (Fader * __this));
IL2CPP_REGISTER_METHOD(0x009903E0, void, ForceToOpaque, (Fader * __this));
IL2CPP_REGISTER_METHOD(0x009903F0, void, OnFadeInFinished, (Fader * __this));
IL2CPP_REGISTER_METHOD(0x009905A0, void, OnFadeOutFinished, (Fader * __this));
IL2CPP_REGISTER_METHOD(0x009905C0, void, FixedUpdate, (Fader * __this));
IL2CPP_REGISTER_METHOD(0x00990600, void, SetOpacity, (Fader * __this, float opacity));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsSuspended, (Fader * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsSuspended, (Fader * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00990720, void, __ctor, (Fader * __this));
}
