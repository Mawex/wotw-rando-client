#include <interception_macros.h>

namespace app::methods::UnityEngine::GUITexture {
IL2CPP_REGISTER_METHOD(0x02526F10, Color, get_color, (GUITexture * __this));
IL2CPP_REGISTER_METHOD(0x02526F90, void, set_color, (GUITexture * __this, Color value));
IL2CPP_REGISTER_METHOD(0x02526FF0, void, set_texture, (GUITexture * __this, Texture * value));
IL2CPP_REGISTER_METHOD(0x02527050, void, get_color_Injected, (GUITexture * __this, Color * ret));
IL2CPP_REGISTER_METHOD(0x025270B0, void, set_color_Injected, (GUITexture * __this, Color * value));
}
