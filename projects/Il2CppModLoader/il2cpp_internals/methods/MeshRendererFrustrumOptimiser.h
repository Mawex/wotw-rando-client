using namespace app;

namespace app::methods::MeshRendererFrustrumOptimiser {
IL2CPP_REGISTER_METHOD(0x009EB2E0, void, __ctor, (MeshRendererFrustrumOptimiser * __this, GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x009EB3B0, void, OnFrustumEnter, (MeshRendererFrustrumOptimiser * __this));
IL2CPP_REGISTER_METHOD(0x009EB4C0, void, OnFrustumExit, (MeshRendererFrustrumOptimiser * __this));
IL2CPP_REGISTER_METHOD(0x007E7A20, bool, get_InsideFrustum, (MeshRendererFrustrumOptimiser * __this));
IL2CPP_REGISTER_METHOD(0x009EB5D0, Bounds, get_Bounds, (MeshRendererFrustrumOptimiser * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowCacheBounds, (MeshRendererFrustrumOptimiser * __this));
}
