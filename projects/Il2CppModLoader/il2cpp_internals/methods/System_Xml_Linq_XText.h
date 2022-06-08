#include <interception_macros.h>

namespace app::methods::System::Xml::Linq::XText {
IL2CPP_REGISTER_METHOD(0x0303D1D0, void, __ctor, (XText * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x047734E8, XText__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0303D290, void, __ctor, (XText * __this, XText * other));
IL2CPP_REGISTER_METHODINFO(0x0475C498, XText__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420230, XmlNodeType__Enum, get_NodeType, (XText * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Value, (XText * __this));
IL2CPP_REGISTER_METHOD(0x0303D350, void, set_Value, (XText * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x047056A8, XText_set_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0303D4A0, void, WriteTo, (XText * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHODINFO(0x04729D18, XText_WriteTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0303D5F0, void, AppendText, (XText * __this, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x0303D620, XNode *, CloneNode, (XText * __this));
}
