#include <interception_macros.h>

namespace app::methods::SceneResourcesUnloadSystem {
IL2CPP_REGISTER_METHOD(0x00BB1720, ResoucesUnloadingMode__Enum, get_Mode, ());
IL2CPP_REGISTER_METHOD(0x00BB17C0, void, set_Mode, (ResoucesUnloadingMode__Enum value));
IL2CPP_REGISTER_METHOD(0x00BB1870, void, DecreaseRefCount, (SceneResourcesUnloadSystem * __this, Object_1__Array * resources));
IL2CPP_REGISTER_METHOD(0x00BB1970, void, IncreaseRefCount, (SceneResourcesUnloadSystem * __this, Object_1__Array * resources));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SceneResourcesUnloadSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
