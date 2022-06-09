#include <interception_macros.h>

namespace app::methods::Moon_Timeline::EntityId {
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (app::EntityId__Boxed * this_ptr, int32_t id));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Value, (app::EntityId__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_1, (app::EntityId__Boxed * this_ptr, app::EntityId other));
IL2CPP_REGISTER_METHOD(0x001C0CE0, bool, Equals_2, (app::EntityId__Boxed * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::EntityId__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator____1, (app::EntityId lhs, app::EntityId rhs));
IL2CPP_REGISTER_METHOD(0x015F7660, bool, operator____2, (app::EntityId lhs, app::EntityId rhs));
IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, operator_, (app::EntityId id));
IL2CPP_REGISTER_METHOD(0x00597B10, EntityId, get_Parent, ());
IL2CPP_REGISTER_METHOD(0x01BB88F0, EntityId, get_Nothing, ());
IL2CPP_REGISTER_METHOD(0x006CE970, EntityId, From, (int32_t id));
IL2CPP_REGISTER_METHOD(0x001311C0, String *, ToString, (app::EntityId__Boxed * this_ptr));
}
