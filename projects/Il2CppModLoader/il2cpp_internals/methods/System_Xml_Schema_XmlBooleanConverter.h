#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlBooleanConverter {
IL2CPP_REGISTER_METHOD(0x02244E40, void, __ctor, (XmlBooleanConverter * __this, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x02244EF0, XmlValueConverter *, Create, (XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x022450B0, bool, ToBoolean, (XmlBooleanConverter * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04785438, XmlBooleanConverter_ToBoolean__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02245180, bool, ToBoolean, (XmlBooleanConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x047428A0, XmlBooleanConverter_ToBoolean_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022454B0, String *, ToString, (XmlBooleanConverter * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02245550, String *, ToString, (XmlBooleanConverter * __this, Object * value, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0473B2D0, XmlBooleanConverter_ToString_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02245860, Object *, ChangeType, (XmlBooleanConverter * __this, bool value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x04736730, XmlBooleanConverter_ChangeType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02245CF0, Object *, ChangeType, (XmlBooleanConverter * __this, String * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04741D50, XmlBooleanConverter_ChangeType_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022461A0, Object *, ChangeType, (XmlBooleanConverter * __this, Object * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04723438, XmlBooleanConverter_ChangeType_2__MethodInfo);
}
