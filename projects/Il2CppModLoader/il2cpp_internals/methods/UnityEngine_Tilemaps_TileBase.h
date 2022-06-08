#include <interception_macros.h>

namespace app::methods::UnityEngine::Tilemaps::TileBase {
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (TileBase * __this));
IL2CPP_REGISTER_METHOD(0x031BF060, void, RefreshTile, (TileBase * __this, Vector3Int position, ITilemap * tilemap));
IL2CPP_REGISTER_METHOD(0x002FA000, void, GetTileData, (TileBase * __this, Vector3Int position, ITilemap * tilemap, TileData * tileData));
IL2CPP_REGISTER_METHOD(0x031BF0F0, TileData, GetTileDataNoRef, (TileBase * __this, Vector3Int position, ITilemap * tilemap));
IL2CPP_REGISTER_METHOD(0x00B1B670, bool, GetTileAnimationData, (TileBase * __this, Vector3Int position, ITilemap * tilemap, TileAnimationData * tileAnimationData));
IL2CPP_REGISTER_METHOD(0x031BF1C0, TileAnimationData, GetTileAnimationDataNoRef, (TileBase * __this, Vector3Int position, ITilemap * tilemap));
IL2CPP_REGISTER_METHOD(0x00B1B670, bool, StartUp, (TileBase * __this, Vector3Int position, ITilemap * tilemap, GameObject * go));
}
