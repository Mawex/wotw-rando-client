#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::KeyedHashAlgorithm {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (KeyedHashAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x020DBF60, void, Dispose, (KeyedHashAlgorithm * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x020DBFC0, Byte__Array *, get_Key, (KeyedHashAlgorithm * __this));
IL2CPP_REGISTER_METHOD(0x020DC100, void, set_Key, (KeyedHashAlgorithm * __this, Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x04716BE0, KeyedHashAlgorithm_set_Key__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020DC2A0, KeyedHashAlgorithm *, Create, ());
IL2CPP_REGISTER_METHOD(0x020DC3E0, KeyedHashAlgorithm *, Create, (String * algName));
}
