#include <interception_macros.h>

namespace app::methods::ServerProjectile {
IL2CPP_REGISTER_METHOD(0x0059D6C0, void, __ctor, (ServerProjectile * __this, Object * data));
IL2CPP_REGISTER_METHOD(0x0059DB60, Object *, CreateData, (ServerProjectile * __this, Object * data));
IL2CPP_REGISTER_METHOD(0x0059DCD0, Component_1 *, ApplyData, (ServerProjectile * __this, GameObject * * gameobj));
IL2CPP_REGISTER_METHOD(0x0059DDF0, void, RebuildReferences, (ServerProjectile * __this));
}
