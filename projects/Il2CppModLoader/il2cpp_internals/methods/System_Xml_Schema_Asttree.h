#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::Asttree {
IL2CPP_REGISTER_METHOD(0x002FA280, ArrayList *, get_SubtreeArray, (Asttree * __this));
IL2CPP_REGISTER_METHOD(0x019A16D0, void, __ctor, (Asttree * __this, String * xPath, bool isField, XmlNamespaceManager * nsmgr));
IL2CPP_REGISTER_METHOD(0x019A16F0, bool, IsNameTest, (Axis * ast));
IL2CPP_REGISTER_METHOD(0x019A1720, bool, IsAttribute, (Axis * ast));
IL2CPP_REGISTER_METHOD(0x019A1750, bool, IsDescendantOrSelf, (Axis * ast));
IL2CPP_REGISTER_METHOD(0x019A1780, bool, IsSelf, (Axis * ast));
IL2CPP_REGISTER_METHOD(0x019A17B0, void, CompileXPath, (Asttree * __this, String * xPath, bool isField, XmlNamespaceManager * nsmgr));
IL2CPP_REGISTER_METHODINFO(0x0474A0E8, Asttree_CompileXPath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019A2340, void, SetURN, (Asttree * __this, Axis * axis, XmlNamespaceManager * nsmgr));
IL2CPP_REGISTER_METHODINFO(0x0470C328, Asttree_SetURN__MethodInfo);
}
