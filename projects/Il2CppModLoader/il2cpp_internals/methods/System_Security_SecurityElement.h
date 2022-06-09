#include <interception_macros.h>

namespace app::methods::System_Security::SecurityElement {
IL2CPP_REGISTER_METHOD(0x01E1ED30, void, __ctor_1, (app::SecurityElement * this_ptr, app::String * tag));
IL2CPP_REGISTER_METHOD(0x01E1ED40, void, __ctor_2, (app::SecurityElement * this_ptr, app::String * tag, app::String * text));
IL2CPP_REGISTER_METHODINFO(0x0476F9D8, SecurityElement__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1EF40, Hashtable *, get_Attributes, (app::SecurityElement * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, ArrayList *, get_Children, (app::SecurityElement * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Tag, (app::SecurityElement * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Text, (app::SecurityElement * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E1F2C0, void, set_Text, (app::SecurityElement * this_ptr, app::String * value));
IL2CPP_REGISTER_METHODINFO(0x04791E20, SecurityElement_set_Text__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1F4A0, void, AddAttribute, (app::SecurityElement * this_ptr, app::String * name, app::String * value));
IL2CPP_REGISTER_METHODINFO(0x04744490, SecurityElement_AddAttribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1F7D0, void, AddChild, (app::SecurityElement * this_ptr, app::SecurityElement * child));
IL2CPP_REGISTER_METHODINFO(0x0476A428, SecurityElement_AddChild__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1F990, String *, Attribute, (app::SecurityElement * this_ptr, app::String * name));
IL2CPP_REGISTER_METHODINFO(0x04735960, SecurityElement_Attribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1FA70, String *, Escape, (app::String * str));
IL2CPP_REGISTER_METHOD(0x01E1FD70, String *, Unescape, (app::String * str));
IL2CPP_REGISTER_METHOD(0x01E1FFD0, SecurityElement *, FromString, (app::String * xml));
IL2CPP_REGISTER_METHODINFO(0x0470E578, SecurityElement_FromString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E20200, bool, IsValidAttributeName, (app::String * name));
IL2CPP_REGISTER_METHOD(0x01E202E0, bool, IsValidAttributeValue, (app::String * value));
IL2CPP_REGISTER_METHOD(0x01E203C0, bool, IsValidTag, (app::String * tag));
IL2CPP_REGISTER_METHOD(0x01E204A0, bool, IsValidText, (app::String * text));
IL2CPP_REGISTER_METHOD(0x01E20580, SecurityElement *, SearchForChildByTag, (app::SecurityElement * this_ptr, app::String * tag));
IL2CPP_REGISTER_METHODINFO(0x04765520, SecurityElement_SearchForChildByTag__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E20720, String *, SearchForTextOfTag, (app::SecurityElement * this_ptr, app::String * tag));
IL2CPP_REGISTER_METHODINFO(0x0475E3E8, SecurityElement_SearchForTextOfTag__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E208D0, String *, ToString, (app::SecurityElement * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E20A70, void, ToXml, (app::SecurityElement * this_ptr, app::StringBuilder * * s, int32_t level));
IL2CPP_REGISTER_METHOD(0x01E21010, SecurityElement_SecurityAttribute *, GetAttribute, (app::SecurityElement * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_m_strText, (app::SecurityElement * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x01E21210, String *, SearchForTextOfLocalName, (app::SecurityElement * this_ptr, app::String * str_local_name));
IL2CPP_REGISTER_METHODINFO(0x04728370, SecurityElement_SearchForTextOfLocalName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E214E0, void, __cctor, ());
}
