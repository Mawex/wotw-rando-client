using namespace app;

namespace app::methods::LegacyMaterialTransparencyAnimator {
IL2CPP_REGISTER_METHOD(0x00A24880, int32_t, get_PropertyID, (LegacyMaterialTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A2E940, Material *, get_Mat, (LegacyMaterialTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A2EA10, void, Awake, (LegacyMaterialTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A2EAB0, void, Start, (LegacyMaterialTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A2EFB0, void, AnimateIt, (LegacyMaterialTransparencyAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x00A16F90, void, RestoreToOriginalState, (LegacyMaterialTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A2F1C0, void, OnDestroy, (LegacyMaterialTransparencyAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A2F2D0, void, __ctor, (LegacyMaterialTransparencyAnimator * __this));
}
