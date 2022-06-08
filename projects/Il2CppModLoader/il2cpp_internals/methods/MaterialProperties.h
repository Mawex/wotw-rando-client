#include <interception_macros.h>

namespace app::methods::MaterialProperties {
IL2CPP_REGISTER_METHOD(0x01381450, void, ApplyMaterialProperties, (MaterialProperties * __this, MaterialProperties * materialProperties));
IL2CPP_REGISTER_METHOD(0x013814E0, void, RemovePropertiesThatArntOverwridden, (MaterialProperties * __this));
IL2CPP_REGISTER_METHOD(0x013820F0, void, OverrideAll, (MaterialProperties * __this));
IL2CPP_REGISTER_METHOD(0x013824B0, void, __ctor, (MaterialProperties * __this));
}
