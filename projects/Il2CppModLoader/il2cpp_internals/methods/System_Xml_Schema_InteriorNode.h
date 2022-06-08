using namespace app;

namespace app::methods::System::Xml::Schema::InteriorNode {
IL2CPP_REGISTER_METHOD(0x002FA280, SyntaxTreeNode *, get_LeftChild, (InteriorNode * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_LeftChild, (InteriorNode * __this, SyntaxTreeNode * value));
IL2CPP_REGISTER_METHOD(0x002FB930, SyntaxTreeNode *, get_RightChild, (InteriorNode * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_RightChild, (InteriorNode * __this, SyntaxTreeNode * value));
IL2CPP_REGISTER_METHOD(0x016CC230, void, ExpandTreeNoRecursive, (InteriorNode * __this, InteriorNode * parent, SymbolsDictionary * symbols, Positions * positions));
IL2CPP_REGISTER_METHOD(0x016CC500, void, ExpandTree, (InteriorNode * __this, InteriorNode * parent, SymbolsDictionary * symbols, Positions * positions));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (InteriorNode * __this));
}
