#include <interception_macros.h>

namespace app::methods::CustomizeMaterial {
IL2CPP_REGISTER_METHOD(0x002FBC80, Texture *, get_LastMainTexture, (CustomizeMaterial * __this));
IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_LastMainTexture, (CustomizeMaterial * __this, Texture * value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (CustomizeMaterial * __this));
IL2CPP_REGISTER_METHOD(0x00DBD4D0, void, __ctor, (CustomizeMaterial * __this));
}
