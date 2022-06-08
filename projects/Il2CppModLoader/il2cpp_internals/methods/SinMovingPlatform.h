using namespace app;

namespace app::methods::SinMovingPlatform {
IL2CPP_REGISTER_METHOD(0x0074AB10, bool, get_IsSuspended, (SinMovingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x0074AB20, void, set_IsSuspended, (SinMovingPlatform * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF8B0, SuspendableMask__Enum, get_Mask, (SinMovingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x0074AB30, void, set_Mask, (SinMovingPlatform * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0074ABE0, void, Awake, (SinMovingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x0074AC80, void, OnDestroy, (SinMovingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x0074AD20, void, Serialize, (SinMovingPlatform * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0074AD70, void, Start, (SinMovingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x0074AF90, void, FixedUpdate, (SinMovingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x0074B010, void, UpdatePosition, (SinMovingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x0074B500, void, __ctor, (SinMovingPlatform * __this));
}
