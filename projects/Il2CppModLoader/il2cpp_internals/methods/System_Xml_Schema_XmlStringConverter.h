#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlStringConverter {
IL2CPP_REGISTER_METHOD(0x0192ED80, void, __ctor, (XmlStringConverter * __this, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x0192EE30, XmlValueConverter *, Create, (XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x0192EFF0, String *, ToString, (XmlStringConverter * __this, Object * value, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0476DA80, XmlStringConverter_ToString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0192F260, Object *, ChangeType, (XmlStringConverter * __this, String * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x047700F8, XmlStringConverter_ChangeType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0192F660, Object *, ChangeType, (XmlStringConverter * __this, Object * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x047639D8, XmlStringConverter_ChangeType_1__MethodInfo);
}
