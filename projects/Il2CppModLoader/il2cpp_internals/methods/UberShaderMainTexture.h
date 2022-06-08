#include <interception_macros.h>

namespace app::methods::UberShaderMainTexture {
IL2CPP_REGISTER_METHOD(0x002FA000, void, BindProperties, (UberShaderMainTexture * __this));
IL2CPP_REGISTER_METHOD(0x01912A80, IUberAtlasExternal *, GetExternalAtlasProvider, (UberShaderMainTexture * __this));
IL2CPP_REGISTER_METHOD(0x002FBCE0, UberShaderAtlasTexture *, get_AtlasTexture, (UberShaderMainTexture * __this));
IL2CPP_REGISTER_METHOD(0x01912BE0, void, Set, (UberShaderMainTexture * __this, String * bindName, UberShaderBlock * attachedBlock));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetOriginalTextureWithoutBinding, (UberShaderMainTexture * __this, Texture2D * texture));
IL2CPP_REGISTER_METHOD(0x01912F70, void, __ctor, (UberShaderMainTexture * __this));
}
