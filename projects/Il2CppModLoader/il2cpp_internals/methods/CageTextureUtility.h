#include <interception_macros.h>

namespace app::methods::CageTextureUtility {
IL2CPP_REGISTER_METHOD(0x01680D30, CageTextureUtility_PointaState__Enum, GetPointState, (Vector3 point, Texture2D * texture, Bounds bounds));
IL2CPP_REGISTER_METHOD(0x01680E20, CageTextureUtility_PointaState__Enum, SampleTexture, (int32_t x, int32_t y, Texture2D * texture));
IL2CPP_REGISTER_METHOD(0x01680EF0, CageTextureUtility_PointaState__Enum, GetPointState, (Vector3 point, Byte__Array * * map, int32_t widht, int32_t height, Bounds bounds));
IL2CPP_REGISTER_METHOD(0x01681020, Vector2, WorldToUV, (Vector3 point, int32_t sizeX, int32_t sizeY, Bounds bounds));
IL2CPP_REGISTER_METHOD(0x01681200, void, UpdateMap, (CageStructureTool * cage));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CageTextureUtility * __this));
}
