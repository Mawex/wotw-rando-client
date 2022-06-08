using namespace app;

namespace app::methods::System::Xml::Schema::NamespaceListNode {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (NamespaceListNode * __this, NamespaceList * namespaceList, Object * particle));
IL2CPP_REGISTER_METHOD(0x016CFAA0, ICollection *, GetResolvedSymbols, (NamespaceListNode * __this, SymbolsDictionary * symbols));
IL2CPP_REGISTER_METHOD(0x016CFAD0, void, ExpandTree, (NamespaceListNode * __this, InteriorNode * parent, SymbolsDictionary * symbols, Positions * positions));
IL2CPP_REGISTER_METHOD(0x016CFF80, void, ConstructPos, (NamespaceListNode * __this, BitSet * firstpos, BitSet * lastpos, BitSet__Array * followpos));
IL2CPP_REGISTER_METHODINFO(0x04784C00, NamespaceListNode_ConstructPos__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016CFFD0, bool, get_IsNullable, (NamespaceListNode * __this));
IL2CPP_REGISTER_METHODINFO(0x04745E70, NamespaceListNode_get_IsNullable__MethodInfo);
}
