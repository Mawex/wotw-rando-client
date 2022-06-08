#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::BitSet {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (BitSet * __this));
IL2CPP_REGISTER_METHOD(0x019A87C0, void, __ctor, (BitSet * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Count, (BitSet * __this));
IL2CPP_REGISTER_METHOD(0x019A8860, bool, get_Item, (BitSet * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x019A88C0, void, Clear, (BitSet * __this));
IL2CPP_REGISTER_METHOD(0x019A8920, void, Set, (BitSet * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x019A8860, bool, Get, (BitSet * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x019A8990, int32_t, NextSet, (BitSet * __this, int32_t startFrom));
IL2CPP_REGISTER_METHOD(0x019A8A60, void, And, (BitSet * __this, BitSet * other));
IL2CPP_REGISTER_METHOD(0x019A8B70, void, Or, (BitSet * __this, BitSet * other));
IL2CPP_REGISTER_METHOD(0x019A8C30, int32_t, GetHashCode, (BitSet * __this));
IL2CPP_REGISTER_METHOD(0x019A8C80, bool, Equals, (BitSet * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x019A8EA0, BitSet *, Clone, (BitSet * __this));
IL2CPP_REGISTER_METHOD(0x019A90C0, bool, get_IsEmpty, (BitSet * __this));
IL2CPP_REGISTER_METHOD(0x019A9120, bool, Intersects, (BitSet * __this, BitSet * other));
IL2CPP_REGISTER_METHOD(0x019A9270, int32_t, Subscript, (BitSet * __this, int32_t bitIndex));
IL2CPP_REGISTER_METHOD(0x019A9280, void, EnsureLength, (BitSet * __this, int32_t nRequiredLength));
}
