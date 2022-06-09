#include <interception_macros.h>

namespace app::methods::System_Xml::DomNameTable {
IL2CPP_REGISTER_METHOD(0x021E9360, void, __ctor, (app::DomNameTable * this_ptr, app::XmlDocument * document));
IL2CPP_REGISTER_METHOD(0x021E9430, XmlName *, GetName, (app::DomNameTable * this_ptr, app::String * prefix, app::String * local_name, app::String * ns, app::IXmlSchemaInfo * schema_info));
IL2CPP_REGISTER_METHOD(0x021E9600, XmlName *, AddName, (app::DomNameTable * this_ptr, app::String * prefix, app::String * local_name, app::String * ns, app::IXmlSchemaInfo * schema_info));
IL2CPP_REGISTER_METHOD(0x021E9930, void, Grow, (app::DomNameTable * this_ptr));
}
