#include <interception_macros.h>

namespace app::methods::IconPlacementScaler {
IL2CPP_REGISTER_METHOD(0x00624540, void, PlaceIcon, (IconPlacementScaler * __this, GameObject * icon, Vector3 location, bool isTeleportable));
IL2CPP_REGISTER_METHOD(0x00624870, void, RemoveIcon, (IconPlacementScaler * __this, GameObject * icon));
IL2CPP_REGISTER_METHOD(0x00624930, void, UpdateIconPositions, (IconPlacementScaler * __this, bool forceUpdate));
IL2CPP_REGISTER_METHOD(0x006250C0, void, __ctor, (IconPlacementScaler * __this));
}
