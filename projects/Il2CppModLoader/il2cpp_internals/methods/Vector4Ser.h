#include <interception_macros.h>

namespace app::methods::Vector4Ser {
IL2CPP_REGISTER_METHOD(0x013BB150, void, __ctor, (Vector4Ser * __this, float x, float y, float z, float w));
IL2CPP_REGISTER_METHOD(0x013BB170, void, __ctor, (Vector4Ser * __this, Vector4 vector4));
IL2CPP_REGISTER_METHOD(0x013BB170, void, __ctor, (Vector4Ser * __this, Quaternion quatenion));
IL2CPP_REGISTER_METHOD(0x013BB1A0, Vector4, ToVector4, (Vector4Ser * __this));
IL2CPP_REGISTER_METHOD(0x013BB1A0, Quaternion, ToQuartenion, (Vector4Ser * __this));
}
