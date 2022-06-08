using namespace app;

namespace app::methods::AnimatedCritter {
IL2CPP_REGISTER_METHOD(0x004FA640, Vector3, get_Position, (AnimatedCritter * __this));
IL2CPP_REGISTER_METHOD(0x004FA790, float, get_EffectiveDistance, (AnimatedCritter * __this));
IL2CPP_REGISTER_METHOD(0x004FA7A0, bool, get_IsPlaying, (AnimatedCritter * __this));
IL2CPP_REGISTER_METHOD(0x004FA7C0, void, Awake, (AnimatedCritter * __this));
IL2CPP_REGISTER_METHOD(0x004FA7D0, void, RefreshEffectiveDistance, (AnimatedCritter * __this));
IL2CPP_REGISTER_METHOD(0x004FA960, void, PlayOnce, (AnimatedCritter * __this));
IL2CPP_REGISTER_METHOD(0x004FA9A0, void, OnDrawGizmosSelected, (AnimatedCritter * __this));
IL2CPP_REGISTER_METHOD(0x004FAA60, void, __ctor, (AnimatedCritter * __this));
}
