using namespace app;

namespace app::methods::System::Xml::Schema::XmlAtomicValue {
IL2CPP_REGISTER_METHOD(0x0223BA20, void, __ctor, (XmlAtomicValue * __this, XmlSchemaType * xmlType, bool value));
IL2CPP_REGISTER_METHODINFO(0x04799F98, XmlAtomicValue__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223BAF0, void, __ctor, (XmlAtomicValue * __this, XmlSchemaType * xmlType, DateTime value));
IL2CPP_REGISTER_METHODINFO(0x0472EA48, XmlAtomicValue__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223BBC0, void, __ctor, (XmlAtomicValue * __this, XmlSchemaType * xmlType, double value));
IL2CPP_REGISTER_METHODINFO(0x04718558, XmlAtomicValue__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223BCA0, void, __ctor, (XmlAtomicValue * __this, XmlSchemaType * xmlType, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x047119F8, XmlAtomicValue__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223BD70, void, __ctor, (XmlAtomicValue * __this, XmlSchemaType * xmlType, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04734528, XmlAtomicValue__ctor_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223BE40, void, __ctor, (XmlAtomicValue * __this, XmlSchemaType * xmlType, String * value));
IL2CPP_REGISTER_METHODINFO(0x04700CD0, XmlAtomicValue__ctor_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223BF40, void, __ctor, (XmlAtomicValue * __this, XmlSchemaType * xmlType, String * value, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04778450, XmlAtomicValue__ctor_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223C240, void, __ctor, (XmlAtomicValue * __this, XmlSchemaType * xmlType, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04746F10, XmlAtomicValue__ctor_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223C340, void, __ctor, (XmlAtomicValue * __this, XmlSchemaType * xmlType, Object * value, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04794098, XmlAtomicValue__ctor_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, ICloneable_Clone, (XmlAtomicValue * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, XmlSchemaType *, get_XmlType, (XmlAtomicValue * __this));
IL2CPP_REGISTER_METHOD(0x0223C5A0, Type *, get_ValueType, (XmlAtomicValue * __this));
IL2CPP_REGISTER_METHOD(0x0223C5E0, Object *, get_TypedValue, (XmlAtomicValue * __this));
IL2CPP_REGISTER_METHOD(0x0223C830, bool, get_ValueAsBoolean, (XmlAtomicValue * __this));
IL2CPP_REGISTER_METHOD(0x0223C950, DateTime, get_ValueAsDateTime, (XmlAtomicValue * __this));
IL2CPP_REGISTER_METHOD(0x0223CA70, double, get_ValueAsDouble, (XmlAtomicValue * __this));
IL2CPP_REGISTER_METHOD(0x0223CB90, int32_t, get_ValueAsInt, (XmlAtomicValue * __this));
IL2CPP_REGISTER_METHOD(0x0223CCB0, int64_t, get_ValueAsLong, (XmlAtomicValue * __this));
IL2CPP_REGISTER_METHOD(0x0223CDD0, Object *, ValueAs, (XmlAtomicValue * __this, Type * type, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHOD(0x0223D040, String *, get_Value, (XmlAtomicValue * __this));
IL2CPP_REGISTER_METHOD(0x00CC2AF0, String *, ToString, (XmlAtomicValue * __this));
IL2CPP_REGISTER_METHOD(0x0223D180, String *, GetPrefixFromQName, (XmlAtomicValue * __this, String * value));
}
