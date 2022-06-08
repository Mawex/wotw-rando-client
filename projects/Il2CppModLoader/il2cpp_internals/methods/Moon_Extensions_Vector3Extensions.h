using namespace app;

namespace app::methods::Moon::Extensions::Vector3Extensions {
IL2CPP_REGISTER_METHOD(0x02F8EBE0, MoonVector3 *, AsMoonVector3, (Vector3 vector));
IL2CPP_REGISTER_METHOD(0x02F8ED50, float, DistanceSquared, (Vector3 v1, Vector3 * v2));
IL2CPP_REGISTER_METHOD(0x02F8EE50, float, Distance2DSquared, (Vector3 v1, Vector3 * v2));
IL2CPP_REGISTER_METHOD(0x02F8EE90, float, Distance2D, (Vector3 v1, Vector3 * v2));
}
