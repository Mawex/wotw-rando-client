#include <interception_macros.h>

namespace app::methods::CollisionContext {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (CollisionContext * __this, Collision * collision, Collider * collisionReciever));
IL2CPP_REGISTER_METHOD(0x002FA280, Collision *, get_Collision, (CollisionContext * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Collision, (CollisionContext * __this, Collision * value));
IL2CPP_REGISTER_METHOD(0x002FB930, Collider *, get_CollisionReciever, (CollisionContext * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_CollisionReciever, (CollisionContext * __this, Collider * value));
}
