#include <interception_macros.h>

namespace app::methods::CustomWater {
IL2CPP_REGISTER_METHOD(0x00DBB390, void, Start, (CustomWater * __this));
IL2CPP_REGISTER_METHOD(0x00DBB830, void, OnWillRenderObject, (CustomWater * __this));
IL2CPP_REGISTER_METHOD(0x00DBC320, Matrix4x4, CalculateReflectionMatrix, (CustomWater * __this, Vector4 plane));
IL2CPP_REGISTER_METHOD(0x00DBCA30, Vector4, CameraSpacePlane, (CustomWater * __this, Camera * cam, Vector3 pos, Vector3 normal, float sideSign));
IL2CPP_REGISTER_METHOD(0x00DBCEE0, float, sgn, (float a));
IL2CPP_REGISTER_METHOD(0x00DBCF10, void, CalculateObliqueMatrix, (Matrix4x4 * projection, Vector4 clipPlane));
IL2CPP_REGISTER_METHOD(0x00DBD4A0, void, __ctor, (CustomWater * __this));
}
