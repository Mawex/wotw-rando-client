#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::TripleDESTransform {
IL2CPP_REGISTER_METHOD(0x01E13600, void, __ctor, (TripleDESTransform * __this, TripleDES * algo, bool encryption, Byte__Array * key, Byte__Array * iv));
IL2CPP_REGISTER_METHODINFO(0x0473AF18, TripleDESTransform__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E13E60, void, ECB, (TripleDESTransform * __this, Byte__Array * input, Byte__Array * output));
IL2CPP_REGISTER_METHOD(0x01E14050, Byte__Array *, GetStrongKey, ());
}
