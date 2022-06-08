using namespace app;

namespace app::methods::SeinBowMark {
IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_IsSuspended, (SeinBowMark * __this));
IL2CPP_REGISTER_METHOD(0x00724140, void, set_IsSuspended, (SeinBowMark * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00DA16B0, void, OnPoolSpawned, (SeinBowMark * __this));
IL2CPP_REGISTER_METHOD(0x00DA18C0, void, OnPoolDespawned, (SeinBowMark * __this));
IL2CPP_REGISTER_METHOD(0x00DA18D0, void, DisappearMark, (SeinBowMark * __this));
IL2CPP_REGISTER_METHOD(0x00DA19A0, void, ChangeState, (SeinBowMark * __this, SeinBowMark_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00DA1A80, void, FixedUpdate, (SeinBowMark * __this));
IL2CPP_REGISTER_METHOD(0x00DA1D60, void, UpdateState, (SeinBowMark * __this));
IL2CPP_REGISTER_METHOD(0x00DA1DF0, void, UpdateDisappearingState, (SeinBowMark * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdatePlayingState, (SeinBowMark * __this));
IL2CPP_REGISTER_METHOD(0x00DA2030, void, UpdateAppearingState, (SeinBowMark * __this));
IL2CPP_REGISTER_METHOD(0x00DA2300, void, HideMark, (SeinBowMark * __this));
IL2CPP_REGISTER_METHOD(0x00DA2320, void, __ctor, (SeinBowMark * __this));
}
