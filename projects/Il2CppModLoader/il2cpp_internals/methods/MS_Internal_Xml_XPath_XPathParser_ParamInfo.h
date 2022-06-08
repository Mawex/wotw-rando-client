using namespace app;

namespace app::methods::MS::Internal::Xml::XPath::XPathParser_ParamInfo {
IL2CPP_REGISTER_METHOD(0x002FC6D0, Function_FunctionType__Enum, get_FType, (XPathParser_ParamInfo * __this));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Minargs, (XPathParser_ParamInfo * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Maxargs, (XPathParser_ParamInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, XPathResultType__Enum__Array *, get_ArgTypes, (XPathParser_ParamInfo * __this));
IL2CPP_REGISTER_METHOD(0x021DFD00, void, __ctor, (XPathParser_ParamInfo * __this, Function_FunctionType__Enum ftype, int32_t minargs, int32_t maxargs, XPathResultType__Enum__Array * argTypes));
}
