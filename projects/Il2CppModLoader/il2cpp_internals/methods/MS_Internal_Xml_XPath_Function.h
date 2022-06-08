#include <interception_macros.h>

namespace app::methods::MS::Internal::Xml::XPath::Function {
IL2CPP_REGISTER_METHOD(0x021D8DA0, void, __ctor, (Function * __this, Function_FunctionType__Enum ftype, ArrayList * argumentList));
IL2CPP_REGISTER_METHOD(0x021D8F00, void, __ctor, (Function * __this, String * prefix, String * name, ArrayList * argumentList));
IL2CPP_REGISTER_METHOD(0x021D9070, void, __ctor, (Function * __this, Function_FunctionType__Enum ftype, AstNode * arg));
IL2CPP_REGISTER_METHOD(0x00910BD0, AstNode_AstType__Enum, get_Type, (Function * __this));
IL2CPP_REGISTER_METHOD(0x021D91F0, XPathResultType__Enum, get_ReturnType, (Function * __this));
IL2CPP_REGISTER_METHOD(0x021D92C0, void, __cctor, ());
}
