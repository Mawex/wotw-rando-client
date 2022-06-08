#include <interception_macros.h>

namespace app::methods::Atlas {
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_TexturePath, (Atlas * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_TexturePath, (Atlas * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00844A30, AtlasSpriteTexture *, FindAtlasSprite, (Atlas * __this, MoonGuid * guid));
IL2CPP_REGISTER_METHOD(0x00844CC0, void, InitCache, (Atlas * __this));
IL2CPP_REGISTER_METHOD(0x00844E40, void, ClearData, (Atlas * __this));
IL2CPP_REGISTER_METHOD(0x00844F00, AtlasSpriteTexture *, AddFrameTexture, (Atlas * __this, String * frameName, Vector2 centerOffset, Vector2 originalSize, Rect normalizedRect, bool flipped, MoonGuid * guid));
IL2CPP_REGISTER_METHOD(0x00845150, void, InvalidateCache, (Atlas * __this));
IL2CPP_REGISTER_METHOD(0x008451E0, void, __ctor, (Atlas * __this));
}
