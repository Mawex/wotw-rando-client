using namespace app;

namespace app::methods::PlayLoopAnimation {
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsSuspended, (PlayLoopAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00585320, void, set_IsSuspended, (PlayLoopAnimation * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF2B0, SuspendableMask__Enum, get_Mask, (PlayLoopAnimation * __this));
IL2CPP_REGISTER_METHOD(0x031B6700, void, set_Mask, (PlayLoopAnimation * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x002FD750, UpdateType__Enum, get_UpdateType, (PlayLoopAnimation * __this));
IL2CPP_REGISTER_METHOD(0x002FD760, void, set_UpdateType, (PlayLoopAnimation * __this, UpdateType__Enum value));
IL2CPP_REGISTER_METHOD(0x031B67B0, void, Awake, (PlayLoopAnimation * __this));
IL2CPP_REGISTER_METHOD(0x031B6870, void, OnDestroy, (PlayLoopAnimation * __this));
IL2CPP_REGISTER_METHOD(0x031B6930, void, OnEnable, (PlayLoopAnimation * __this));
IL2CPP_REGISTER_METHOD(0x031B69A0, void, PlayAnimation, (PlayLoopAnimation * __this));
IL2CPP_REGISTER_METHOD(0x031B6BF0, void, OnUpdate, (PlayLoopAnimation * __this, float delta));
IL2CPP_REGISTER_METHOD(0x031B6C30, void, __ctor, (PlayLoopAnimation * __this));
}
