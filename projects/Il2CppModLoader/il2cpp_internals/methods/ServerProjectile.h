#include <interception_macros.h>

namespace app::methods::ServerProjectile {
IL2CPP_REGISTER_METHOD(0x0059D6C0, void, __ctor, (app::ServerProjectile * this_ptr, app::Object * data));
IL2CPP_REGISTER_METHOD(0x0059DB60, Object *, CreateData, (app::ServerProjectile * this_ptr, app::Object * data));
IL2CPP_REGISTER_METHOD(0x0059DCD0, Component_1 *, ApplyData, (app::ServerProjectile * this_ptr, app::GameObject * * gameobj));
IL2CPP_REGISTER_METHOD(0x0059DDF0, void, RebuildReferences, (app::ServerProjectile * this_ptr));
}
