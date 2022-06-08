using namespace app;

namespace app::methods::Moon::Timeline::EntityId {
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (EntityId__Boxed * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Value, (EntityId__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals, (EntityId__Boxed * __this, EntityId other));
IL2CPP_REGISTER_METHOD(0x001C0CE0, bool, Equals, (EntityId__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (EntityId__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator___, (EntityId lhs, EntityId rhs));
IL2CPP_REGISTER_METHOD(0x015F7660, bool, operator___, (EntityId lhs, EntityId rhs));
IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, operator_, (EntityId id));
IL2CPP_REGISTER_METHOD(0x00597B10, EntityId, get_Parent, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01BB88F0, EntityId, get_Nothing, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x006CE970, EntityId, From, (int32_t id));
IL2CPP_REGISTER_METHOD(0x001311C0, String *, ToString, (EntityId__Boxed * __this));
}
