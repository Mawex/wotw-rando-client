#include <interception_macros.h>

namespace app::methods::P3D_TexturePreview {
IL2CPP_REGISTER_METHOD(0x030979A0, void, Show, (Mesh * mesh, int32_t submeshIndex, Transform * transform, float opacity, Texture2D * texture, Vector2 tiling, Vector2 offset));
IL2CPP_REGISTER_METHOD(0x03097DD0, void, Mark, ());
IL2CPP_REGISTER_METHOD(0x03097F50, void, Sweep, ());
IL2CPP_REGISTER_METHOD(0x03098140, void, OnEnable, (P3D_TexturePreview * __this));
IL2CPP_REGISTER_METHOD(0x03098200, void, Update, (P3D_TexturePreview * __this));
IL2CPP_REGISTER_METHOD(0x030982A0, void, OnDisable, (P3D_TexturePreview * __this));
IL2CPP_REGISTER_METHOD(0x03098360, void, OnDestroy, (P3D_TexturePreview * __this));
IL2CPP_REGISTER_METHOD(0x030983E0, void, UpdateShow, (P3D_TexturePreview * __this, Mesh * mesh, int32_t submeshIndex, Transform * target, float opacity, Texture2D * texture, Vector2 tiling, Vector2 offset));
IL2CPP_REGISTER_METHOD(0x03098F20, void, __ctor, (P3D_TexturePreview * __this));
IL2CPP_REGISTER_METHOD(0x03098FB0, void, __cctor, ());
}
