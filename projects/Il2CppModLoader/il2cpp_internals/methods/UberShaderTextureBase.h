using namespace app;

namespace app::methods::UberShaderTextureBase {
IL2CPP_REGISTER_METHOD(0x012885A0, bool, get_IsTransformed, (UberShaderTextureBase * __this));
IL2CPP_REGISTER_METHOD(0x01288740, Vector2, get_TextureScale, (UberShaderTextureBase * __this));
IL2CPP_REGISTER_METHOD(0x01288760, void, set_TextureScale, (UberShaderTextureBase * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01288790, Vector2, get_TextureOffset, (UberShaderTextureBase * __this));
IL2CPP_REGISTER_METHOD(0x012887B0, void, set_TextureOffset, (UberShaderTextureBase * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x012887F0, Vector4, GetTextureShaderSettings, (UberShaderTextureBase * __this));
IL2CPP_REGISTER_METHOD(0x01288970, Vector2, get_TextureScroll, (UberShaderTextureBase * __this));
IL2CPP_REGISTER_METHOD(0x01288990, void, set_TextureScroll, (UberShaderTextureBase * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x012889C0, Vector2, get_TextureScrollMultiplier, (UberShaderTextureBase * __this));
IL2CPP_REGISTER_METHOD(0x012889E0, void, set_TextureScrollMultiplier, (UberShaderTextureBase * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_TextureRotation, (UberShaderTextureBase * __this));
IL2CPP_REGISTER_METHOD(0x01288A10, void, set_TextureRotation, (UberShaderTextureBase * __this, float value));
IL2CPP_REGISTER_METHOD(0x00A479E0, float, get_TextureRotationSpeed, (UberShaderTextureBase * __this));
IL2CPP_REGISTER_METHOD(0x01288A20, void, set_TextureRotationSpeed, (UberShaderTextureBase * __this, float value));
IL2CPP_REGISTER_METHOD(0x01288A30, void, Set, (UberShaderTextureBase * __this, String * bindName, UberShaderBlock * attachedBlock));
IL2CPP_REGISTER_METHOD(0x01288D50, void, BindTexSettings, (UberShaderTextureBase * __this));
IL2CPP_REGISTER_METHOD(0x01288F90, void, BindOptions, (UberShaderTextureBase * __this));
IL2CPP_REGISTER_METHOD(0x012891B0, void, BindBase, (UberShaderTextureBase * __this));
IL2CPP_REGISTER_METHOD(0x012894D0, void, __ctor, (UberShaderTextureBase * __this));
IL2CPP_REGISTER_METHOD(0x012895C0, void, __cctor, (MethodInfo * method));
}
