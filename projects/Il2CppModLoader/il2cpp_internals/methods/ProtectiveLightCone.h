#include <interception_macros.h>

namespace app::methods::ProtectiveLightCone {
IL2CPP_REGISTER_METHOD(0x00C7DE20, bool, IsPointUnderLight, (Vector2 point));
IL2CPP_REGISTER_METHOD(0x00C7E030, void, OnActivate, (ProtectiveLightCone * __this));
IL2CPP_REGISTER_METHOD(0x00C7E1A0, void, OnDeactivate, (ProtectiveLightCone * __this));
IL2CPP_REGISTER_METHOD(0x00C7E310, bool, ContainsPoint, (ProtectiveLightCone * __this, Vector2 point));
IL2CPP_REGISTER_METHOD(0x00C7E790, int32_t, SideOfLine, (Vector2 a, Vector2 b, Vector2 point));
IL2CPP_REGISTER_METHOD(0x00C7E880, void, __ctor, (ProtectiveLightCone * __this));
IL2CPP_REGISTER_METHOD(0x00C7E930, void, __cctor, ());
}
