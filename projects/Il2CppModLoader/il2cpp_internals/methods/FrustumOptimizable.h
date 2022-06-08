using namespace app;

namespace app::methods::FrustumOptimizable {
IL2CPP_REGISTER_METHOD(0x0164A810, void, OnFrustumEnter, (FrustumOptimizable * __this));
IL2CPP_REGISTER_METHOD(0x0164A820, void, OnFrustumExit, (FrustumOptimizable * __this));
IL2CPP_REGISTER_METHOD(0x004379C0, bool, get_InsideFrustum, (FrustumOptimizable * __this));
IL2CPP_REGISTER_METHOD(0x0164A830, Bounds, get_Bounds, (FrustumOptimizable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (FrustumOptimizable * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (FrustumOptimizable * __this));
}
