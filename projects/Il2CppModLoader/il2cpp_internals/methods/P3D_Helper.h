#include <interception_macros.h>

namespace app::methods::P3D_Helper {
IL2CPP_REGISTER_METHOD(0x03091AD0, TextureFormat__Enum, GetTextureFormat, (P3D_Format__Enum format));
IL2CPP_REGISTER_METHOD(0x03091B00, bool, IndexInMask, (int32_t index, LayerMask mask));
IL2CPP_REGISTER_METHOD(0x03091B20, Texture2D *, CreateTexture, (int32_t width, int32_t height, TextureFormat__Enum format, bool mipMaps));
IL2CPP_REGISTER_METHOD(0x03091CB0, void, ClearTexture, (Texture2D * texture2D, Color color, bool apply));
IL2CPP_REGISTER_METHOD(0x03091E00, Material *, get_ClearMaterial, ());
IL2CPP_REGISTER_METHOD(0x03092030, Mesh *, GetMesh, (GameObject * gameObject, Mesh * * bakedMesh));
IL2CPP_REGISTER_METHOD(0x03092410, void, DestroyMesh, (Mesh * * mesh));
IL2CPP_REGISTER_METHOD(0x030924E0, Material *, GetMaterial, (GameObject * gameObject, int32_t materialIndex));
IL2CPP_REGISTER_METHOD(0x03092630, Material *, CloneMaterial, (GameObject * gameObject, int32_t materialIndex));
IL2CPP_REGISTER_METHOD(0x030928F0, Material *, AddMaterial, (Renderer * renderer, Shader * shader, int32_t materialIndex));
IL2CPP_REGISTER_METHOD(0x03092C00, Rect, SplitHorizontal, (Rect * rect, int32_t separation));
IL2CPP_REGISTER_METHOD(0x03092C80, Rect, SplitVertical, (Rect * rect, int32_t separation));
IL2CPP_REGISTER_METHOD(0x03092D10, bool, Zero, (float v));
IL2CPP_REGISTER_METHOD(0x03092D20, float, Divide, (float a, float b));
IL2CPP_REGISTER_METHOD(0x03092D40, float, Reciprocal, (float a));
IL2CPP_REGISTER_METHOD(0x03092D60, float, GetUniformScale, (Transform * transform));
IL2CPP_REGISTER_METHOD(0x03092DF0, Vector2, GetUV, (RaycastHit hit, P3D_CoordType__Enum coord));
IL2CPP_REGISTER_METHOD(0x03092E30, float, DampenFactor, (float dampening, float elapsed));
IL2CPP_REGISTER_METHOD(0x03092F00, Vector2, CalculatePixelFromCoord, (Vector2 uv, Vector2 tiling, Vector2 offset, int32_t width, int32_t height));
IL2CPP_REGISTER_METHOD(0x03093070, P3D_Matrix, CreateMatrix, (Vector2 position, Vector2 size, float angle));
IL2CPP_REGISTER_METHOD(0x03093370, float, Dampen, (float current, float target, float dampening, float elapsed, float minStep));
IL2CPP_REGISTER_METHOD(0x03093490, Vector3, Dampen3, (Vector3 current, Vector3 target, float dampening, float elapsed, float minStep));
IL2CPP_REGISTER_METHOD(0x03093630, bool, IntersectBarycentric, (Vector3 start, Vector3 end, P3D_Triangle * triangle, Vector3 * weights, float * distance01));
IL2CPP_REGISTER_METHOD(0x03093C00, float, ClosestBarycentric, (Vector3 point, P3D_Triangle * triangle, Vector3 * weights));
IL2CPP_REGISTER_METHOD(0x03094420, bool, ClosestBarycentric, (Vector3 point, P3D_Triangle * triangle, Vector3 * weights, float * distanceSqr));
IL2CPP_REGISTER_METHOD(0x03094AB0, float, ClosestBarycentric, (Vector2 point, Vector2 start, Vector2 end));
IL2CPP_REGISTER_METHOD(0x03094C60, bool, PointLeftOfLine, (Vector2 a, Vector2 b, Vector2 p));
IL2CPP_REGISTER_METHOD(0x03094CC0, bool, PointRightOfLine, (Vector2 a, Vector2 b, Vector2 p));
IL2CPP_REGISTER_METHOD(0x03094D20, bool, IsWritableFormat, (TextureFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x016A9980, Object *, Destroy, (Object * o));
IL2CPP_REGISTER_METHOD(0x016A9830, Object *, Clone, (Object * o, bool keepName));
IL2CPP_REGISTER_METHOD(0x016A9980, GameObject *, Destroy, (GameObject * o));
IL2CPP_REGISTER_METHODINFO(0x0477C670, P3D_Helper_Destroy_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016A9980, Material *, Destroy, (Material * o));
IL2CPP_REGISTER_METHODINFO(0x0473E670, P3D_Helper_Destroy_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016A9980, Mesh *, Destroy, (Mesh * o));
IL2CPP_REGISTER_METHODINFO(0x0473CB20, P3D_Helper_Destroy_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016A9830, Material *, Clone, (Material * o, bool keepName));
IL2CPP_REGISTER_METHODINFO(0x0475BD70, P3D_Helper_Clone_1__MethodInfo);
}
