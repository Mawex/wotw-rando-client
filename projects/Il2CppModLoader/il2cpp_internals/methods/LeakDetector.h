#include <interception_macros.h>

namespace app::methods::LeakDetector {
IL2CPP_REGISTER_METHOD(0x015C2C60, void, Start, (LeakDetector * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (LeakDetector * __this));
IL2CPP_REGISTER_METHOD(0x015C2DE0, String *, GetTexturePath, (String * textureName));
IL2CPP_REGISTER_METHOD(0x015C2F80, void, __ctor, (LeakDetector * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
