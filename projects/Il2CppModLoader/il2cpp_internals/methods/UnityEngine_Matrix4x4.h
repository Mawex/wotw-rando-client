#include <interception_macros.h>

namespace app::methods::UnityEngine::Matrix4x4 {
IL2CPP_REGISTER_METHOD(0x001F28F0, void, __ctor, (Matrix4x4__Boxed * __this, Vector4 column0, Vector4 column1, Vector4 column2, Vector4 column3));
IL2CPP_REGISTER_METHOD(0x001F29A0, Quaternion, GetRotation, (Matrix4x4__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F29D0, float, GetDeterminant, (Matrix4x4__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F29A0, Quaternion, get_rotation, (Matrix4x4__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F29E0, float, get_determinant, (Matrix4x4__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02536A60, Matrix4x4, TRS, (Vector3 pos, Quaternion q, Vector3 s));
IL2CPP_REGISTER_METHOD(0x001F29F0, void, SetTRS, (Matrix4x4__Boxed * __this, Vector3 pos, Quaternion q, Vector3 s));
IL2CPP_REGISTER_METHOD(0x02536DE0, Matrix4x4, Inverse, (Matrix4x4 m));
IL2CPP_REGISTER_METHOD(0x001F2A40, Matrix4x4, get_inverse, (Matrix4x4__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02537060, Matrix4x4, Ortho, (float left, float right, float bottom, float top, float zNear, float zFar));
IL2CPP_REGISTER_METHOD(0x02537200, Matrix4x4, Perspective, (float fov, float aspect, float zNear, float zFar));
IL2CPP_REGISTER_METHOD(0x001F2A80, void, set_Item, (Matrix4x4__Boxed * __this, int32_t row, int32_t column, float value));
IL2CPP_REGISTER_METHOD(0x001F2A90, float, get_Item, (Matrix4x4__Boxed * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047999F8, Matrix4x4_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001F2AA0, void, set_Item, (Matrix4x4__Boxed * __this, int32_t index, float value));
IL2CPP_REGISTER_METHODINFO(0x047622F0, Matrix4x4_set_Item_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001F2AB0, int32_t, GetHashCode, (Matrix4x4__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F2AC0, bool, Equals, (Matrix4x4__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x001F2AD0, bool, Equals, (Matrix4x4__Boxed * __this, Matrix4x4 other));
IL2CPP_REGISTER_METHOD(0x02537C80, Matrix4x4, operator__, (Matrix4x4 lhs, Matrix4x4 rhs));
IL2CPP_REGISTER_METHOD(0x02538150, Vector4, operator__, (Matrix4x4 lhs, Vector4 vector));
IL2CPP_REGISTER_METHOD(0x02538270, bool, operator___, (Matrix4x4 lhs, Matrix4x4 rhs));
IL2CPP_REGISTER_METHOD(0x025384B0, bool, operator___, (Matrix4x4 lhs, Matrix4x4 rhs));
IL2CPP_REGISTER_METHOD(0x001F2B10, Vector4, GetColumn, (Matrix4x4__Boxed * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0474C1D0, Matrix4x4_GetColumn__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001F2B40, void, SetColumn, (Matrix4x4__Boxed * __this, int32_t index, Vector4 column));
IL2CPP_REGISTER_METHOD(0x001F2BB0, void, SetRow, (Matrix4x4__Boxed * __this, int32_t index, Vector4 row));
IL2CPP_REGISTER_METHOD(0x001F2C20, Vector3, MultiplyPoint, (Matrix4x4__Boxed * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x001F2D20, Vector3, MultiplyPoint3x4, (Matrix4x4__Boxed * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x001F2DE0, Vector3, MultiplyVector, (Matrix4x4__Boxed * __this, Vector3 vector));
IL2CPP_REGISTER_METHOD(0x02538790, Matrix4x4, Scale, (Vector3 vector));
IL2CPP_REGISTER_METHOD(0x02538840, Matrix4x4, Translate, (Vector3 vector));
IL2CPP_REGISTER_METHOD(0x025388E0, Matrix4x4, get_zero, ());
IL2CPP_REGISTER_METHOD(0x025389B0, Matrix4x4, get_identity, ());
IL2CPP_REGISTER_METHOD(0x001F2E90, String *, ToString, (Matrix4x4__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x025391F0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x02539350, void, GetRotation_Injected, (Matrix4x4 * _unity_self, Quaternion * ret));
IL2CPP_REGISTER_METHOD(0x025393B0, float, GetDeterminant_Injected, (Matrix4x4 * _unity_self));
IL2CPP_REGISTER_METHOD(0x02539400, void, TRS_Injected, (Vector3 * pos, Quaternion * q, Vector3 * s, Matrix4x4 * ret));
IL2CPP_REGISTER_METHOD(0x02539480, void, Inverse_Injected, (Matrix4x4 * m, Matrix4x4 * ret));
IL2CPP_REGISTER_METHOD(0x025394E0, void, Ortho_Injected, (float left, float right, float bottom, float top, float zNear, float zFar, Matrix4x4 * ret));
IL2CPP_REGISTER_METHOD(0x02539580, void, Perspective_Injected, (float fov, float aspect, float zNear, float zFar, Matrix4x4 * ret));
}
