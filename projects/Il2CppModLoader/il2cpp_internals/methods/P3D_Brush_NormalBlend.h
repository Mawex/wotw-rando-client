#include <interception_macros.h>

namespace app::methods::P3D_Brush_NormalBlend {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Paint, ());
IL2CPP_REGISTER_METHOD(0x0308EF50, Vector3, ColorToNormalXY, (app::Color c));
IL2CPP_REGISTER_METHOD(0x0308EF90, Color, NormalToColor, (app::Vector3 n));
IL2CPP_REGISTER_METHOD(0x0308F000, Vector3, ComputeZ, (app::Vector3 a));
IL2CPP_REGISTER_METHOD(0x0308F100, Vector3, CombineNormalsXY_1, (app::Vector3 a, app::Vector3 b));
IL2CPP_REGISTER_METHOD(0x0308F150, Vector3, CombineNormalsXY_2, (app::Vector3 a, app::Vector3 b, float c));
IL2CPP_REGISTER_METHOD(0x0308F1A0, Vector3, CombineNormalsXY_3, (app::Vector3 a, app::Vector2 b, float c));
}
