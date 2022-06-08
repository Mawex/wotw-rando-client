using namespace app;

namespace app::methods::System::Xml::Schema::Datatype_char {
IL2CPP_REGISTER_METHOD(0x0235A120, Type *, get_ValueType, (Datatype_char * __this));
IL2CPP_REGISTER_METHOD(0x0235A1C0, Type *, get_ListValueType, (Datatype_char * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, RestrictionFlags__Enum, get_ValidRestrictionFlags, (Datatype_char * __this));
IL2CPP_REGISTER_METHOD(0x0235A260, int32_t, Compare, (Datatype_char * __this, Object * value1, Object * value2));
IL2CPP_REGISTER_METHOD(0x0235A320, Object *, ParseValue, (Datatype_char * __this, String * s, XmlNameTable * nameTable, IXmlNamespaceResolver * nsmgr));
IL2CPP_REGISTER_METHODINFO(0x04731AF0, Datatype_char_ParseValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0235A480, Exception *, TryParseValue, (Datatype_char * __this, String * s, XmlNameTable * nameTable, IXmlNamespaceResolver * nsmgr, Object * * typedValue));
IL2CPP_REGISTER_METHOD(0x0235A560, void, __ctor, (Datatype_char * __this));
IL2CPP_REGISTER_METHOD(0x0235A600, void, __cctor, (MethodInfo * method));
}
