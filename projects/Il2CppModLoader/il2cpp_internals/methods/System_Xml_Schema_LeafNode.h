using namespace app;

namespace app::methods::System::Xml::Schema::LeafNode {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (LeafNode * __this, int32_t pos));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Pos, (LeafNode * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Pos, (LeafNode * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ExpandTree, (LeafNode * __this, InteriorNode * parent, SymbolsDictionary * symbols, Positions * positions));
IL2CPP_REGISTER_METHOD(0x016CD200, void, ConstructPos, (LeafNode * __this, BitSet * firstpos, BitSet * lastpos, BitSet__Array * followpos));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsNullable, (LeafNode * __this));
}
