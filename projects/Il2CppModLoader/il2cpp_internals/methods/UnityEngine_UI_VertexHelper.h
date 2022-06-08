using namespace app;

namespace app::methods::UnityEngine::UI::VertexHelper {
IL2CPP_REGISTER_METHOD(0x009A3B50, void, __ctor, (VertexHelper * __this));
IL2CPP_REGISTER_METHOD(0x031A82E0, void, __ctor, (VertexHelper * __this, Mesh * m));
IL2CPP_REGISTER_METHOD(0x031A8870, void, InitializeListIfRequired, (VertexHelper * __this));
IL2CPP_REGISTER_METHOD(0x031A9550, void, Dispose, (VertexHelper * __this));
IL2CPP_REGISTER_METHOD(0x031AA280, void, Clear, (VertexHelper * __this));
IL2CPP_REGISTER_METHOD(0x031AA4C0, int32_t, get_currentVertCount, (VertexHelper * __this));
IL2CPP_REGISTER_METHOD(0x031AA550, int32_t, get_currentIndexCount, (VertexHelper * __this));
IL2CPP_REGISTER_METHOD(0x031AA5E0, void, PopulateUIVertex, (VertexHelper * __this, UIVertex * vertex, int32_t i));
IL2CPP_REGISTER_METHOD(0x031AA850, void, SetUIVertex, (VertexHelper * __this, UIVertex vertex, int32_t i));
IL2CPP_REGISTER_METHOD(0x031AAB50, void, FillMesh, (VertexHelper * __this, Mesh * mesh));
IL2CPP_REGISTER_METHODINFO(0x04797F08, VertexHelper_FillMesh__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031AAE10, void, AddVert, (VertexHelper * __this, Vector3 position, Color32 color, Vector2 uv0, Vector2 uv1, Vector2 uv2, Vector2 uv3, Vector3 normal, Vector4 tangent));
IL2CPP_REGISTER_METHOD(0x031AB2E0, void, AddVert, (VertexHelper * __this, Vector3 position, Color32 color, Vector2 uv0, Vector2 uv1, Vector3 normal, Vector4 tangent));
IL2CPP_REGISTER_METHOD(0x031AB450, void, AddVert, (VertexHelper * __this, Vector3 position, Color32 color, Vector2 uv0));
IL2CPP_REGISTER_METHOD(0x031AB5C0, void, AddVert, (VertexHelper * __this, UIVertex v));
IL2CPP_REGISTER_METHOD(0x031AB650, void, AddTriangle, (VertexHelper * __this, int32_t idx0, int32_t idx1, int32_t idx2));
IL2CPP_REGISTER_METHOD(0x031AB8A0, void, AddUIVertexQuad, (VertexHelper * __this, UIVertex__Array * verts));
IL2CPP_REGISTER_METHOD(0x031ABAF0, void, AddUIVertexStream, (VertexHelper * __this, List_1_UnityEngine_UIVertex_ * verts, List_1_System_Int32_ * indices));
IL2CPP_REGISTER_METHOD(0x031ABC90, void, AddUIVertexTriangleStream, (VertexHelper * __this, List_1_UnityEngine_UIVertex_ * verts));
IL2CPP_REGISTER_METHOD(0x031ABDE0, void, GetUIVertexStream, (VertexHelper * __this, List_1_UnityEngine_UIVertex_ * stream));
IL2CPP_REGISTER_METHOD(0x031ABEF0, void, __cctor, (MethodInfo * method));
}
