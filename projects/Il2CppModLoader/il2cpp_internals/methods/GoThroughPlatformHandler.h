#include <interception_macros.h>

namespace app::methods::GoThroughPlatformHandler {
IL2CPP_REGISTER_METHOD(0x007FC330, void, ProvideComponent, (GoThroughPlatformHandler * __this));
IL2CPP_REGISTER_METHOD(0x007FC410, void, Awake, (GoThroughPlatformHandler * __this));
IL2CPP_REGISTER_METHOD(0x007FC6F0, void, OnDestroy, (GoThroughPlatformHandler * __this));
IL2CPP_REGISTER_METHOD(0x007FC890, bool, FallThroughPlatform, (GoThroughPlatformHandler * __this));
IL2CPP_REGISTER_METHOD(0x007FD110, void, FixedUpdate, (GoThroughPlatformHandler * __this));
IL2CPP_REGISTER_METHOD(0x007FD110, void, OnRestoreCheckpoint, (GoThroughPlatformHandler * __this));
IL2CPP_REGISTER_METHODINFO(0x0471E7F8, GoThroughPlatformHandler_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007FD120, void, OnEnable, (GoThroughPlatformHandler * __this));
IL2CPP_REGISTER_METHOD(0x007FD130, void, UpdateColliders, (GoThroughPlatformHandler * __this));
IL2CPP_REGISTER_METHOD(0x007FDC50, bool, get_Ignore, ());
IL2CPP_REGISTER_METHOD(0x007FDCF0, void, UpdateLayerCollision, (GoThroughPlatformHandler * __this, bool ignore, bool force));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (GoThroughPlatformHandler * __this));
IL2CPP_REGISTER_METHOD(0x007FDE70, void, __cctor, ());
}
