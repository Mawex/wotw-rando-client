#include <interception_macros.h>

namespace app::methods::ServerSeekingProjectile {
IL2CPP_REGISTER_METHOD(0x0059D6C0, void, __ctor, (app::ServerSeekingProjectile * this_ptr, app::Object * data));
IL2CPP_REGISTER_METHOD(0x0059FB20, Object *, CreateData, (app::ServerSeekingProjectile * this_ptr, app::Object * data));
IL2CPP_REGISTER_METHOD(0x0059FC90, Component_1 *, ApplyData, (app::ServerSeekingProjectile * this_ptr, app::GameObject * * gameobj));
IL2CPP_REGISTER_METHOD(0x0059FDB0, void, RebuildReferences, (app::ServerSeekingProjectile * this_ptr));
}
