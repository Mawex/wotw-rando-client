#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Metadata::SoapMethodAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::SoapMethodAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_UseAttribute, (app::SoapMethodAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String *, get_XmlNamespace, (app::SoapMethodAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0231B330, void, SetReflectionObject, (app::SoapMethodAttribute * this_ptr, app::Object * reflection_object));
}
