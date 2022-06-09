#include <interception_macros.h>

namespace app::methods::MS_Internal_Xml_XPath::XPathParser_ParamInfo {
IL2CPP_REGISTER_METHOD(0x002FC6D0, Function_FunctionType__Enum, get_FType, (app::XPathParser_ParamInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Minargs, (app::XPathParser_ParamInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Maxargs, (app::XPathParser_ParamInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, XPathResultType__Enum__Array *, get_ArgTypes, (app::XPathParser_ParamInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x021DFD00, void, __ctor, (app::XPathParser_ParamInfo * this_ptr, app::Function_FunctionType__Enum ftype, int32_t minargs, int32_t maxargs, app::XPathResultType__Enum__Array * arg_types));
}
