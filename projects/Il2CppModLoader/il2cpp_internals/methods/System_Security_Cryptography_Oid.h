#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::Oid {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Oid * __this));
IL2CPP_REGISTER_METHOD(0x021C0800, void, __ctor, (Oid * __this, String * oid));
IL2CPP_REGISTER_METHOD(0x021C0840, void, __ctor, (Oid * __this, String * oid, OidGroup__Enum group, bool lookupFriendlyName));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (Oid * __this, String * value, String * friendlyName));
IL2CPP_REGISTER_METHOD(0x021C08C0, void, __ctor, (Oid * __this, Oid * oid));
IL2CPP_REGISTER_METHODINFO(0x0473D100, Oid__ctor_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Value, (Oid * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Value, (Oid * __this, String * value));
IL2CPP_REGISTER_METHOD(0x021C0990, String *, get_FriendlyName, (Oid * __this));
}
