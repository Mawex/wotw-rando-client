#include <interception_macros.h>

namespace app::methods::MoonShadingZoneController {
IL2CPP_REGISTER_METHOD(0x0145FFA0, MoonShadingZoneController *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00417920, UpdateType__Enum, get_UpdateType, (MoonShadingZoneController * __this));
IL2CPP_REGISTER_METHOD(0x01460290, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x01460460, void, RegisterShadingZone, (IMoonShadingZone * shadingZone));
IL2CPP_REGISTER_METHOD(0x01460520, void, UnregisterShadingZone, (IMoonShadingZone * shadingZone));
IL2CPP_REGISTER_METHOD(0x01460730, void, OnShadingZoneUnregistered, (MoonShadingZoneController * __this, IMoonShadingZone * shadingZone));
IL2CPP_REGISTER_METHOD(0x01460880, void, OnUpdate, (MoonShadingZoneController * __this, float delta));
IL2CPP_REGISTER_METHOD(0x014608C0, void, UpdateTargetsOutsideZones, (MoonShadingZoneController * __this, float delta));
IL2CPP_REGISTER_METHOD(0x01460A50, void, UpdateTargetsInsideZones, (MoonShadingZoneController * __this, float delta));
IL2CPP_REGISTER_METHOD(0x01460C90, int32_t, GetNextInsideTargetIndex, (MoonShadingZoneController * __this, bool * found));
IL2CPP_REGISTER_METHOD(0x01460E10, void, UpdateTarget, (MoonShadingZoneController * __this, MoonShadingZoneController_TargetData * target, float delta));
IL2CPP_REGISTER_METHOD(0x01461160, void, EditorUpdate, ());
IL2CPP_REGISTER_METHOD(0x01461210, void, OnTargetEnter, (MoonShadingZoneController * __this, MoonShadingZoneController_TargetData * data, IMoonShadingZone * zone));
IL2CPP_REGISTER_METHOD(0x014612D0, void, OnTargetStay, (MoonShadingZoneController * __this, MoonShadingZoneController_TargetData * data, float deltaTime));
IL2CPP_REGISTER_METHOD(0x014613A0, void, OnTargetExit, (MoonShadingZoneController * __this, MoonShadingZoneController_TargetData * data));
IL2CPP_REGISTER_METHOD(0x01461450, void, Register, (MoonShadingZoneController * __this, IMoonShadingZoneTarget * target));
IL2CPP_REGISTER_METHOD(0x01461620, void, UnRegister, (MoonShadingZoneController * __this, IMoonShadingZoneTarget * target));
IL2CPP_REGISTER_METHOD(0x01461780, bool, CanRendererBeAffectedByZones, (MoonShadingZoneController * __this, Renderer * renderer));
IL2CPP_REGISTER_METHOD(0x01461820, void, __ctor, (MoonShadingZoneController * __this));
IL2CPP_REGISTER_METHOD(0x01461A70, void, __cctor, ());
}
