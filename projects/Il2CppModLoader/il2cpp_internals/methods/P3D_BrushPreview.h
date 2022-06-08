using namespace app;

namespace app::methods::P3D_BrushPreview {
IL2CPP_REGISTER_METHOD(0x03090220, void, Show, (Mesh * mesh, int32_t submeshIndex, Transform * transform, float opacity, P3D_Matrix paintMatrix, Vector2 canvasResolution, Texture2D * shape, Vector2 tiling, Vector2 offset));
IL2CPP_REGISTER_METHOD(0x030906E0, void, Mark, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03090860, void, Sweep, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03090A50, void, OnEnable, (P3D_BrushPreview * __this));
IL2CPP_REGISTER_METHOD(0x03090B10, void, Update, (P3D_BrushPreview * __this));
IL2CPP_REGISTER_METHOD(0x03090BB0, void, OnDisable, (P3D_BrushPreview * __this));
IL2CPP_REGISTER_METHOD(0x03090C70, void, OnDestroy, (P3D_BrushPreview * __this));
IL2CPP_REGISTER_METHOD(0x03090CF0, void, UpdateShow, (P3D_BrushPreview * __this, Mesh * mesh, int32_t submeshIndex, Transform * target, float opacity, P3D_Matrix paintMatrix, Vector2 canvasResolution, Texture2D * shape, Vector2 tiling, Vector2 offset));
IL2CPP_REGISTER_METHOD(0x030918D0, void, __ctor, (P3D_BrushPreview * __this));
IL2CPP_REGISTER_METHOD(0x03091960, void, __cctor, (MethodInfo * method));
}
