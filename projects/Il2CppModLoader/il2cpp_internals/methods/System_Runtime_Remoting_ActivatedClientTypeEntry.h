#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting::ActivatedClientTypeEntry {
IL2CPP_REGISTER_METHOD(0x01A97590, void, __ctor, (app::ActivatedClientTypeEntry * this_ptr, app::String * type_name, app::String * assembly_name, app::String * app_url));
IL2CPP_REGISTER_METHODINFO(0x04703F98, ActivatedClientTypeEntry__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_ApplicationUrl, (app::ActivatedClientTypeEntry * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, IContextAttribute__Array *, get_ContextAttributes, (app::ActivatedClientTypeEntry * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, Type *, get_ObjectType, (app::ActivatedClientTypeEntry * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A976E0, String *, ToString, (app::ActivatedClientTypeEntry * this_ptr));
}
