#include <interception_macros.h>

namespace app::methods::UberShader::CompressedLightDirectionMap {
IL2CPP_REGISTER_METHOD(0x018F8C80, bool, get_AllTexturesSet, (CompressedLightDirectionMap * __this));
IL2CPP_REGISTER_METHOD(0x018F8D60, bool, get_IsInitialized, (CompressedLightDirectionMap * __this));
IL2CPP_REGISTER_METHOD(0x018F8E40, String *, GetHash, (CompressedLightDirectionMap * __this, String * atlas));
IL2CPP_REGISTER_METHOD(0x018F9090, Texture2D *, get_RuntimeCompressedTexture, (CompressedLightDirectionMap * __this));
IL2CPP_REGISTER_METHOD(0x018F90E0, void, __ctor, (CompressedLightDirectionMap * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
