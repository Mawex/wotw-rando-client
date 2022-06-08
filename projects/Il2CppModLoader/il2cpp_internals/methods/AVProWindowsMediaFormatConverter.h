#include <interception_macros.h>

namespace app::methods::AVProWindowsMediaFormatConverter {
IL2CPP_REGISTER_METHOD(0x014EE790, bool, get_RequiresConversion, (AVProWindowsMediaFormatConverter * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, Texture *, get_OutputTexture, (AVProWindowsMediaFormatConverter * __this));
IL2CPP_REGISTER_METHOD(0x004C6660, int32_t, get_DisplayFrame, (AVProWindowsMediaFormatConverter * __this));
IL2CPP_REGISTER_METHOD(0x03129B00, bool, get_ValidPicture, (AVProWindowsMediaFormatConverter * __this));
IL2CPP_REGISTER_METHOD(0x03129B10, void, set_ValidPicture, (AVProWindowsMediaFormatConverter * __this, bool value));
IL2CPP_REGISTER_METHOD(0x03129B20, void, Reset, (AVProWindowsMediaFormatConverter * __this));
IL2CPP_REGISTER_METHOD(0x03129B30, Material *, GetConversionMaterial, (AVProWindowsMediaFormatConverter * __this));
IL2CPP_REGISTER_METHOD(0x03129B40, bool, Build, (AVProWindowsMediaFormatConverter * __this, int32_t movieHandle, int32_t width, int32_t height, AVProWindowsMediaPlugin_VideoFrameFormat__Enum format, bool useBT709, bool flipX, bool flipY, FilterMode__Enum filterMode, TextureWrapMode__Enum wrapMode));
IL2CPP_REGISTER_METHOD(0x0312A2B0, bool, Update, (AVProWindowsMediaFormatConverter * __this));
IL2CPP_REGISTER_METHOD(0x0312A450, bool, UpdateTexture, (AVProWindowsMediaFormatConverter * __this));
IL2CPP_REGISTER_METHOD(0x0312A510, void, Dispose, (AVProWindowsMediaFormatConverter * __this));
IL2CPP_REGISTER_METHOD(0x0312A710, bool, CreateMaterial, (AVProWindowsMediaFormatConverter * __this));
IL2CPP_REGISTER_METHOD(0x0312AB70, void, CreateExternalTexture, (AVProWindowsMediaFormatConverter * __this));
IL2CPP_REGISTER_METHOD(0x0312ADF0, void, CreateTexture, (AVProWindowsMediaFormatConverter * __this));
IL2CPP_REGISTER_METHOD(0x0312B450, void, CreateRenderTexture, (AVProWindowsMediaFormatConverter * __this));
IL2CPP_REGISTER_METHOD(0x0312B7F0, void, DoFormatConversion, (AVProWindowsMediaFormatConverter * __this));
IL2CPP_REGISTER_METHOD(0x0312BB30, void, CreateUVs, (AVProWindowsMediaFormatConverter * __this, bool invertX, bool invertY));
IL2CPP_REGISTER_METHOD(0x0312BCC0, void, DrawQuad, (Vector4 uv));
IL2CPP_REGISTER_METHOD(0x0312BEF0, void, __ctor, (AVProWindowsMediaFormatConverter * __this));
}
