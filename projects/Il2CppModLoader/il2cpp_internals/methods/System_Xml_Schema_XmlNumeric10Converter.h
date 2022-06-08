using namespace app;

namespace app::methods::System::Xml::Schema::XmlNumeric10Converter {
IL2CPP_REGISTER_METHOD(0x0224EB90, void, __ctor, (XmlNumeric10Converter * __this, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x0224EC40, XmlValueConverter *, Create, (XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x0224EE00, Decimal, ToDecimal, (XmlNumeric10Converter * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04720A58, XmlNumeric10Converter_ToDecimal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0224EF30, Decimal, ToDecimal, (XmlNumeric10Converter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04742958, XmlNumeric10Converter_ToDecimal_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0224F460, int32_t, ToInt32, (XmlNumeric10Converter * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x0224F500, int32_t, ToInt32, (XmlNumeric10Converter * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04755F88, XmlNumeric10Converter_ToInt32_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0224F680, int32_t, ToInt32, (XmlNumeric10Converter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04701170, XmlNumeric10Converter_ToInt32_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0224FAF0, int64_t, ToInt64, (XmlNumeric10Converter * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0224FB00, int64_t, ToInt64, (XmlNumeric10Converter * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x047113F0, XmlNumeric10Converter_ToInt64_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0224FC80, int64_t, ToInt64, (XmlNumeric10Converter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x047165E0, XmlNumeric10Converter_ToInt64_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022500D0, String *, ToString, (XmlNumeric10Converter * __this, Decimal value));
IL2CPP_REGISTER_METHOD(0x022502C0, String *, ToString, (XmlNumeric10Converter * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02250370, String *, ToString, (XmlNumeric10Converter * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x02250420, String *, ToString, (XmlNumeric10Converter * __this, Object * value, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04796138, XmlNumeric10Converter_ToString_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022508C0, Object *, ChangeType, (XmlNumeric10Converter * __this, Decimal value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x04755D98, XmlNumeric10Converter_ChangeType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02250E90, Object *, ChangeType, (XmlNumeric10Converter * __this, int32_t value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x0472BBD0, XmlNumeric10Converter_ChangeType_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02251460, Object *, ChangeType, (XmlNumeric10Converter * __this, int64_t value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x04795358, XmlNumeric10Converter_ChangeType_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02251A60, Object *, ChangeType, (XmlNumeric10Converter * __this, String * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0471EA10, XmlNumeric10Converter_ChangeType_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02252010, Object *, ChangeType, (XmlNumeric10Converter * __this, Object * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0473C3A8, XmlNumeric10Converter_ChangeType_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022537D0, Object *, ChangeTypeWildcardDestination, (XmlNumeric10Converter * __this, Object * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHOD(0x02253C60, Object *, ChangeTypeWildcardSource, (XmlNumeric10Converter * __this, Object * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
}
