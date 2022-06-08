using namespace app;

namespace app::methods::System::Xml::Schema::XmlNumeric2Converter {
IL2CPP_REGISTER_METHOD(0x02254180, void, __ctor, (XmlNumeric2Converter * __this, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x02254230, XmlValueConverter *, Create, (XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x022543F0, double, ToDouble, (XmlNumeric2Converter * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04742D50, XmlNumeric2Converter_ToDouble__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02254510, double, ToDouble, (XmlNumeric2Converter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0473C4D8, XmlNumeric2Converter_ToDouble_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022548C0, float, ToSingle, (XmlNumeric2Converter * __this, double value));
IL2CPP_REGISTER_METHOD(0x022548D0, float, ToSingle, (XmlNumeric2Converter * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04723F90, XmlNumeric2Converter_ToSingle_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022549F0, float, ToSingle, (XmlNumeric2Converter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04767860, XmlNumeric2Converter_ToSingle_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02254E00, String *, ToString, (XmlNumeric2Converter * __this, double value));
IL2CPP_REGISTER_METHOD(0x02254F00, String *, ToString, (XmlNumeric2Converter * __this, float value));
IL2CPP_REGISTER_METHOD(0x02254FE0, String *, ToString, (XmlNumeric2Converter * __this, Object * value, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04782A20, XmlNumeric2Converter_ToString_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02255380, Object *, ChangeType, (XmlNumeric2Converter * __this, double value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x04780198, XmlNumeric2Converter_ChangeType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02255880, Object *, ChangeType, (XmlNumeric2Converter * __this, String * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0474CF20, XmlNumeric2Converter_ChangeType_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02255DB0, Object *, ChangeType, (XmlNumeric2Converter * __this, Object * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x047446D8, XmlNumeric2Converter_ChangeType_2__MethodInfo);
}
