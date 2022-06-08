using namespace app;

namespace app::methods::System::Data::SqlTypes::SqlString {
IL2CPP_REGISTER_METHOD(0x001E6070, void, __ctor, (SqlString__Boxed * __this, bool fNull));
IL2CPP_REGISTER_METHOD(0x001E6090, void, __ctor, (SqlString__Boxed * __this, String * data, int32_t lcid, SqlCompareOptions__Enum compareOptions));
IL2CPP_REGISTER_METHOD(0x001E60A0, void, __ctor, (SqlString__Boxed * __this, String * data));
IL2CPP_REGISTER_METHOD(0x001E60B0, void, __ctor, (SqlString__Boxed * __this, int32_t lcid, SqlCompareOptions__Enum compareOptions, String * data, CompareInfo * cmpInfo));
IL2CPP_REGISTER_METHOD(0x001E60C0, bool, get_IsNull, (SqlString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E60D0, String *, get_Value, (SqlString__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x047401D8, SqlString_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E60E0, void, SetCompareInfo, (SqlString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x022BA3B0, SqlString, operator_, (String * x));
IL2CPP_REGISTER_METHOD(0x001E60F0, String *, ToString, (SqlString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x022BA3E0, SqlString, operator__, (SqlString x, SqlString y));
IL2CPP_REGISTER_METHODINFO(0x04730CD0, SqlString_op_Addition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022BA5D0, int32_t, StringCompare, (SqlString x, SqlString y));
IL2CPP_REGISTER_METHODINFO(0x0477E818, SqlString_StringCompare__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022BAA30, SqlBoolean, Compare, (SqlString x, SqlString y, EComparison__Enum ecExpectedResult));
IL2CPP_REGISTER_METHOD(0x022BABF0, SqlBoolean, operator___, (SqlString x, SqlString y));
IL2CPP_REGISTER_METHOD(0x022BADC0, void, ValidateSqlCompareOptions, (SqlCompareOptions__Enum compareOptions));
IL2CPP_REGISTER_METHODINFO(0x047642B0, SqlString_ValidateSqlCompareOptions__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022BAEA0, CompareOptions__Enum, CompareOptionsFromSqlCompareOptions, (SqlCompareOptions__Enum compareOptions));
IL2CPP_REGISTER_METHODINFO(0x04753B28, SqlString_CompareOptionsFromSqlCompareOptions__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E6110, bool, FBinarySort, (SqlString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x022BAFB0, int32_t, CompareBinary, (SqlString x, SqlString y));
IL2CPP_REGISTER_METHOD(0x022BB2B0, int32_t, CompareBinary2, (SqlString x, SqlString y));
IL2CPP_REGISTER_METHOD(0x001E6130, int32_t, CompareTo, (SqlString__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04790E18, SqlString_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E6280, int32_t, CompareTo, (SqlString__Boxed * __this, SqlString value));
IL2CPP_REGISTER_METHOD(0x001E62B0, bool, Equals, (SqlString__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x001E62C0, int32_t, GetHashCode, (SqlString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013BB70, XmlSchema *, IXmlSerializable_GetSchema, (SqlString__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E62D0, void, IXmlSerializable_ReadXml, (SqlString__Boxed * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x001E6400, void, IXmlSerializable_WriteXml, (SqlString__Boxed * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x022BBBE0, XmlQualifiedName *, GetXsdType, (XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x022BBD30, void, __cctor, (MethodInfo * method));
}
