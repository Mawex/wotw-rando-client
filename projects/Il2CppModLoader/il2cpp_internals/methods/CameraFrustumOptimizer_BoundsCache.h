using namespace app;

namespace app::methods::CameraFrustumOptimizer_BoundsCache {
IL2CPP_REGISTER_METHOD(0x0013B9E0, void, Init, (CameraFrustumOptimizer_BoundsCache__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013B9F0, void, Reset, (CameraFrustumOptimizer_BoundsCache__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013BA00, void, Dispose, (CameraFrustumOptimizer_BoundsCache__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013BA10, void, AddBounds, (CameraFrustumOptimizer_BoundsCache__Boxed * __this, IFrustumOptimizable * o, Bounds bounds));
IL2CPP_REGISTER_METHOD(0x0013BA40, int32_t, PrefetchAllBounds, (CameraFrustumOptimizer_BoundsCache__Boxed * __this, List_1_IFrustumOptimizable_ * listToPreFetch));
}
