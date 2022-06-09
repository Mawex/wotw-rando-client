#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::ValidationEventArgs {
IL2CPP_REGISTER_METHOD(0x01ABDC50, void, __ctor_1, (app::ValidationEventArgs * this_ptr, app::XmlSchemaException * ex));
IL2CPP_REGISTER_METHOD(0x01ABDD00, void, __ctor_2, (app::ValidationEventArgs * this_ptr, app::XmlSchemaException * ex, app::XmlSeverityType__Enum severity));
IL2CPP_REGISTER_METHOD(0x00529FF0, XmlSeverityType__Enum, get_Severity, (app::ValidationEventArgs * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, XmlSchemaException *, get_Exception, (app::ValidationEventArgs * this_ptr));
}
