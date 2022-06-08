#include <interception_macros.h>

namespace app::methods::P3D_Tree {
IL2CPP_REGISTER_METHOD(0x03099100, P3D_Tree *, get_TempInstance, ());
IL2CPP_REGISTER_METHOD(0x030992F0, bool, get_IsReady, (P3D_Tree * __this));
IL2CPP_REGISTER_METHOD(0x03099380, void, Clear, (P3D_Tree * __this));
IL2CPP_REGISTER_METHOD(0x03099590, void, ClearResults, (P3D_Tree * __this));
IL2CPP_REGISTER_METHOD(0x03099780, void, SetMesh, (P3D_Tree * __this, Mesh * newMesh, int32_t newSubMeshIndex, bool forceUpdate));
IL2CPP_REGISTER_METHOD(0x030999F0, void, SetMesh, (P3D_Tree * __this, GameObject * gameObject, int32_t subMeshIndex, bool forceUpdate));
IL2CPP_REGISTER_METHODINFO(0x0478FCB0, P3D_Tree_SetMesh_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03099B30, P3D_Result *, FindNearest, (P3D_Tree * __this, Vector3 point, float maxDistance));
IL2CPP_REGISTER_METHOD(0x03099DC0, P3D_Result *, FindBetweenNearest, (P3D_Tree * __this, Vector3 startPoint, Vector3 endPoint));
IL2CPP_REGISTER_METHOD(0x0309A050, List_1_P3D_Result_ *, FindBetweenAll, (P3D_Tree * __this, Vector3 startPoint, Vector3 endPoint));
IL2CPP_REGISTER_METHOD(0x0309A2C0, P3D_Result *, FindPerpendicularNearest, (P3D_Tree * __this, Vector3 point, float maxDistance));
IL2CPP_REGISTER_METHOD(0x0309A560, List_1_P3D_Result_ *, FindPerpendicularAll, (P3D_Tree * __this, Vector3 point, float maxDistance));
IL2CPP_REGISTER_METHOD(0x0309A810, void, BeginSearchDistance, (P3D_Tree * __this, Vector3 point, float maxDistanceSqr));
IL2CPP_REGISTER_METHOD(0x0309A8F0, void, SearchDistance, (P3D_Tree * __this, P3D_Node * node, Vector3 point, float maxDistanceSqr));
IL2CPP_REGISTER_METHOD(0x0309AAD0, void, BeginSearchBetween, (P3D_Tree * __this, Vector3 startPoint, Vector3 endPoint));
IL2CPP_REGISTER_METHOD(0x0309ACF0, void, SearchBetween, (P3D_Tree * __this, P3D_Node * node, Ray ray, float maxDistance));
IL2CPP_REGISTER_METHOD(0x0309AF10, void, AddToPotentials, (P3D_Tree * __this, P3D_Node * node));
IL2CPP_REGISTER_METHOD(0x0309B040, void, AddToResults, (P3D_Tree * __this, P3D_Triangle * triangle, Vector3 weights, float distance01));
IL2CPP_REGISTER_METHOD(0x0309B170, P3D_Result *, GetResult, (P3D_Tree * __this, P3D_Triangle * triangle, Vector3 weights, float distance01));
IL2CPP_REGISTER_METHOD(0x0309B2A0, void, ExtractTriangles, (P3D_Tree * __this));
IL2CPP_REGISTER_METHOD(0x0309B820, void, ConstructNodes, (P3D_Tree * __this));
IL2CPP_REGISTER_METHOD(0x0309B910, void, Pack, (P3D_Tree * __this, P3D_Node * node, int32_t min, int32_t max));
IL2CPP_REGISTER_METHOD(0x0309BAD0, void, SortTriangles, (P3D_Tree * __this, int32_t minIndex, int32_t maxIndex));
IL2CPP_REGISTER_METHOD(0x0309C410, void, SortTriangle, (P3D_Tree * __this, P3D_Triangle * triangle, int32_t * minIndex, int32_t * maxIndex, bool abovePivot));
IL2CPP_REGISTER_METHOD(0x0309C560, void, __ctor, (P3D_Tree * __this));
IL2CPP_REGISTER_METHOD(0x0309C780, void, __cctor, ());
}
