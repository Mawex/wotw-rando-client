#include <interception_macros.h>

namespace app::methods::UnityEngine::Tilemaps::Tile {
IL2CPP_REGISTER_METHOD(0x031BEEA0, void, __ctor, (Tile * __this));
IL2CPP_REGISTER_METHOD(0x01F25880, Sprite *, get_sprite, (Tile * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_sprite, (Tile * __this, Sprite * value));
IL2CPP_REGISTER_METHOD(0x031BEF90, Color, get_color, (Tile * __this));
IL2CPP_REGISTER_METHOD(0x02071D00, void, set_color, (Tile * __this, Color value));
IL2CPP_REGISTER_METHOD(0x031BEFA0, Matrix4x4, get_transform, (Tile * __this));
IL2CPP_REGISTER_METHOD(0x031BEFD0, void, set_transform, (Tile * __this, Matrix4x4 value));
IL2CPP_REGISTER_METHOD(0x029F05B0, GameObject *, get_gameObject, (Tile * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_gameObject, (Tile * __this, GameObject * value));
IL2CPP_REGISTER_METHOD(0x031BEFF0, TileFlags__Enum, get_flags, (Tile * __this));
IL2CPP_REGISTER_METHOD(0x00B0E550, void, set_flags, (Tile * __this, TileFlags__Enum value));
IL2CPP_REGISTER_METHOD(0x031BF000, Tile_ColliderType__Enum, get_colliderType, (Tile * __this));
IL2CPP_REGISTER_METHOD(0x012C9CC0, void, set_colliderType, (Tile * __this, Tile_ColliderType__Enum value));
IL2CPP_REGISTER_METHOD(0x031BF010, void, GetTileData, (Tile * __this, Vector3Int position, ITilemap * tilemap, TileData * tileData));
}
