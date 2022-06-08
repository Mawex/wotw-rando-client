#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::ValidationEventArgs {
IL2CPP_REGISTER_METHOD(0x01ABDC50, void, __ctor, (ValidationEventArgs * __this, XmlSchemaException * ex));
IL2CPP_REGISTER_METHOD(0x01ABDD00, void, __ctor, (ValidationEventArgs * __this, XmlSchemaException * ex, XmlSeverityType__Enum severity));
IL2CPP_REGISTER_METHOD(0x00529FF0, XmlSeverityType__Enum, get_Severity, (ValidationEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, XmlSchemaException *, get_Exception, (ValidationEventArgs * __this));
}
