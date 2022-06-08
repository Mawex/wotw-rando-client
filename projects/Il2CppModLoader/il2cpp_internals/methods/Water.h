using namespace app;

namespace app::methods::Water {
IL2CPP_REGISTER_METHOD(0x02D6BE90, void, OnWillRenderObject, (Water * __this));
IL2CPP_REGISTER_METHOD(0x02D6CD10, void, OnDisable, (Water * __this));
IL2CPP_REGISTER_METHOD(0x02D6D200, void, Update, (Water * __this));
IL2CPP_REGISTER_METHOD(0x02D6DB00, void, UpdateCameraModes, (Water * __this, Camera * src, Camera * dest));
IL2CPP_REGISTER_METHOD(0x02D6E0C0, void, CreateWaterObjects, (Water * __this, Camera * currentCamera, Camera * * reflectionCamera, Camera * * refractionCamera));
IL2CPP_REGISTER_METHOD(0x02D6F2D0, Water_WaterMode__Enum, GetWaterMode, (Water * __this));
IL2CPP_REGISTER_METHOD(0x02D6F2E0, Water_WaterMode__Enum, FindHardwareWaterSupport, (Water * __this));
IL2CPP_REGISTER_METHOD(0x00DBCEE0, float, sgn, (float a));
IL2CPP_REGISTER_METHOD(0x02D6F580, Vector4, CameraSpacePlane, (Water * __this, Camera * cam, Vector3 pos, Vector3 normal, float sideSign));
IL2CPP_REGISTER_METHOD(0x02D6FA30, void, CalculateObliqueMatrix, (Matrix4x4 * projection, Vector4 clipPlane));
IL2CPP_REGISTER_METHOD(0x02D6FFF0, void, CalculateReflectionMatrix, (Matrix4x4 * reflectionMat, Vector4 plane));
IL2CPP_REGISTER_METHOD(0x02D706A0, void, __ctor, (Water * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
