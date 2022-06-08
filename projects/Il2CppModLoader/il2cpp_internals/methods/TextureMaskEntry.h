#include <interception_macros.h>

namespace app::methods::TextureMaskEntry {
IL2CPP_REGISTER_METHOD(0x002FB990, Texture2D *, get_SourceTexture, (TextureMaskEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_SourceTexture, (TextureMaskEntry * __this, Texture2D * value));
IL2CPP_REGISTER_METHOD(0x00CB5CD0, Rect, get_SourceTextureBounds, (TextureMaskEntry * __this));
IL2CPP_REGISTER_METHOD(0x00CB5CE0, void, set_SourceTextureBounds, (TextureMaskEntry * __this, Rect value));
IL2CPP_REGISTER_METHOD(0x006B5650, float, get_ScaleMultiplier, (TextureMaskEntry * __this));
IL2CPP_REGISTER_METHOD(0x0098F5E0, void, set_ScaleMultiplier, (TextureMaskEntry * __this, float value));
IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_IsValid, (TextureMaskEntry * __this));
IL2CPP_REGISTER_METHOD(0x0098F4B0, void, set_IsValid, (TextureMaskEntry * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TextureMaskEntry * __this, GameObject * source, int32_t width, int32_t height));
IL2CPP_REGISTER_METHOD(0x010EB030, Vector2, GetNomalizeCoords, (TextureMaskEntry * __this, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x010EB060, Nullable_1_UnityEngine_Color_, SampleSourceTexture, (TextureMaskEntry * __this, int32_t x, int32_t y, Rect CanvasWorldSpaceRect));
IL2CPP_REGISTER_METHOD(0x010EB090, Vector2, RotateUV, (TextureMaskEntry * __this, Vector2 uv, float angle, Vector2 pivot, float scaleMultiplier));
IL2CPP_REGISTER_METHOD(0x010EB7A0, Texture2D *, DuplicateTexture, (TextureMaskEntry * __this, Texture2D * source));
}
