#include <interception_macros.h>

namespace app::methods::GUIController {
IL2CPP_REGISTER_METHOD(0x03163090, void, Start, (GUIController * __this));
IL2CPP_REGISTER_METHOD(0x03163AB0, void, Update, (GUIController * __this));
IL2CPP_REGISTER_METHOD(0x03163C30, float, ShaderFloat, (GUIController * __this, int32_t name, float value));
IL2CPP_REGISTER_METHOD(0x03163D20, float, ShaderFloat, (GUIController * __this, int32_t name, float value, float min, float max));
IL2CPP_REGISTER_METHOD(0x03163E20, void, UpdateContent, (GUIController * __this));
IL2CPP_REGISTER_METHOD(0x03163F10, void, UpdateFont, (GUIController * __this));
IL2CPP_REGISTER_METHOD(0x031640B0, void, UpdateShader, (GUIController * __this));
IL2CPP_REGISTER_METHOD(0x03164250, void, __ctor, (GUIController * __this));
IL2CPP_REGISTER_METHOD(0x031642D0, void, __cctor, ());
}
