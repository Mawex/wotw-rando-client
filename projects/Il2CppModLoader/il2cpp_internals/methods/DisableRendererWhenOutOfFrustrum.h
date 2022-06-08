using namespace app;

namespace app::methods::DisableRendererWhenOutOfFrustrum {
IL2CPP_REGISTER_METHOD(0x00B986E0, void, OnFrustumEnter, (DisableRendererWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B987A0, void, OnFrustumExit, (DisableRendererWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_InsideFrustum, (DisableRendererWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B98860, Bounds, get_Bounds, (DisableRendererWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (DisableRendererWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B98880, void, Awake, (DisableRendererWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00B989D0, void, OnDestroy, (DisableRendererWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (DisableRendererWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (DisableRendererWhenOutOfFrustrum * __this));
}
