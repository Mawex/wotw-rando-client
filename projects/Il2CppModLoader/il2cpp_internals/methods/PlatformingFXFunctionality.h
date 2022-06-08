using namespace app;

namespace app::methods::PlatformingFXFunctionality {
IL2CPP_REGISTER_METHOD(0x011720B0, void, __ctor, (PlatformingFXFunctionality * __this));
IL2CPP_REGISTER_METHOD(0x01172310, void, Land, (PlatformingFXFunctionality * __this, Vector3 position, Collider * collider, Vector3 relativeVelocity));
IL2CPP_REGISTER_METHOD(0x01172480, void, Land, (PlatformingFXFunctionality * __this, Vector3 position, SurfaceMaterialType__Enum materialType, Vector3 velocity));
IL2CPP_REGISTER_METHOD(0x011725F0, bool, Play, (PlatformingFXFunctionality * __this, GameObject * effect, Event_1 * soundEvent, Vector3 position, TimeDistanceGate * gate));
IL2CPP_REGISTER_METHOD(0x01172A00, void, WallHitLeft, (PlatformingFXFunctionality * __this, Vector3 position, Collider * collider, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x01172B50, void, WallHitRight, (PlatformingFXFunctionality * __this, Vector3 position, Collider * collider, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x01172CA0, void, WallHitLeft, (PlatformingFXFunctionality * __this, Vector3 position, SurfaceMaterialType__Enum materialType, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x01172DF0, void, WallHitRight, (PlatformingFXFunctionality * __this, Vector3 position, SurfaceMaterialType__Enum materialType, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x01172F40, void, FootstepDetail, (PlatformingFXFunctionality * __this, Vector3 position, SurfaceMaterialType__Enum materialType));
IL2CPP_REGISTER_METHOD(0x011731C0, void, LeftEdgeStop, (PlatformingFXFunctionality * __this, Vector3 position, Collider * collider, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x01173310, void, LeftEdgeStop, (PlatformingFXFunctionality * __this, Vector3 position, SurfaceMaterialType__Enum materialType, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x01173460, void, RightEdgeStop, (PlatformingFXFunctionality * __this, Vector3 position, Collider * collider, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x011735B0, void, RightEdgeStop, (PlatformingFXFunctionality * __this, Vector3 position, SurfaceMaterialType__Enum materialType, Vector2 velocity));
}
