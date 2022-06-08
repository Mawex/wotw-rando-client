#include <interception_macros.h>

namespace app::methods::WorldCoordinatesMap {
IL2CPP_REGISTER_METHOD(0x0057EC10, Vector3, WorldToLocal, (WorldCoordinatesMap * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0057F440, bool, IsInside, (WorldCoordinatesMap * __this, Vector2 position));
IL2CPP_REGISTER_METHOD(0x0057FBA0, Vector3, LocalToWorld, (WorldCoordinatesMap * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00580790, void, OnDrawGizmos, (WorldCoordinatesMap * __this));
IL2CPP_REGISTER_METHOD(0x00580E30, void, __ctor, (WorldCoordinatesMap * __this));
}
