#include <interception_macros.h>

namespace app::methods::CartPlatformMovement {
IL2CPP_REGISTER_METHOD(0x00B3D890, Vector2, WorldToLocal, (CartPlatformMovement * __this, Vector2 world));
IL2CPP_REGISTER_METHOD(0x00B3D9D0, Vector2, LocalToWorld, (CartPlatformMovement * __this, Vector2 local));
IL2CPP_REGISTER_METHOD(0x00B3DAE0, Vector2, CalculatePositionDelta, (CartPlatformMovement * __this));
IL2CPP_REGISTER_METHOD(0x00B3DC50, void, Move, (CartPlatformMovement * __this, Vector3 move));
IL2CPP_REGISTER_METHOD(0x00B3DDD0, bool, OnUpdate, (CartPlatformMovement * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00B3E620, void, __ctor, (CartPlatformMovement * __this));
}
