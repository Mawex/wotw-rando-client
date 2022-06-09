#include <interception_macros.h>

namespace app::methods::System_Runtime_Serialization_Formatters_Binary::TypeInformation {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_FullTypeName, (app::TypeInformation * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_AssemblyString, (app::TypeInformation * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_HasTypeForwardedFrom, (app::TypeInformation * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010415E0, void, __ctor, (app::TypeInformation * this_ptr, app::String * full_type_name, app::String * assembly_string, bool has_type_forwarded_from));
}
