#include <interception_macros.h>

namespace app::methods::System::Xml::Linq::XContainer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::XContainer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0302F9A0, void, __ctor_2, (app::XContainer * this_ptr, app::XContainer * other));
    IL2CPP_REGISTER_METHODINFO(0x0478B1E0, XContainer__ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0302FAD0, app::XNode *, get_LastNode, (app::XContainer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0302FCD0, void, Add, (app::XContainer * this_ptr, app::Object * content));
    IL2CPP_REGISTER_METHOD(0x030300A0, app::IEnumerable_1_System_Xml_Linq_XElement_ *, Descendants_1, (app::XContainer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x030300B0, app::IEnumerable_1_System_Xml_Linq_XElement_ *, Descendants_2, (app::XContainer * this_ptr, app::XName * name));
    IL2CPP_REGISTER_METHOD(0x030300D0, app::XElement *, Element, (app::XContainer * this_ptr, app::XName * name));
    IL2CPP_REGISTER_METHOD(0x03030220, app::IEnumerable_1_System_Xml_Linq_XElement_ *, Elements_1, (app::XContainer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03030230, app::IEnumerable_1_System_Xml_Linq_XElement_ *, Elements_2, (app::XContainer * this_ptr, app::XName * name));
    IL2CPP_REGISTER_METHOD(0x03030250, app::IEnumerable_1_System_Xml_Linq_XNode_ *, Nodes, (app::XContainer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x030303E0, void, RemoveNodes, (app::XContainer * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04741608, XContainer_RemoveNodes__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AddAttribute, (app::XContainer * this_ptr, app::XAttribute * a));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AddAttributeSkipNotify, (app::XContainer * this_ptr, app::XAttribute * a));
    IL2CPP_REGISTER_METHOD(0x030307B0, void, AddContentSkipNotify, (app::XContainer * this_ptr, app::Object * content));
    IL2CPP_REGISTER_METHOD(0x03030B60, void, AddNode, (app::XContainer * this_ptr, app::XNode * n));
    IL2CPP_REGISTER_METHOD(0x03030C00, void, AddNodeSkipNotify, (app::XContainer * this_ptr, app::XNode * n));
    IL2CPP_REGISTER_METHOD(0x03030CA0, void, AddString, (app::XContainer * this_ptr, app::String * s));
    IL2CPP_REGISTER_METHODINFO(0x04794860, XContainer_AddString__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x03031190, void, AddStringSkipNotify, (app::XContainer * this_ptr, app::String * s));
    IL2CPP_REGISTER_METHOD(0x030313E0, void, AppendNode, (app::XContainer * this_ptr, app::XNode * n));
    IL2CPP_REGISTER_METHODINFO(0x04755E60, XContainer_AppendNode__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x03031550, void, AppendNodeSkipNotify, (app::XContainer * this_ptr, app::XNode * n));
    IL2CPP_REGISTER_METHOD(0x03031630, void, AppendText, (app::XContainer * this_ptr, app::StringBuilder * sb));
    IL2CPP_REGISTER_METHOD(0x03031770, void, ConvertTextToNode, (app::XContainer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03031900, app::String *, GetDateTimeString, (app::DateTime value));
    IL2CPP_REGISTER_METHOD(0x03031A20, app::IEnumerable_1_System_Xml_Linq_XElement_ *, GetDescendants, (app::XContainer * this_ptr, app::XName * name, bool self));
    IL2CPP_REGISTER_METHOD(0x03031BD0, app::IEnumerable_1_System_Xml_Linq_XElement_ *, GetElements, (app::XContainer * this_ptr, app::XName * name));
    IL2CPP_REGISTER_METHOD(0x03031D70, app::String *, GetStringValue, (app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04716918, XContainer_GetStringValue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x030322E0, void, ReadContentFrom_1, (app::XContainer * this_ptr, app::XmlReader * r));
    IL2CPP_REGISTER_METHODINFO(0x047889D8, XContainer_ReadContentFrom__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x03032EB0, void, ReadContentFrom_2, (app::XContainer * this_ptr, app::XmlReader * r, app::LoadOptions__Enum o));
    IL2CPP_REGISTER_METHODINFO(0x047796C8, XContainer_ReadContentFrom_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x03034050, void, RemoveNode, (app::XContainer * this_ptr, app::XNode * n));
    IL2CPP_REGISTER_METHODINFO(0x047343F8, XContainer_RemoveNode__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x03034260, void, RemoveNodesSkipNotify, (app::XContainer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ValidateNode, (app::XContainer * this_ptr, app::XNode * node, app::XNode * previous));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ValidateString, (app::XContainer * this_ptr, app::String * s));
    IL2CPP_REGISTER_METHOD(0x03034350, void, WriteContentTo, (app::XContainer * this_ptr, app::XmlWriter * writer));
}
