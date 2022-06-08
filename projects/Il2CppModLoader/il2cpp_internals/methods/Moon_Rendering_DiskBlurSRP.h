#include <interception_macros.h>

namespace app::methods::Moon::Rendering::DiskBlurSRP {
IL2CPP_REGISTER_METHOD(0x00C55F60, void, InitMaterials, (DiskBlurSRP * __this, int32_t sliceCount, Material * material));
IL2CPP_REGISTER_METHOD(0x00C56340, void, Dispose, (DiskBlurSRP * __this));
IL2CPP_REGISTER_METHOD(0x00C565E0, void, SetInterestZone, (DiskBlurSRP * __this, int32_t index, Vector4 screenPos));
IL2CPP_REGISTER_METHOD(0x00C56630, void, ClearInterestZones, (DiskBlurSRP * __this));
IL2CPP_REGISTER_METHOD(0x00C567A0, Material *, setupMaterial, (DiskBlurSRP * __this, int32_t sliceIndex, Int2 sliceSize, float kernelRadius, Vector2 RTPixelSize));
IL2CPP_REGISTER_METHOD(0x00C56DB0, Material *, setupMaterialMB, (DiskBlurSRP * __this, int32_t sliceIndex, Vector2 RTPixelSize));
IL2CPP_REGISTER_METHOD(0x00C57360, void, __ctor, (DiskBlurSRP * __this));
IL2CPP_REGISTER_METHOD(0x00C57440, void, __cctor, ());
}
