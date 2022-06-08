#include <interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlBytes {
IL2CPP_REGISTER_METHOD(0x01E518F0, void, __ctor, (SqlBytes * __this));
IL2CPP_REGISTER_METHOD(0x01E51910, void, __ctor, (SqlBytes * __this, Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x01E51950, void, __ctor, (SqlBytes * __this, SqlBinary value));
IL2CPP_REGISTER_METHOD(0x01E519D0, bool, get_IsNull, (SqlBytes * __this));
IL2CPP_REGISTER_METHOD(0x01E519E0, Byte__Array *, get_Buffer, (SqlBytes * __this));
IL2CPP_REGISTER_METHOD(0x01E51A10, int64_t, get_Length, (SqlBytes * __this));
IL2CPP_REGISTER_METHODINFO(0x0476BE50, SqlBytes_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E51AE0, Byte__Array *, get_Value, (SqlBytes * __this));
IL2CPP_REGISTER_METHODINFO(0x0473DA90, SqlBytes_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E518F0, void, SetNull, (SqlBytes * __this));
IL2CPP_REGISTER_METHOD(0x01E51D40, void, CopyStreamToBuffer, (SqlBytes * __this));
IL2CPP_REGISTER_METHODINFO(0x04791C08, SqlBytes_CopyStreamToBuffer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E51EE0, bool, FStream, (SqlBytes * __this));
IL2CPP_REGISTER_METHOD(0x01E51EF0, void, SetBuffer, (SqlBytes * __this, Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchema *, IXmlSerializable_GetSchema, (SqlBytes * __this));
IL2CPP_REGISTER_METHOD(0x01E51F20, void, IXmlSerializable_ReadXml, (SqlBytes * __this, XmlReader * r));
IL2CPP_REGISTER_METHOD(0x01E52160, void, IXmlSerializable_WriteXml, (SqlBytes * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x01E52390, XmlQualifiedName *, GetXsdType, (XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x01E524E0, void, ISerializable_GetObjectData, (SqlBytes * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0477B030, SqlBytes_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E52530, SqlBytes *, get_Null, ());
}
