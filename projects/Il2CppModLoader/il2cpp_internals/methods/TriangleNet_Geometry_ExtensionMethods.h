using namespace app;

namespace app::methods::TriangleNet::Geometry::ExtensionMethods {
IL2CPP_REGISTER_METHOD(0x0261B9B0, IMesh *, Triangulate, (IPolygon * polygon));
IL2CPP_REGISTER_METHOD(0x0261BB20, IMesh *, Triangulate, (IPolygon * polygon, ConstraintOptions * options));
IL2CPP_REGISTER_METHOD(0x0261BC90, IMesh *, Triangulate, (IPolygon * polygon, QualityOptions * quality));
IL2CPP_REGISTER_METHOD(0x0261BE00, IMesh *, Triangulate, (IPolygon * polygon, ConstraintOptions * options, QualityOptions * quality));
IL2CPP_REGISTER_METHOD(0x0261BF80, IMesh *, Triangulate, (IPolygon * polygon, ConstraintOptions * options, QualityOptions * quality, ITriangulator * triangulator));
IL2CPP_REGISTER_METHOD(0x0261C220, bool, Contains, (ITriangle * triangle, Point * p));
IL2CPP_REGISTER_METHOD(0x0261C250, bool, Contains, (ITriangle * triangle, double x, double y));
IL2CPP_REGISTER_METHOD(0x0261C8B0, Rectangle *, Bounds, (ITriangle * triangle));
IL2CPP_REGISTER_METHOD(0x0261CAB0, double, DotProduct, (Point * p, Point * q));
}
