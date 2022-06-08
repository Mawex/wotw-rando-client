#include <interception_macros.h>

namespace app::methods::System::Xml::Linq::XContainer {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XContainer * __this));
IL2CPP_REGISTER_METHOD(0x0302F9A0, void, __ctor, (XContainer * __this, XContainer * other));
IL2CPP_REGISTER_METHODINFO(0x0478B1E0, XContainer__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0302FAD0, XNode *, get_LastNode, (XContainer * __this));
IL2CPP_REGISTER_METHOD(0x0302FCD0, void, Add, (XContainer * __this, Object * content));
IL2CPP_REGISTER_METHOD(0x030300A0, IEnumerable_1_System_Xml_Linq_XElement_ *, Descendants, (XContainer * __this));
IL2CPP_REGISTER_METHOD(0x030300B0, IEnumerable_1_System_Xml_Linq_XElement_ *, Descendants, (XContainer * __this, XName * name));
IL2CPP_REGISTER_METHOD(0x030300D0, XElement *, Element, (XContainer * __this, XName * name));
IL2CPP_REGISTER_METHOD(0x03030220, IEnumerable_1_System_Xml_Linq_XElement_ *, Elements, (XContainer * __this));
IL2CPP_REGISTER_METHOD(0x03030230, IEnumerable_1_System_Xml_Linq_XElement_ *, Elements, (XContainer * __this, XName * name));
IL2CPP_REGISTER_METHOD(0x03030250, IEnumerable_1_System_Xml_Linq_XNode_ *, Nodes, (XContainer * __this));
IL2CPP_REGISTER_METHOD(0x030303E0, void, RemoveNodes, (XContainer * __this));
IL2CPP_REGISTER_METHODINFO(0x04741608, XContainer_RemoveNodes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, AddAttribute, (XContainer * __this, XAttribute * a));
IL2CPP_REGISTER_METHOD(0x002FA000, void, AddAttributeSkipNotify, (XContainer * __this, XAttribute * a));
IL2CPP_REGISTER_METHOD(0x030307B0, void, AddContentSkipNotify, (XContainer * __this, Object * content));
IL2CPP_REGISTER_METHOD(0x03030B60, void, AddNode, (XContainer * __this, XNode * n));
IL2CPP_REGISTER_METHOD(0x03030C00, void, AddNodeSkipNotify, (XContainer * __this, XNode * n));
IL2CPP_REGISTER_METHOD(0x03030CA0, void, AddString, (XContainer * __this, String * s));
IL2CPP_REGISTER_METHODINFO(0x04794860, XContainer_AddString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03031190, void, AddStringSkipNotify, (XContainer * __this, String * s));
IL2CPP_REGISTER_METHOD(0x030313E0, void, AppendNode, (XContainer * __this, XNode * n));
IL2CPP_REGISTER_METHODINFO(0x04755E60, XContainer_AppendNode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03031550, void, AppendNodeSkipNotify, (XContainer * __this, XNode * n));
IL2CPP_REGISTER_METHOD(0x03031630, void, AppendText, (XContainer * __this, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x03031770, void, ConvertTextToNode, (XContainer * __this));
IL2CPP_REGISTER_METHOD(0x03031900, String *, GetDateTimeString, (DateTime value));
IL2CPP_REGISTER_METHOD(0x03031A20, IEnumerable_1_System_Xml_Linq_XElement_ *, GetDescendants, (XContainer * __this, XName * name, bool self));
IL2CPP_REGISTER_METHOD(0x03031BD0, IEnumerable_1_System_Xml_Linq_XElement_ *, GetElements, (XContainer * __this, XName * name));
IL2CPP_REGISTER_METHOD(0x03031D70, String *, GetStringValue, (Object * value));
IL2CPP_REGISTER_METHODINFO(0x04716918, XContainer_GetStringValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030322E0, void, ReadContentFrom, (XContainer * __this, XmlReader * r));
IL2CPP_REGISTER_METHODINFO(0x047889D8, XContainer_ReadContentFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03032EB0, void, ReadContentFrom, (XContainer * __this, XmlReader * r, LoadOptions__Enum o));
IL2CPP_REGISTER_METHODINFO(0x047796C8, XContainer_ReadContentFrom_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03034050, void, RemoveNode, (XContainer * __this, XNode * n));
IL2CPP_REGISTER_METHODINFO(0x047343F8, XContainer_RemoveNode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03034260, void, RemoveNodesSkipNotify, (XContainer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ValidateNode, (XContainer * __this, XNode * node, XNode * previous));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ValidateString, (XContainer * __this, String * s));
IL2CPP_REGISTER_METHOD(0x03034350, void, WriteContentTo, (XContainer * __this, XmlWriter * writer));
}
