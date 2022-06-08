#include <interception_macros.h>

namespace app::methods::System::Text::RegularExpressions::RegexNode {
IL2CPP_REGISTER_METHOD(0x02595F10, void, __ctor, (RegexNode * __this, int32_t type, RegexOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x02595F20, void, __ctor, (RegexNode * __this, int32_t type, RegexOptions__Enum options, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x02595F30, void, __ctor, (RegexNode * __this, int32_t type, RegexOptions__Enum options, String * str));
IL2CPP_REGISTER_METHOD(0x02595F40, void, __ctor, (RegexNode * __this, int32_t type, RegexOptions__Enum options, int32_t m));
IL2CPP_REGISTER_METHOD(0x02595F50, void, __ctor, (RegexNode * __this, int32_t type, RegexOptions__Enum options, int32_t m, int32_t n));
IL2CPP_REGISTER_METHOD(0x02595F70, bool, UseOptionR, (RegexNode * __this));
IL2CPP_REGISTER_METHOD(0x02595F80, RegexNode *, ReverseLeft, (RegexNode * __this));
IL2CPP_REGISTER_METHOD(0x02596060, void, MakeRep, (RegexNode * __this, int32_t type, int32_t min, int32_t max));
IL2CPP_REGISTER_METHOD(0x02596070, RegexNode *, Reduce, (RegexNode * __this));
IL2CPP_REGISTER_METHOD(0x02596130, RegexNode *, StripEnation, (RegexNode * __this, int32_t emptyType));
IL2CPP_REGISTER_METHOD(0x025962C0, RegexNode *, ReduceGroup, (RegexNode * __this));
IL2CPP_REGISTER_METHOD(0x025963A0, RegexNode *, ReduceRep, (RegexNode * __this));
IL2CPP_REGISTER_METHOD(0x02596650, RegexNode *, ReduceSet, (RegexNode * __this));
IL2CPP_REGISTER_METHOD(0x025969D0, RegexNode *, ReduceAlternation, (RegexNode * __this));
IL2CPP_REGISTER_METHOD(0x02597040, RegexNode *, ReduceConcatenation, (RegexNode * __this));
IL2CPP_REGISTER_METHOD(0x025974E0, RegexNode *, MakeQuantifier, (RegexNode * __this, bool lazy, int32_t min, int32_t max));
IL2CPP_REGISTER_METHOD(0x02597790, void, AddChild, (RegexNode * __this, RegexNode * newChild));
IL2CPP_REGISTER_METHOD(0x02597A10, RegexNode *, Child, (RegexNode * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x02597AC0, int32_t, ChildCount, (RegexNode * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, Type, (RegexNode * __this));
}
