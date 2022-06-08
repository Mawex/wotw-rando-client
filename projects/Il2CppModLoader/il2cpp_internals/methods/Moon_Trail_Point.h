#include <interception_macros.h>

namespace app::methods::Moon::Trail_Point {
IL2CPP_REGISTER_METHOD(0x001F9EE0, void, __ctor, (Trail_Point__Boxed * __this, Vector3 position, Vector3 tangent, Vector3 normal, Color color, float thickness, float lifetime, float u));
IL2CPP_REGISTER_METHOD(0x0256E880, float, CatmullRom, (float p0, float p1, float p2, float p3, float t));
IL2CPP_REGISTER_METHOD(0x0256E960, Color, CatmullRomColor, (Color p0, Color p1, Color p2, Color p3, float t));
IL2CPP_REGISTER_METHOD(0x0256EEA0, Vector3, CatmullRom3D, (Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3, float t));
IL2CPP_REGISTER_METHOD(0x0256F370, Trail_Point, Interpolate, (Trail_Point a, Trail_Point b, Trail_Point c, Trail_Point d, float t));
IL2CPP_REGISTER_METHOD(0x0256F950, Trail_Point, operator__, (Trail_Point p1, Trail_Point p2));
IL2CPP_REGISTER_METHOD(0x0256FC40, Trail_Point, operator__, (Trail_Point p1, Trail_Point p2));
}
