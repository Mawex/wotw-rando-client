#include <interception_macros.h>

namespace app::methods::ServerPhysicalSystemManager {
IL2CPP_REGISTER_METHOD(0x0059D6C0, void, __ctor, (app::ServerPhysicalSystemManager * this_ptr, app::Object * data));
IL2CPP_REGISTER_METHOD(0x00AC35F0, Object *, CreateData, (app::ServerPhysicalSystemManager * this_ptr, app::Object * data));
IL2CPP_REGISTER_METHOD(0x00AC3F40, Component_1 *, ApplyData, (app::ServerPhysicalSystemManager * this_ptr, app::GameObject * * gameobj));
IL2CPP_REGISTER_METHOD(0x00AC4100, MoonGuid *, GetGuid, (app::ServerPhysicalSystemManager * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AC41D0, void, RebuildReferences, (app::ServerPhysicalSystemManager * this_ptr));
}
