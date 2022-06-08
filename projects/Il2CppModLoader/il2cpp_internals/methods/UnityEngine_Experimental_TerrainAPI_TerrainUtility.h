#include <interception_macros.h>

namespace app::methods::UnityEngine::Experimental::TerrainAPI::TerrainUtility {
IL2CPP_REGISTER_METHOD(0x031973C0, bool, HasValidTerrains, ());
IL2CPP_REGISTER_METHOD(0x03197470, void, ClearConnectivity, ());
IL2CPP_REGISTER_METHOD(0x03197590, TerrainUtility_TerrainGroups *, CollectTerrains, (bool onlyAutoConnectedTerrains));
IL2CPP_REGISTER_METHOD(0x03197BB0, void, AutoConnect, ());
}
