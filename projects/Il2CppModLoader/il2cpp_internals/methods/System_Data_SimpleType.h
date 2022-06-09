#include <interception_macros.h>

namespace app::methods::System_Data::SimpleType {
IL2CPP_REGISTER_METHOD(0x01E4C230, void, __ctor_1, (app::SimpleType * this_ptr, app::String * base_type));
IL2CPP_REGISTER_METHOD(0x01E4C370, void, __ctor_2, (app::SimpleType * this_ptr, app::XmlSchemaSimpleType * node));
IL2CPP_REGISTER_METHOD(0x01E4C540, void, ISerializable_GetObjectData, (app::SimpleType * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0478BC78, SimpleType_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E4C590, void, LoadTypeValues, (app::SimpleType * this_ptr, app::XmlSchemaSimpleType * node));
IL2CPP_REGISTER_METHODINFO(0x047290E8, SimpleType_LoadTypeValues__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E4CD10, bool, IsPlainString, (app::SimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_BaseType, (app::SimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, XmlQualifiedName *, get_XmlBaseType, (app::SimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Name, (app::SimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_Namespace, (app::SimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_Length, (app::SimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_MaxLength, (app::SimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_MaxLength, (app::SimpleType * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB930, SimpleType *, get_BaseSimpleType, (app::SimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E4CEA0, String *, get_SimpleTypeQualifiedName, (app::SimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E4CF50, String *, QualifiedName, (app::SimpleType * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x01E4D020, XmlNode *, ToNode, (app::SimpleType * this_ptr, app::XmlDocument * dc, app::Hashtable * prefixes, bool in_remoting));
IL2CPP_REGISTER_METHOD(0x01E4D4F0, SimpleType *, CreateEnumeratedType, (app::String * values));
IL2CPP_REGISTER_METHOD(0x01E4D650, SimpleType *, CreateByteArrayType, (app::String * encoding));
IL2CPP_REGISTER_METHOD(0x01E4D7A0, SimpleType *, CreateLimitedStringType, (int32_t length));
IL2CPP_REGISTER_METHOD(0x01E4D900, SimpleType *, CreateSimpleType, (app::StorageType__Enum type_code, app::Type * type));
IL2CPP_REGISTER_METHOD(0x01E4DAB0, String *, HasConflictingDefinition, (app::SimpleType * this_ptr, app::SimpleType * other_simple_type));
IL2CPP_REGISTER_METHOD(0x01E4DC50, bool, CanHaveMaxLength, (app::SimpleType * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E4DE40, void, ConvertToAnnonymousSimpleType, (app::SimpleType * this_ptr));
}
