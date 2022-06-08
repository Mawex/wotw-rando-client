#include <interception_macros.h>

namespace app::methods::DisableGameObjectWithHealthWhenOutOfFrustum {
IL2CPP_REGISTER_METHOD(0x00B97FC0, void, OnFrustumEnter, (DisableGameObjectWithHealthWhenOutOfFrustum * __this));
IL2CPP_REGISTER_METHOD(0x00B98060, void, OnFrustumExit, (DisableGameObjectWithHealthWhenOutOfFrustum * __this));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_InsideFrustum, (DisableGameObjectWithHealthWhenOutOfFrustum * __this));
IL2CPP_REGISTER_METHOD(0x00B98120, Bounds, get_Bounds, (DisableGameObjectWithHealthWhenOutOfFrustum * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (DisableGameObjectWithHealthWhenOutOfFrustum * __this));
IL2CPP_REGISTER_METHOD(0x00B98140, void, Awake, (DisableGameObjectWithHealthWhenOutOfFrustum * __this));
IL2CPP_REGISTER_METHOD(0x00B981E0, void, OnDestroy, (DisableGameObjectWithHealthWhenOutOfFrustum * __this));
IL2CPP_REGISTER_METHOD(0x00B98280, void, Start, (DisableGameObjectWithHealthWhenOutOfFrustum * __this));
IL2CPP_REGISTER_METHOD(0x008223A0, void, __ctor, (DisableGameObjectWithHealthWhenOutOfFrustum * __this));
}
