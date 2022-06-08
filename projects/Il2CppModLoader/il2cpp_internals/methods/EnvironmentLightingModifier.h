#include <interception_macros.h>

namespace app::methods::EnvironmentLightingModifier {
IL2CPP_REGISTER_METHOD(0x00CA8BA0, void, OnEnable, (EnvironmentLightingModifier * __this));
IL2CPP_REGISTER_METHOD(0x00CA8C00, void, BindNow, (EnvironmentLightingModifier * __this, EnvironmentLight * characterLight, int32_t index, bool curLight));
IL2CPP_REGISTER_METHOD(0x00CA9440, void, UpdateBaseBind, (EnvironmentLightingModifier * __this));
IL2CPP_REGISTER_METHOD(0x00CA9450, void, ClearBind, (EnvironmentLightingModifier * __this, int32_t num));
IL2CPP_REGISTER_METHOD(0x00CA9510, void, UpdateFilterBind, (EnvironmentLightingModifier * __this));
IL2CPP_REGISTER_METHOD(0x00CA9960, String *, GetBaseShaderProperties, (EnvironmentLightingModifier * __this));
IL2CPP_REGISTER_METHOD(0x00CA9A00, void, SetProperties, (EnvironmentLightingModifier * __this));
IL2CPP_REGISTER_METHOD(0x00CA9AF0, void, __ctor, (EnvironmentLightingModifier * __this));
IL2CPP_REGISTER_METHOD(0x00CA9D30, void, __cctor, ());
}
