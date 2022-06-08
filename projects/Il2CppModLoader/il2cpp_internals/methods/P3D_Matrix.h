using namespace app;

namespace app::methods::P3D_Matrix {
IL2CPP_REGISTER_METHOD(0x03094D50, P3D_Matrix, get_Identity, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03094D90, P3D_Matrix, Translation, (float x, float y));
IL2CPP_REGISTER_METHOD(0x03094DF0, P3D_Matrix, Scaling, (float x, float y));
IL2CPP_REGISTER_METHOD(0x03094E40, P3D_Matrix, Rotation, (float a));
IL2CPP_REGISTER_METHOD(0x00243D00, P3D_Matrix, get_Inverse, (P3D_Matrix__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00243D40, Matrix4x4, get_Matrix4x4, (P3D_Matrix__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00243D80, Matrix4x4, get_ShaderMatrix4x4, (P3D_Matrix__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00243DC0, Vector2, MultiplyPoint, (P3D_Matrix__Boxed * __this, Vector2 v));
IL2CPP_REGISTER_METHOD(0x00243E10, Vector2, MultiplyPoint, (P3D_Matrix__Boxed * __this, float x, float y));
IL2CPP_REGISTER_METHOD(0x03095610, P3D_Matrix, operator__, (P3D_Matrix lhs, P3D_Matrix rhs));
}
