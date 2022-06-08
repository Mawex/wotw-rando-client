#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlTypeMapElementInfo {
IL2CPP_REGISTER_METHOD(0x0194CD70, void, __ctor, (XmlTypeMapElementInfo * __this, XmlTypeMapMember * member, TypeData * type));
IL2CPP_REGISTER_METHOD(0x002FB9F0, TypeData *, get_TypeData, (XmlTypeMapElementInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, Object *, get_ChoiceValue, (XmlTypeMapElementInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_ChoiceValue, (XmlTypeMapElementInfo * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_ElementName, (XmlTypeMapElementInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ElementName, (XmlTypeMapElementInfo * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Namespace, (XmlTypeMapElementInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Namespace, (XmlTypeMapElementInfo * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0194CE40, String *, get_DataTypeNamespace, (XmlTypeMapElementInfo * __this));
IL2CPP_REGISTER_METHOD(0x0194CED0, String *, get_DataTypeName, (XmlTypeMapElementInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, XmlSchemaForm__Enum, get_Form, (XmlTypeMapElementInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_Form, (XmlTypeMapElementInfo * __this, XmlSchemaForm__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, XmlTypeMapping *, get_MappedType, (XmlTypeMapElementInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_MappedType, (XmlTypeMapElementInfo * __this, XmlTypeMapping * value));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsNullable, (XmlTypeMapElementInfo * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsNullable, (XmlTypeMapElementInfo * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBB00, XmlTypeMapMember *, get_Member, (XmlTypeMapElementInfo * __this));
IL2CPP_REGISTER_METHOD(0x004C5130, void, set_NestingLevel, (XmlTypeMapElementInfo * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0194CF00, bool, get_MultiReferenceType, (XmlTypeMapElementInfo * __this));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_WrappedElement, (XmlTypeMapElementInfo * __this));
IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_WrappedElement, (XmlTypeMapElementInfo * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0194CF10, bool, get_IsTextElement, (XmlTypeMapElementInfo * __this));
IL2CPP_REGISTER_METHOD(0x0194CFC0, void, set_IsTextElement, (XmlTypeMapElementInfo * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x047184F8, XmlTypeMapElementInfo_set_IsTextElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0194D0A0, bool, get_IsUnnamedAnyElement, (XmlTypeMapElementInfo * __this));
IL2CPP_REGISTER_METHOD(0x0194D160, void, set_IsUnnamedAnyElement, (XmlTypeMapElementInfo * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x04728AE0, XmlTypeMapElementInfo_set_IsUnnamedAnyElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FDCE0, int32_t, get_ExplicitOrder, (XmlTypeMapElementInfo * __this));
IL2CPP_REGISTER_METHOD(0x008C5DD0, void, set_ExplicitOrder, (XmlTypeMapElementInfo * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0194D240, bool, Equals, (XmlTypeMapElementInfo * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (XmlTypeMapElementInfo * __this));
}
