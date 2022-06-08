#include <interception_macros.h>

namespace app::methods::UnityEngine::GeometryUtility {
IL2CPP_REGISTER_METHOD(0x02528E00, Plane__Array *, CalculateFrustumPlanes, (Camera * camera));
IL2CPP_REGISTER_METHOD(0x02528EA0, void, CalculateFrustumPlanes, (Camera * camera, Plane__Array * planes));
IL2CPP_REGISTER_METHOD(0x02529180, void, CalculateFrustumPlanes, (Matrix4x4 worldToProjectionMatrix, Plane__Array * planes));
IL2CPP_REGISTER_METHODINFO(0x0477B5B8, GeometryUtility_CalculateFrustumPlanes_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025292F0, bool, TestPlanesAABB, (Plane__Array * planes, Bounds bounds));
IL2CPP_REGISTER_METHOD(0x02529350, void, TestPlanesAABBBatched, (Plane__Array * planes, NativeArray_1_UnityEngine_Bounds_ bounds, int32_t boundsCount, NativeArray_1_System_Byte_ insideReults));
IL2CPP_REGISTER_METHOD(0x02529450, void, Internal_TestPlanesAABBBatched, (Plane__Array * planes, Void * bounds, int32_t boundsCount, Void * insideReults));
IL2CPP_REGISTER_METHOD(0x025294D0, void, Internal_ExtractPlanes, (Plane__Array * planes, Matrix4x4 worldToProjectionMatrix));
IL2CPP_REGISTER_METHOD(0x02529530, bool, TestPlanesAABB_Injected, (Plane__Array * planes, Bounds * bounds));
IL2CPP_REGISTER_METHOD(0x02529590, void, Internal_ExtractPlanes_Injected, (Plane__Array * planes, Matrix4x4 * worldToProjectionMatrix));
}
