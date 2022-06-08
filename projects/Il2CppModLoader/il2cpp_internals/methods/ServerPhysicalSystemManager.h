#include <interception_macros.h>

namespace app::methods::ServerPhysicalSystemManager {
IL2CPP_REGISTER_METHOD(0x0059D6C0, void, __ctor, (ServerPhysicalSystemManager * __this, Object * data));
IL2CPP_REGISTER_METHOD(0x00AC35F0, Object *, CreateData, (ServerPhysicalSystemManager * __this, Object * data));
IL2CPP_REGISTER_METHOD(0x00AC3F40, Component_1 *, ApplyData, (ServerPhysicalSystemManager * __this, GameObject * * gameobj));
IL2CPP_REGISTER_METHOD(0x00AC4100, MoonGuid *, GetGuid, (ServerPhysicalSystemManager * __this));
IL2CPP_REGISTER_METHOD(0x00AC41D0, void, RebuildReferences, (ServerPhysicalSystemManager * __this));
}
