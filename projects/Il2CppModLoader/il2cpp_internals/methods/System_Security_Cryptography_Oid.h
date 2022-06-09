#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::Oid {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::Oid * this_ptr));
IL2CPP_REGISTER_METHOD(0x021C0800, void, __ctor_2, (app::Oid * this_ptr, app::String * oid));
IL2CPP_REGISTER_METHOD(0x021C0840, void, __ctor_3, (app::Oid * this_ptr, app::String * oid, app::OidGroup__Enum group, bool lookup_friendly_name));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor_4, (app::Oid * this_ptr, app::String * value, app::String * friendly_name));
IL2CPP_REGISTER_METHOD(0x021C08C0, void, __ctor_5, (app::Oid * this_ptr, app::Oid * oid));
IL2CPP_REGISTER_METHODINFO(0x0473D100, Oid__ctor_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Value, (app::Oid * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Value, (app::Oid * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x021C0990, String *, get_FriendlyName, (app::Oid * this_ptr));
}
