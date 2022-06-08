using namespace app;

namespace app::methods::UberWaterTop {
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_UseQuadSubdivision, (UberWaterTop * __this));
IL2CPP_REGISTER_METHOD(0x012AA390, void, OnEnable, (UberWaterTop * __this));
IL2CPP_REGISTER_METHOD(0x012AA6B0, void, OnDisable, (UberWaterTop * __this));
IL2CPP_REGISTER_METHOD(0x012AA780, void, OnBecameVisible, (UberWaterTop * __this));
IL2CPP_REGISTER_METHOD(0x012AA7B0, void, OnBecameInvisible, (UberWaterTop * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, UberWaterReflectionPlane *, get_reflectionPlaneForDebug, (UberWaterTop * __this));
IL2CPP_REGISTER_METHOD(0x012AA7E0, void, OnPostCull, (UberWaterTop * __this, UberWaterReflectionView * view));
IL2CPP_REGISTER_METHOD(0x012AABD0, void, __ctor, (UberWaterTop * __this));
IL2CPP_REGISTER_METHOD(0x012AABF0, void, __cctor, (MethodInfo * method));
}
