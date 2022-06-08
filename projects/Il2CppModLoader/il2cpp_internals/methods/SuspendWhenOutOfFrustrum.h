using namespace app;

namespace app::methods::SuspendWhenOutOfFrustrum {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDisable, (SuspendWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldEnable, (SuspendWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldChildrenEnable, (SuspendWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSetMoonReady, (SuspendWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x006745A0, void, OnDrawGizmosSelected, (SuspendWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00674660, void, Prewarm, (SuspendWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00674730, void, OnFrustumEnter, (SuspendWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00674750, void, OnFrustumExit, (SuspendWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00674770, void, Suspend, (SuspendWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00674970, void, Resume, (SuspendWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_InsideFrustum, (SuspendWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00674B80, Bounds, get_Bounds, (SuspendWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (SuspendWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00615270, bool, get_CanSuspendResume, (SuspendWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00674DC0, void, set_CanSuspendResume, (SuspendWhenOutOfFrustrum * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00674DD0, void, Awake, (SuspendWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x00675000, void, OnDestroy, (SuspendWhenOutOfFrustrum * __this));
IL2CPP_REGISTER_METHOD(0x006750A0, void, __ctor, (SuspendWhenOutOfFrustrum * __this));
}
