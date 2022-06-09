#include <interception_macros.h>

namespace app::methods::Moon::BlueFlameVineDoorController {
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (app::BlueFlameVineDoorController * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::BlueFlameVineDoorController * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CBC440, void, Apply, (app::BlueFlameVineDoorController * this_ptr, app::UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00CBC5E0, IUberState__Array *, get_AffectingUberStates, (app::BlueFlameVineDoorController * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CBC660, List_1_UnityEngine_GameObject_ *, get_AllTargets, (app::BlueFlameVineDoorController * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CBC840, void, OnUpdate, (app::BlueFlameVineDoorController * this_ptr, float delta));
IL2CPP_REGISTER_METHOD(0x00CBCA30, void, Awake, (app::BlueFlameVineDoorController * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CBCAF0, void, OnDestroy, (app::BlueFlameVineDoorController * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CBCBB0, void, __ctor, (app::BlueFlameVineDoorController * this_ptr));
}
