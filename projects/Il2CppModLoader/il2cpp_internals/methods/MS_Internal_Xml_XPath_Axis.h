#include <interception_macros.h>

namespace app::methods::MS_Internal_Xml_XPath::Axis {
IL2CPP_REGISTER_METHOD(0x021D8C00, void, __ctor_1, (app::Axis * this_ptr, app::Axis_AxisType__Enum axis_type, app::AstNode * input, app::String * prefix, app::String * name, app::XPathNodeType__Enum nodetype));
IL2CPP_REGISTER_METHOD(0x021D8CD0, void, __ctor_2, (app::Axis * this_ptr, app::Axis_AxisType__Enum axis_type, app::AstNode * input));
IL2CPP_REGISTER_METHOD(0x00420EE0, AstNode_AstType__Enum, get_Type, (app::Axis * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420230, XPathResultType__Enum, get_ReturnType, (app::Axis * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, AstNode *, get_Input, (app::Axis * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Input, (app::Axis * this_ptr, app::AstNode * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Prefix, (app::Axis * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Name, (app::Axis * this_ptr));
IL2CPP_REGISTER_METHOD(0x00654950, XPathNodeType__Enum, get_NodeType, (app::Axis * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FC6D0, Axis_AxisType__Enum, get_TypeOfAxis, (app::Axis * this_ptr));
IL2CPP_REGISTER_METHOD(0x00446970, bool, get_AbbrAxis, (app::Axis * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_Urn, (app::Axis * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Urn, (app::Axis * this_ptr, app::String * value));
}
