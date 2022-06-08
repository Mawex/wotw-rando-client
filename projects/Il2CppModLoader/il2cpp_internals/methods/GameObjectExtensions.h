#include <interception_macros.h>

namespace app::methods::GameObjectExtensions {
IL2CPP_REGISTER_METHOD(0x015855E0, Object__Array *, GetInterfaces, (GameObject * gObj));
IL2CPP_REGISTER_METHODINFO(0x0473F358, GameObjectExtensions_1_GetInterfaces__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E9920, Object *, GetInterface, (GameObject * gObj));
IL2CPP_REGISTER_METHODINFO(0x047495F8, GameObjectExtensions_1_GetInterface__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E9A40, Object *, GetInterfaceInChildren, (GameObject * gObj));
IL2CPP_REGISTER_METHODINFO(0x0470E770, GameObjectExtensions_1_GetInterfaceInChildren__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01585B80, Object__Array *, GetInterfacesInChildren, (GameObject * gObj));
IL2CPP_REGISTER_METHODINFO(0x047155A8, GameObjectExtensions_1_GetInterfacesInChildren__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E9920, IPhysicsCollisionReceiver *, GetInterface, (GameObject * gObj));
IL2CPP_REGISTER_METHODINFO(0x0470AAC8, GameObjectExtensions_1_GetInterface_1__MethodInfo);
}
