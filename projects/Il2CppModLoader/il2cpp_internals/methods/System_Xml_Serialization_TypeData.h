#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::TypeData {
IL2CPP_REGISTER_METHOD(0x01C903A0, void, __ctor, (TypeData * __this, Type * type, String * elementName, bool isPrimitive));
IL2CPP_REGISTER_METHOD(0x01C903C0, void, __ctor, (TypeData * __this, Type * type, String * elementName, bool isPrimitive, TypeData * mappedType, XmlSchemaPatternFacet * facet));
IL2CPP_REGISTER_METHODINFO(0x0471A128, TypeData__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C908C0, void, LookupTypeConvertor, (TypeData * __this));
IL2CPP_REGISTER_METHOD(0x01C909B0, void, ConvertForAssignment, (TypeData * __this, Object * * value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_TypeName, (TypeData * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_XmlType, (TypeData * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, Type *, get_Type, (TypeData * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_FullTypeName, (TypeData * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, SchemaTypes__Enum, get_SchemaType, (TypeData * __this));
IL2CPP_REGISTER_METHOD(0x01C90B00, bool, get_IsListType, (TypeData * __this));
IL2CPP_REGISTER_METHOD(0x01C90B10, bool, get_IsComplexType, (TypeData * __this));
IL2CPP_REGISTER_METHOD(0x01C90B30, bool, get_IsValueType, (TypeData * __this));
IL2CPP_REGISTER_METHOD(0x01C90C20, bool, get_IsNullable, (TypeData * __this));
IL2CPP_REGISTER_METHOD(0x00575460, void, set_IsNullable, (TypeData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01C90D80, TypeData *, get_ListItemTypeData, (TypeData * __this));
IL2CPP_REGISTER_METHOD(0x01C90E70, Type *, get_ListItemType, (TypeData * __this));
IL2CPP_REGISTER_METHODINFO(0x047331E8, TypeData_get_ListItemType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C91630, bool, get_IsXsdType, (TypeData * __this));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_HasPublicConstructor, (TypeData * __this));
IL2CPP_REGISTER_METHOD(0x01C91640, PropertyInfo_1 *, GetIndexerProperty, (Type * collectionType));
IL2CPP_REGISTER_METHOD(0x01C917E0, InvalidOperationException *, CreateMissingAddMethodException, (Type * type, String * inheritFrom, Type * argumentType));
IL2CPP_REGISTER_METHOD(0x01C919E0, Type *, GetGenericListItemType, (Type * type));
IL2CPP_REGISTER_METHOD(0x01C91C30, void, __cctor, ());
}
