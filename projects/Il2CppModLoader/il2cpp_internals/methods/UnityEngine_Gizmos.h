using namespace app;

namespace app::methods::UnityEngine::Gizmos {
IL2CPP_REGISTER_METHOD(0x025295F0, void, DrawLine, (Vector3 from, Vector3 to));
IL2CPP_REGISTER_METHOD(0x02529650, void, DrawWireSphere, (Vector3 center, float radius));
IL2CPP_REGISTER_METHOD(0x025296B0, void, DrawSphere, (Vector3 center, float radius));
IL2CPP_REGISTER_METHOD(0x02529710, void, DrawWireCube, (Vector3 center, Vector3 size));
IL2CPP_REGISTER_METHOD(0x02529770, void, DrawCube, (Vector3 center, Vector3 size));
IL2CPP_REGISTER_METHOD(0x025297D0, void, DrawWireMesh, (Mesh * mesh, int32_t submeshIndex, Vector3 position, Quaternion rotation, Vector3 scale));
IL2CPP_REGISTER_METHOD(0x02529860, void, DrawIcon, (Vector3 center, String * name, bool allowScaling));
IL2CPP_REGISTER_METHOD(0x025298E0, Color, get_color, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02529950, void, set_color, (Color value));
IL2CPP_REGISTER_METHOD(0x025299A0, void, set_matrix, (Matrix4x4 value));
IL2CPP_REGISTER_METHOD(0x025299F0, void, DrawRay, (Vector3 from, Vector3 direction));
IL2CPP_REGISTER_METHOD(0x02529B50, void, DrawWireMesh, (Mesh * mesh, Vector3 position, Quaternion rotation, Vector3 scale));
IL2CPP_REGISTER_METHOD(0x02529BF0, void, DrawLine_Injected, (Vector3 * from, Vector3 * to));
IL2CPP_REGISTER_METHOD(0x02529C50, void, DrawWireSphere_Injected, (Vector3 * center, float radius));
IL2CPP_REGISTER_METHOD(0x02529CB0, void, DrawSphere_Injected, (Vector3 * center, float radius));
IL2CPP_REGISTER_METHOD(0x02529D10, void, DrawWireCube_Injected, (Vector3 * center, Vector3 * size));
IL2CPP_REGISTER_METHOD(0x02529D70, void, DrawCube_Injected, (Vector3 * center, Vector3 * size));
IL2CPP_REGISTER_METHOD(0x02529DD0, void, DrawWireMesh_Injected, (Mesh * mesh, int32_t submeshIndex, Vector3 * position, Quaternion * rotation, Vector3 * scale));
IL2CPP_REGISTER_METHOD(0x02529E50, void, DrawIcon_Injected, (Vector3 * center, String * name, bool allowScaling));
IL2CPP_REGISTER_METHOD(0x02529ED0, void, get_color_Injected, (Color * ret));
IL2CPP_REGISTER_METHOD(0x02529F20, void, set_color_Injected, (Color * value));
IL2CPP_REGISTER_METHOD(0x02529F70, void, set_matrix_Injected, (Matrix4x4 * value));
}
