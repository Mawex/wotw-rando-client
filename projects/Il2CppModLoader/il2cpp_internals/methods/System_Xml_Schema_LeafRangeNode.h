#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::LeafRangeNode {
IL2CPP_REGISTER_METHOD(0x016CD250, void, __ctor, (LeafRangeNode * __this, Decimal min, Decimal max));
IL2CPP_REGISTER_METHOD(0x016CD270, void, __ctor, (LeafRangeNode * __this, int32_t pos, Decimal min, Decimal max));
IL2CPP_REGISTER_METHOD(0x00CB5CB0, Decimal, get_Max, (LeafRangeNode * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD30, Decimal, get_Min, (LeafRangeNode * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, BitSet *, get_NextIteration, (LeafRangeNode * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_NextIteration, (LeafRangeNode * __this, BitSet * value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsRangeNode, (LeafRangeNode * __this));
IL2CPP_REGISTER_METHOD(0x016CD290, void, ExpandTree, (LeafRangeNode * __this, InteriorNode * parent, SymbolsDictionary * symbols, Positions * positions));
}
