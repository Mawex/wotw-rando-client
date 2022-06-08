#include <interception_macros.h>

namespace app::methods::EnvironmentLightingManager {
IL2CPP_REGISTER_METHOD(0x00CA8560, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00CA85E0, void, OnEnable, (EnvironmentLightingManager * __this));
IL2CPP_REGISTER_METHOD(0x00CA8670, EnvironmentLight *, GetCharacterLightAtPos, (EnvironmentLightingManager * __this, Rect bounds));
IL2CPP_REGISTER_METHOD(0x00CA8870, void, AddLight, (EnvironmentLightingManager * __this, EnvironmentLight * environmentLight));
IL2CPP_REGISTER_METHOD(0x00CA8950, void, RemoveLight, (EnvironmentLightingManager * __this, EnvironmentLight * environmentLight));
IL2CPP_REGISTER_METHOD(0x00CA8A50, void, __ctor, (EnvironmentLightingManager * __this));
}
