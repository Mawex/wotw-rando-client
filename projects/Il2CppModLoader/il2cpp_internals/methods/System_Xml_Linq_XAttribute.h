#include <interception_macros.h>

namespace app::methods::System::Xml::Linq::XAttribute {
IL2CPP_REGISTER_METHOD(0x0302E320, void, __ctor, (XAttribute * __this, XName * name, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04718A70, XAttribute__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0302E440, void, __ctor, (XAttribute * __this, XAttribute * other));
IL2CPP_REGISTER_METHODINFO(0x04764CF8, XAttribute__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0302E510, bool, get_IsNamespaceDeclaration, (XAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, XName *, get_Name, (XAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, XmlNodeType__Enum, get_NodeType, (XAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Value, (XAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0302E610, void, set_Value, (XAttribute * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04789E88, XAttribute_set_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0302E770, String *, ToString, (XAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0302ED30, String *, GetPrefixOfNamespace, (XAttribute * __this, XNamespace * ns));
IL2CPP_REGISTER_METHOD(0x0302EE90, void, ValidateAttribute, (XName * name, String * value));
IL2CPP_REGISTER_METHODINFO(0x04711178, XAttribute_ValidateAttribute__MethodInfo);
}
