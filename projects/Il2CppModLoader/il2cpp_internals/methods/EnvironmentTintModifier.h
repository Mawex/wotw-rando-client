#include <interception_macros.h>

namespace app::methods::EnvironmentTintModifier {
IL2CPP_REGISTER_METHOD(0x00CAA750, int32_t, GetEnvTintColorID, (EnvironmentTintModifier * __this));
IL2CPP_REGISTER_METHOD(0x00CAA820, void, BindNow, (EnvironmentTintModifier * __this, EnvironmentLight * characterLight, int32_t index, bool curLight));
IL2CPP_REGISTER_METHOD(0x00CAAA60, void, ClearBind, (EnvironmentTintModifier * __this, int32_t num));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateBaseBind, (EnvironmentTintModifier * __this));
IL2CPP_REGISTER_METHOD(0x00CAAB00, String *, GetBaseShaderProperties, (EnvironmentTintModifier * __this));
IL2CPP_REGISTER_METHOD(0x00CAABA0, void, SetProperties, (EnvironmentTintModifier * __this));
IL2CPP_REGISTER_METHOD(0x00CAAC60, void, __ctor, (EnvironmentTintModifier * __this));
}
