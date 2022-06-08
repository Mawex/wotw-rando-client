#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlDateTimeConverter {
IL2CPP_REGISTER_METHOD(0x02246B80, void, __ctor, (XmlDateTimeConverter * __this, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x02246C30, XmlValueConverter *, Create, (XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x02246DF0, DateTime, ToDateTime, (XmlDateTimeConverter * __this, DateTimeOffset value));
IL2CPP_REGISTER_METHOD(0x02246EB0, DateTime, ToDateTime, (XmlDateTimeConverter * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04755C00, XmlDateTimeConverter_ToDateTime_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022473E0, DateTime, ToDateTime, (XmlDateTimeConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0474A3E8, XmlDateTimeConverter_ToDateTime_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022477A0, DateTimeOffset, ToDateTimeOffset, (XmlDateTimeConverter * __this, DateTime value));
IL2CPP_REGISTER_METHOD(0x022477D0, DateTimeOffset, ToDateTimeOffset, (XmlDateTimeConverter * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0473FEB0, XmlDateTimeConverter_ToDateTimeOffset_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02247D10, DateTimeOffset, ToDateTimeOffset, (XmlDateTimeConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04768750, XmlDateTimeConverter_ToDateTimeOffset_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02248120, String *, ToString, (XmlDateTimeConverter * __this, DateTime value));
IL2CPP_REGISTER_METHOD(0x02248350, String *, ToString, (XmlDateTimeConverter * __this, DateTimeOffset value));
IL2CPP_REGISTER_METHOD(0x02248590, String *, ToString, (XmlDateTimeConverter * __this, Object * value, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0474F680, XmlDateTimeConverter_ToString_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02248940, Object *, ChangeType, (XmlDateTimeConverter * __this, DateTime value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x0473A538, XmlDateTimeConverter_ChangeType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02248E40, Object *, ChangeType, (XmlDateTimeConverter * __this, String * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0473BBB8, XmlDateTimeConverter_ChangeType_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02249360, Object *, ChangeType, (XmlDateTimeConverter * __this, Object * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04708D60, XmlDateTimeConverter_ChangeType_2__MethodInfo);
}
