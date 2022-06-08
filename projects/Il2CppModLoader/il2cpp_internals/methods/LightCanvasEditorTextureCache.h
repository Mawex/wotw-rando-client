#include <interception_macros.h>

namespace app::methods::LightCanvasEditorTextureCache {
IL2CPP_REGISTER_METHOD(0x011469D0, LightCanvasEditorTextureCache *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x01146BF0, Texture2D *, GetLightCanvasEditorTempLightTexture, (LightCanvasEditorTextureCache * __this, LightCanvas * lightCanvas));
IL2CPP_REGISTER_METHOD(0x01146C40, Texture2D *, GetLightCanvasEditorTempLightTexture, (LightCanvasEditorTextureCache * __this, LightCanvas * lightCanvas, int32_t state));
IL2CPP_REGISTER_METHOD(0x01146C80, RenderTexture *, GetLightCanvasEditorTempLightRenderTexture, (LightCanvasEditorTextureCache * __this, LightCanvas * lightCanvas));
IL2CPP_REGISTER_METHOD(0x01146CC0, bool, GetLightCanvasTextureDirty, (LightCanvasEditorTextureCache * __this, LightCanvas * lightCanvas));
IL2CPP_REGISTER_METHOD(0x01146D10, bool, GetLightCanvasTextureDirty, (LightCanvasEditorTextureCache * __this, LightCanvas * lightCanvas, int32_t state));
IL2CPP_REGISTER_METHOD(0x01146D50, void, SetLightCanvasTextureDirty, (LightCanvasEditorTextureCache * __this, LightCanvas * lightCanvas, bool isDirty));
IL2CPP_REGISTER_METHOD(0x01146E90, void, SetLightCanvasTextureDirty, (LightCanvasEditorTextureCache * __this, LightCanvas * lightCanvas, int32_t state, bool isDirty));
IL2CPP_REGISTER_METHOD(0x01146FD0, Texture2D *, CreateNewEditorTempTextureForLightCanvas, (LightCanvasEditorTextureCache * __this, LightCanvas * lightCanvas, int32_t width, int32_t height));
IL2CPP_REGISTER_METHOD(0x01147000, Texture2D *, CreateNewEditorTempTextureForLightCanvas, (LightCanvasEditorTextureCache * __this, LightCanvas * lightCanvas, int32_t width, int32_t height, int32_t stateGuid));
IL2CPP_REGISTER_METHOD(0x011473E0, RenderTexture *, CreateNewEditorTempRenderTextureForLightCanvas, (LightCanvasEditorTextureCache * __this, LightCanvas * lightCanvas, int32_t width, int32_t height));
IL2CPP_REGISTER_METHOD(0x01147780, LightCanvasEditorTextureCache_LightCanvasEditorTextureData, GetTextureDataForLightCanvas, (LightCanvasEditorTextureCache * __this, LightCanvas * lightCanvas));
IL2CPP_REGISTER_METHOD(0x011477D0, LightCanvasEditorTextureCache_LightCanvasEditorTextureData, GetTextureDataForLightCanvas, (LightCanvasEditorTextureCache * __this, LightCanvas * lightCanvas, int32_t state));
IL2CPP_REGISTER_METHOD(0x011479A0, bool, HasTextureDataForLightCanvas, (LightCanvasEditorTextureCache * __this, LightCanvas * lightCanvas, int32_t state));
IL2CPP_REGISTER_METHOD(0x01147A80, void, OnBeforeSerialize, (LightCanvasEditorTextureCache * __this));
IL2CPP_REGISTER_METHOD(0x01147C40, void, OnAfterDeserialize, (LightCanvasEditorTextureCache * __this));
IL2CPP_REGISTER_METHOD(0x01147F80, int32_t, GetKey, (LightCanvasEditorTextureCache * __this, LightCanvas * canvas));
IL2CPP_REGISTER_METHOD(0x01147FC0, int32_t, GetKey, (LightCanvasEditorTextureCache * __this, LightCanvas * canvas, int32_t state));
IL2CPP_REGISTER_METHOD(0x01147FF0, void, __ctor, (LightCanvasEditorTextureCache * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
