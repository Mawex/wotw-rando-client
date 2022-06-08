#include <interception_macros.h>

namespace app::methods::PlatformMovementPortalVisitor {
IL2CPP_REGISTER_METHOD(0x01171550, void, Awake, (PlatformMovementPortalVisitor * __this));
IL2CPP_REGISTER_METHOD(0x01171620, void, OnDestroy, (PlatformMovementPortalVisitor * __this));
IL2CPP_REGISTER_METHOD(0x01171700, void, set_Position, (PlatformMovementPortalVisitor * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x011717F0, Vector3, get_Position, (PlatformMovementPortalVisitor * __this));
IL2CPP_REGISTER_METHOD(0x011718F0, void, set_Speed, (PlatformMovementPortalVisitor * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x011719E0, Vector3, get_Speed, (PlatformMovementPortalVisitor * __this));
IL2CPP_REGISTER_METHOD(0x01171AD0, void, OnGoThroughPortal, (PlatformMovementPortalVisitor * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapEnter, (PlatformMovementPortalVisitor * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapExit, (PlatformMovementPortalVisitor * __this));
IL2CPP_REGISTER_METHOD(0x01171D70, void, __ctor, (PlatformMovementPortalVisitor * __this));
}
