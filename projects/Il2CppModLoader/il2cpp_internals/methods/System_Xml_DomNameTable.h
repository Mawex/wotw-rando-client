#include <interception_macros.h>

namespace app::methods::System::Xml::DomNameTable {
IL2CPP_REGISTER_METHOD(0x021E9360, void, __ctor, (DomNameTable * __this, XmlDocument * document));
IL2CPP_REGISTER_METHOD(0x021E9430, XmlName *, GetName, (DomNameTable * __this, String * prefix, String * localName, String * ns, IXmlSchemaInfo * schemaInfo));
IL2CPP_REGISTER_METHOD(0x021E9600, XmlName *, AddName, (DomNameTable * __this, String * prefix, String * localName, String * ns, IXmlSchemaInfo * schemaInfo));
IL2CPP_REGISTER_METHOD(0x021E9930, void, Grow, (DomNameTable * __this));
}
