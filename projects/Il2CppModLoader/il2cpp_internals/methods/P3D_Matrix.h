#include <interception_macros.h>

namespace app::methods::P3D_Matrix {
    IL2CPP_REGISTER_METHOD(0x03094D50, P3D_Matrix, get_Identity, ());
    IL2CPP_REGISTER_METHOD(0x03094D90, P3D_Matrix, Translation, (float x, float y));
    IL2CPP_REGISTER_METHOD(0x03094DF0, P3D_Matrix, Scaling, (float x, float y));
    IL2CPP_REGISTER_METHOD(0x03094E40, P3D_Matrix, Rotation, (float a));
    IL2CPP_REGISTER_METHOD(0x00243D00, P3D_Matrix, get_Inverse, (app::P3D_Matrix__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00243D40, Matrix4x4, get_Matrix4x4, (app::P3D_Matrix__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00243D80, Matrix4x4, get_ShaderMatrix4x4, (app::P3D_Matrix__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00243DC0, Vector2, MultiplyPoint_1, (app::P3D_Matrix__Boxed * this_ptr, app::Vector2 v));
    IL2CPP_REGISTER_METHOD(0x00243E10, Vector2, MultiplyPoint_2, (app::P3D_Matrix__Boxed * this_ptr, float x, float y));
    IL2CPP_REGISTER_METHOD(0x03095610, P3D_Matrix, operator__, (app::P3D_Matrix lhs, app::P3D_Matrix rhs));
} // namespace app::methods::P3D_Matrix
