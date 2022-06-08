using namespace app;

namespace app::methods::MS::Internal::Xml::XPath::Axis {
IL2CPP_REGISTER_METHOD(0x021D8C00, void, __ctor, (Axis * __this, Axis_AxisType__Enum axisType, AstNode * input, String * prefix, String * name, XPathNodeType__Enum nodetype));
IL2CPP_REGISTER_METHOD(0x021D8CD0, void, __ctor, (Axis * __this, Axis_AxisType__Enum axisType, AstNode * input));
IL2CPP_REGISTER_METHOD(0x00420EE0, AstNode_AstType__Enum, get_Type, (Axis * __this));
IL2CPP_REGISTER_METHOD(0x00420230, XPathResultType__Enum, get_ReturnType, (Axis * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, AstNode *, get_Input, (Axis * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Input, (Axis * __this, AstNode * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Prefix, (Axis * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Name, (Axis * __this));
IL2CPP_REGISTER_METHOD(0x00654950, XPathNodeType__Enum, get_NodeType, (Axis * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, Axis_AxisType__Enum, get_TypeOfAxis, (Axis * __this));
IL2CPP_REGISTER_METHOD(0x00446970, bool, get_AbbrAxis, (Axis * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_Urn, (Axis * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Urn, (Axis * __this, String * value));
}
