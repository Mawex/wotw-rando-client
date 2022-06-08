#include <interception_macros.h>

namespace app::methods::ServerConfigurableJoint {
IL2CPP_REGISTER_METHOD(0x0059D6C0, void, __ctor, (ServerConfigurableJoint * __this, Object * data));
IL2CPP_REGISTER_METHOD(0x00ABA990, Object *, CreateData, (ServerConfigurableJoint * __this, Object * data));
IL2CPP_REGISTER_METHOD(0x00ABCFA0, Component_1 *, ApplyData, (ServerConfigurableJoint * __this, GameObject * * gameobj));
IL2CPP_REGISTER_METHOD(0x00ABE0C0, void, RebuildReferences, (ServerConfigurableJoint * __this));
}
