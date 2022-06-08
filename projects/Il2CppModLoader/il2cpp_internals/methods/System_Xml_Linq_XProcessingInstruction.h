#include <interception_macros.h>

namespace app::methods::System::Xml::Linq::XProcessingInstruction {
IL2CPP_REGISTER_METHOD(0x0303C470, void, __ctor, (XProcessingInstruction * __this, String * target, String * data));
IL2CPP_REGISTER_METHODINFO(0x0476EF30, XProcessingInstruction__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0303C540, void, __ctor, (XProcessingInstruction * __this, XProcessingInstruction * other));
IL2CPP_REGISTER_METHODINFO(0x0477EAD8, XProcessingInstruction__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Data, (XProcessingInstruction * __this));
IL2CPP_REGISTER_METHOD(0x00AD8BA0, XmlNodeType__Enum, get_NodeType, (XProcessingInstruction * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Target, (XProcessingInstruction * __this));
IL2CPP_REGISTER_METHOD(0x0303C610, void, WriteTo, (XProcessingInstruction * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHODINFO(0x04709D68, XProcessingInstruction_WriteTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0303C6E0, XNode *, CloneNode, (XProcessingInstruction * __this));
IL2CPP_REGISTER_METHOD(0x0303C8C0, void, ValidateName, (String * name));
IL2CPP_REGISTER_METHODINFO(0x047669F8, XProcessingInstruction_ValidateName__MethodInfo);
}
