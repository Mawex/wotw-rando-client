#include <interception_macros.h>

namespace app::methods::Moon::MoonFlags {
IL2CPP_REGISTER_METHOD(0x01119B40, bool, HasFlag, (GameObject * go, uint32_t flag));
IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag, (GameObject * go, uint32_t flag, Object * * comp));
IL2CPP_REGISTER_METHOD(0x015F1E50, Object *, GetComponentIfHasFlag, (GameObject * go, uint32_t flag));
IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag, (GameObject * go, uint32_t flag, CrushPlayer * * comp));
IL2CPP_REGISTER_METHODINFO(0x04771C68, MoonFlags_GetComponentByFlag_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag, (GameObject * go, uint32_t flag, DamageDealer * * comp));
IL2CPP_REGISTER_METHODINFO(0x0471EC40, MoonFlags_GetComponentByFlag_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag, (GameObject * go, uint32_t flag, MovingPlatformSettings * * comp));
IL2CPP_REGISTER_METHODINFO(0x04775BA0, MoonFlags_GetComponentByFlag_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag, (GameObject * go, uint32_t flag, IDashAtackable * * comp));
IL2CPP_REGISTER_METHODINFO(0x04735CE8, MoonFlags_GetComponentByFlag_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag, (GameObject * go, uint32_t flag, IPushable * * comp));
IL2CPP_REGISTER_METHODINFO(0x0470F948, MoonFlags_GetComponentByFlag_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag, (GameObject * go, uint32_t flag, GrabbableSurface * * comp));
IL2CPP_REGISTER_METHODINFO(0x04731FD8, MoonFlags_GetComponentByFlag_6__MethodInfo);
}
