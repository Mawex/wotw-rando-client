using namespace app;

namespace app::methods::LinearPath {
IL2CPP_REGISTER_METHOD(0x00FA76D0, Vector3, LocalToWorld, (LinearPath * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00FA77E0, Vector2, ClosestPoint2D, (LinearPath * __this, Vector2 worldPos));
IL2CPP_REGISTER_METHOD(0x00FA7C60, void, OnDrawGizmos, (LinearPath * __this));
IL2CPP_REGISTER_METHOD(0x00FA8110, void, __ctor, (LinearPath * __this));
}
