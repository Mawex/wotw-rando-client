using namespace app;

namespace app::methods::Moon::WaterFall {
IL2CPP_REGISTER_METHOD(0x011A3DC0, void, Awake, (WaterFall * __this));
IL2CPP_REGISTER_METHOD(0x0068B8C0, bool, get_IsSuspended, (WaterFall * __this));
IL2CPP_REGISTER_METHOD(0x00757000, void, set_IsSuspended, (WaterFall * __this, bool value));
IL2CPP_REGISTER_METHOD(0x011A4510, SuspendableMask__Enum, get_Mask, (WaterFall * __this));
IL2CPP_REGISTER_METHOD(0x011A4520, void, set_Mask, (WaterFall * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x011A45E0, void, OnEnable, (WaterFall * __this));
IL2CPP_REGISTER_METHOD(0x011A4680, void, OnDisable, (WaterFall * __this));
IL2CPP_REGISTER_METHOD(0x011A4720, void, OnDestroy, (WaterFall * __this));
IL2CPP_REGISTER_METHOD(0x011A4810, void, FixedUpdate, (WaterFall * __this));
IL2CPP_REGISTER_METHOD(0x011A62F0, void, RemoveWaterLine, (WaterFall * __this, WaterFall_WaterLine * waterLine));
IL2CPP_REGISTER_METHOD(0x011A65F0, void, CreateLineRenderer, (WaterFall * __this, WaterFall_WaterLine * waterLine));
IL2CPP_REGISTER_METHOD(0x011A6B10, ParticleSystem *, CreateImpactEffect, (WaterFall * __this));
IL2CPP_REGISTER_METHOD(0x011A6D80, void, OnFrustumEnter, (WaterFall * __this));
IL2CPP_REGISTER_METHOD(0x011A6E30, void, OnFrustumExit, (WaterFall * __this));
IL2CPP_REGISTER_METHOD(0x00FB00D0, bool, get_InsideFrustum, (WaterFall * __this));
IL2CPP_REGISTER_METHOD(0x011A6EE0, void, set_InsideFrustum, (WaterFall * __this, bool value));
IL2CPP_REGISTER_METHOD(0x011A6EF0, Bounds, get_Bounds, (WaterFall * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (WaterFall * __this));
IL2CPP_REGISTER_METHOD(0x011A7130, void, __ctor, (WaterFall * __this));
}
