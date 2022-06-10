#pragma once
#include <interception_macros.h>

namespace app::methods::UnityEngine::Tilemaps::TileBase {
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::TileBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BF060, void, RefreshTile, (app::TileBase * this_ptr, app::Vector3Int position, app::ITilemap * tilemap))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GetTileData, (app::TileBase * this_ptr, app::Vector3Int position, app::ITilemap * tilemap, app::TileData * tile_data))
    IL2CPP_REGISTER_METHOD(0x031BF0F0, app::TileData, GetTileDataNoRef, (app::TileBase * this_ptr, app::Vector3Int position, app::ITilemap * tilemap))
    IL2CPP_REGISTER_METHOD(0x00B1B670, bool, GetTileAnimationData, (app::TileBase * this_ptr, app::Vector3Int position, app::ITilemap * tilemap, app::TileAnimationData * tile_animation_data))
    IL2CPP_REGISTER_METHOD(0x031BF1C0, app::TileAnimationData, GetTileAnimationDataNoRef, (app::TileBase * this_ptr, app::Vector3Int position, app::ITilemap * tilemap))
    IL2CPP_REGISTER_METHOD(0x00B1B670, bool, StartUp, (app::TileBase * this_ptr, app::Vector3Int position, app::ITilemap * tilemap, app::GameObject * go))
}
