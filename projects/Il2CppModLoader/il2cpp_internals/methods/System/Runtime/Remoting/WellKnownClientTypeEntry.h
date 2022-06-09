#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::WellKnownClientTypeEntry {
    IL2CPP_REGISTER_METHOD(0x01D87770, void, __ctor, (app::WellKnownClientTypeEntry * this_ptr, app::String * type_name, app::String * assembly_name, app::String * object_url));
    IL2CPP_REGISTER_METHODINFO(0x04759FB8, WellKnownClientTypeEntry__ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String *, get_ApplicationUrl, (app::WellKnownClientTypeEntry * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Type *, get_ObjectType, (app::WellKnownClientTypeEntry * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String *, get_ObjectUrl, (app::WellKnownClientTypeEntry * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D878C0, app::String *, ToString, (app::WellKnownClientTypeEntry * this_ptr));
}
