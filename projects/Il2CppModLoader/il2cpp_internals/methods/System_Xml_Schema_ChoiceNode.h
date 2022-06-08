using namespace app;

namespace app::methods::System::Xml::Schema::ChoiceNode {
IL2CPP_REGISTER_METHOD(0x019A9600, void, ConstructChildPos, (SyntaxTreeNode * child, BitSet * firstpos, BitSet * lastpos, BitSet__Array * followpos));
IL2CPP_REGISTER_METHOD(0x019A98B0, void, ConstructPos, (ChoiceNode * __this, BitSet * firstpos, BitSet * lastpos, BitSet__Array * followpos));
IL2CPP_REGISTER_METHOD(0x019A9BA0, bool, get_IsNullable, (ChoiceNode * __this));
IL2CPP_REGISTER_METHOD(0x019A9C90, void, ExpandTree, (ChoiceNode * __this, InteriorNode * parent, SymbolsDictionary * symbols, Positions * positions));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ChoiceNode * __this));
}
