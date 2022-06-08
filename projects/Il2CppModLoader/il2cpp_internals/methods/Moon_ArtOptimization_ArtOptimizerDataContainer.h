#include <interception_macros.h>

namespace app::methods::Moon::ArtOptimization::ArtOptimizerDataContainer {
IL2CPP_REGISTER_METHOD(0x01345040, float, get_ObjectEnergyLimit, (ArtOptimizerDataContainer * __this));
IL2CPP_REGISTER_METHOD(0x00724010, void, set_ObjectEnergyLimit, (ArtOptimizerDataContainer * __this, float value));
IL2CPP_REGISTER_METHOD(0x01345120, float, get_ModifiersEnergyLimit, (ArtOptimizerDataContainer * __this));
IL2CPP_REGISTER_METHOD(0x00447350, void, set_ModifiersEnergyLimit, (ArtOptimizerDataContainer * __this, float value));
IL2CPP_REGISTER_METHOD(0x01345200, void, CalculateEnergyLimitsByStripPercentage, (ArtOptimizerDataContainer * __this, float objectsStripPercentage, float modifiersStripPercentage));
IL2CPP_REGISTER_METHOD(0x01346590, void, Clear, (ArtOptimizerDataContainer * __this));
IL2CPP_REGISTER_METHOD(0x01346660, bool, ShouldStripByEnergyLimit, (ArtOptimizerDataContainer * __this, SerializableUberShaderWrapper * uberShader));
IL2CPP_REGISTER_METHOD(0x013468F0, bool, ShouldStripByEnergyLimit, (ArtOptimizerDataContainer * __this, SerializableUberSaderModifierWrapper * modifier));
IL2CPP_REGISTER_METHOD(0x01346BA0, bool, IsInCenterLayer, (ArtOptimizerDataContainer * __this, GameObject * go));
IL2CPP_REGISTER_METHOD(0x01346D10, bool, IsObjectIgnored, (ArtOptimizerDataContainer * __this, GameObject * go));
IL2CPP_REGISTER_METHOD(0x01346DB0, bool, IsModifierIgnored, (ArtOptimizerDataContainer * __this, UberShaderModifier * modifier));
IL2CPP_REGISTER_METHOD(0x01346EA0, int32_t, GetIdInFile, (ArtOptimizerDataContainer * __this, GameObject * go));
IL2CPP_REGISTER_METHOD(0x01346FB0, void, OnBeforeSerialize, (ArtOptimizerDataContainer * __this));
IL2CPP_REGISTER_METHOD(0x01346FB0, void, OnAfterDeserialize, (ArtOptimizerDataContainer * __this));
IL2CPP_REGISTER_METHOD(0x01346FC0, void, __ctor, (ArtOptimizerDataContainer * __this));
}
