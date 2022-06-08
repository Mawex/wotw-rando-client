#include <interception_macros.h>

namespace app::methods::Triangulate {
IL2CPP_REGISTER_METHOD(0x00B106E0, float, Area, (List_1_UnityEngine_Vector2_ * * contour));
IL2CPP_REGISTER_METHOD(0x00B10810, bool, InsideTriangle, (float Ax, float Ay, float Bx, float By, float Cx, float Cy, float Px, float Py));
IL2CPP_REGISTER_METHOD(0x00B10930, bool, Snip, (List_1_UnityEngine_Vector2_ * * contour, int32_t u, int32_t v, int32_t w, int32_t n, List_1_System_Int32_ * * V));
IL2CPP_REGISTER_METHOD(0x00B10CD0, bool, Process, (List_1_UnityEngine_Vector2_ * * contour, List_1_System_Int32_ * * result, bool * counterClockwise));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Triangulate * __this));
IL2CPP_REGISTER_METHOD(0x00B113A0, void, __cctor, ());
}
