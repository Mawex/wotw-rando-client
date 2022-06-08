#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::RawImage {
IL2CPP_REGISTER_METHOD(0x02663790, void, __ctor, (RawImage * __this));
IL2CPP_REGISTER_METHOD(0x026637C0, Texture *, get_mainTexture, (RawImage * __this));
IL2CPP_REGISTER_METHOD(0x024B76C0, Texture *, get_texture, (RawImage * __this));
IL2CPP_REGISTER_METHOD(0x02663990, void, set_texture, (RawImage * __this, Texture * value));
IL2CPP_REGISTER_METHOD(0x02663A80, Rect, get_uvRect, (RawImage * __this));
IL2CPP_REGISTER_METHOD(0x02663A90, void, set_uvRect, (RawImage * __this, Rect value));
IL2CPP_REGISTER_METHOD(0x02663B00, void, SetNativeSize, (RawImage * __this));
IL2CPP_REGISTER_METHOD(0x02663D80, void, OnPopulateMesh, (RawImage * __this, VertexHelper * vh));
}
