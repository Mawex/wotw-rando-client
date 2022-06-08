using namespace app;

namespace app::methods::System::Xml::Schema::Datatype_uuid {
IL2CPP_REGISTER_METHOD(0x023637C0, Type *, get_ValueType, (Datatype_uuid * __this));
IL2CPP_REGISTER_METHOD(0x02363860, Type *, get_ListValueType, (Datatype_uuid * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, RestrictionFlags__Enum, get_ValidRestrictionFlags, (Datatype_uuid * __this));
IL2CPP_REGISTER_METHOD(0x02363900, int32_t, Compare, (Datatype_uuid * __this, Object * value1, Object * value2));
IL2CPP_REGISTER_METHOD(0x023639D0, Object *, ParseValue, (Datatype_uuid * __this, String * s, XmlNameTable * nameTable, IXmlNamespaceResolver * nsmgr));
IL2CPP_REGISTER_METHODINFO(0x04722268, Datatype_uuid_ParseValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02363B40, Exception *, TryParseValue, (Datatype_uuid * __this, String * s, XmlNameTable * nameTable, IXmlNamespaceResolver * nsmgr, Object * * typedValue));
IL2CPP_REGISTER_METHOD(0x02363C30, void, __ctor, (Datatype_uuid * __this));
IL2CPP_REGISTER_METHOD(0x02363CD0, void, __cctor, (MethodInfo * method));
}
