#include <interception_macros.h>

namespace app::methods::TriangleNet_Geometry::ExtensionMethods {
IL2CPP_REGISTER_METHOD(0x0261B9B0, IMesh *, Triangulate_1, (app::IPolygon * polygon));
IL2CPP_REGISTER_METHOD(0x0261BB20, IMesh *, Triangulate_2, (app::IPolygon * polygon, app::ConstraintOptions * options));
IL2CPP_REGISTER_METHOD(0x0261BC90, IMesh *, Triangulate_3, (app::IPolygon * polygon, app::QualityOptions * quality));
IL2CPP_REGISTER_METHOD(0x0261BE00, IMesh *, Triangulate_4, (app::IPolygon * polygon, app::ConstraintOptions * options, app::QualityOptions * quality));
IL2CPP_REGISTER_METHOD(0x0261BF80, IMesh *, Triangulate_5, (app::IPolygon * polygon, app::ConstraintOptions * options, app::QualityOptions * quality, app::ITriangulator * triangulator));
IL2CPP_REGISTER_METHOD(0x0261C220, bool, Contains_1, (app::ITriangle * triangle, app::Point * p));
IL2CPP_REGISTER_METHOD(0x0261C250, bool, Contains_2, (app::ITriangle * triangle, double x, double y));
IL2CPP_REGISTER_METHOD(0x0261C8B0, Rectangle *, Bounds, (app::ITriangle * triangle));
IL2CPP_REGISTER_METHOD(0x0261CAB0, double, DotProduct, (app::Point * p, app::Point * q));
}
