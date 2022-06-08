#include <interception_macros.h>

namespace app::methods::Water3 {
IL2CPP_REGISTER_METHOD(0x02D70900, void, Start, (Water3 * __this));
IL2CPP_REGISTER_METHOD(0x02D70A10, Mesh *, GetMesh, (Water3 * __this));
IL2CPP_REGISTER_METHOD(0x02D70B40, bool, IsUnderwater, (Water3 * __this, Camera * cam));
IL2CPP_REGISTER_METHOD(0x02D70D10, void, OnWillRenderObject, (Water3 * __this));
IL2CPP_REGISTER_METHOD(0x02D71E30, void, OnDisable, (Water3 * __this));
IL2CPP_REGISTER_METHOD(0x02D72240, Vector3, GetNormalAt, (Water3 * __this, Vector3 pos, float scale));
IL2CPP_REGISTER_METHOD(0x02D72500, Vector3, GetHeightOffsetAt, (Water3 * __this, Vector3 pos));
IL2CPP_REGISTER_METHOD(0x02D72F60, void, Update, (Water3 * __this));
IL2CPP_REGISTER_METHOD(0x02D73A00, void, UpdateCameraModes, (Water3 * __this, Camera * src, Camera * dest));
IL2CPP_REGISTER_METHOD(0x02D74050, void, CreateWaterObjects, (Water3 * __this, Camera * currentCamera, Camera * * reflectionCamera));
IL2CPP_REGISTER_METHOD(0x02D749A0, Water3_WaterMode__Enum, GetWaterMode, (Water3 * __this));
IL2CPP_REGISTER_METHOD(0x02D749B0, Water3_WaterMode__Enum, FindHardwareWaterSupport, (Water3 * __this));
IL2CPP_REGISTER_METHOD(0x00DBCEE0, float, sgn, (float a));
IL2CPP_REGISTER_METHOD(0x02D74B20, Vector4, CameraSpacePlane, (Water3 * __this, Camera * cam, Vector3 pos, Vector3 normal, float sideSign));
IL2CPP_REGISTER_METHOD(0x02D74FD0, void, CalculateObliqueMatrix, (Matrix4x4 * projection, Vector4 clipPlane));
IL2CPP_REGISTER_METHOD(0x02D6FFF0, void, CalculateReflectionMatrix, (Matrix4x4 * reflectionMat, Vector4 plane));
IL2CPP_REGISTER_METHOD(0x02D75590, void, __ctor, (Water3 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
