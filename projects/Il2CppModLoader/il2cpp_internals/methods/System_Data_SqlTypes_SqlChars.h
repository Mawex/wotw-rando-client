#include <interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlChars {
IL2CPP_REGISTER_METHOD(0x01E518F0, void, __ctor, (SqlChars * __this));
IL2CPP_REGISTER_METHOD(0x01E51910, void, __ctor, (SqlChars * __this, Char__Array * buffer));
IL2CPP_REGISTER_METHOD(0x01E52680, void, __ctor, (SqlChars * __this, SqlString value));
IL2CPP_REGISTER_METHOD(0x01E519D0, bool, get_IsNull, (SqlChars * __this));
IL2CPP_REGISTER_METHOD(0x01E52710, Char__Array *, get_Buffer, (SqlChars * __this));
IL2CPP_REGISTER_METHOD(0x01E52740, int64_t, get_Length, (SqlChars * __this));
IL2CPP_REGISTER_METHODINFO(0x04778888, SqlChars_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E52810, Char__Array *, get_Value, (SqlChars * __this));
IL2CPP_REGISTER_METHODINFO(0x04796B60, SqlChars_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E518F0, void, SetNull, (SqlChars * __this));
IL2CPP_REGISTER_METHOD(0x01E51EE0, bool, FStream, (SqlChars * __this));
IL2CPP_REGISTER_METHOD(0x01E52A70, void, CopyStreamToBuffer, (SqlChars * __this));
IL2CPP_REGISTER_METHODINFO(0x0473DA28, SqlChars_CopyStreamToBuffer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E51EF0, void, SetBuffer, (SqlChars * __this, Char__Array * buffer));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchema *, IXmlSerializable_GetSchema, (SqlChars * __this));
IL2CPP_REGISTER_METHOD(0x01E52C10, void, IXmlSerializable_ReadXml, (SqlChars * __this, XmlReader * r));
IL2CPP_REGISTER_METHOD(0x01E52D80, void, IXmlSerializable_WriteXml, (SqlChars * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x01E52F90, XmlQualifiedName *, GetXsdType, (XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x01E530E0, void, ISerializable_GetObjectData, (SqlChars * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0470DCA0, SqlChars_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E53130, SqlChars *, get_Null, ());
}
