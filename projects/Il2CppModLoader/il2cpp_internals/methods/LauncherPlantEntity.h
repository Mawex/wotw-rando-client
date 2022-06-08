#include <interception_macros.h>

namespace app::methods::LauncherPlantEntity {
IL2CPP_REGISTER_METHOD(0x00F22A00, void, OnEnable, (LauncherPlantEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F22CF0, void, OnDisable, (LauncherPlantEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F22FD0, void, Start, (LauncherPlantEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F23450, void, HideCatched, (LauncherPlantEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04748F48, LauncherPlantEntity_HideCatched__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F235A0, void, Release, (LauncherPlantEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0471E320, LauncherPlantEntity_Release__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F23CE0, void, OnSoftCollision, (LauncherPlantEntity * __this, Collider * collider, Vector2 force));
IL2CPP_REGISTER_METHODINFO(0x04726D18, LauncherPlantEntity_OnSoftCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F23D10, void, FixedUpdate, (LauncherPlantEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F24A00, void, DrawTrajectoryHint, (LauncherPlantEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F25410, void, OnTriggerStay, (LauncherPlantEntity * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x00F25660, void, __ctor, (LauncherPlantEntity * __this));
}
