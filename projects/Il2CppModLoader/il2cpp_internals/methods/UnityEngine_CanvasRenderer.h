#include <interception_macros.h>

namespace app::methods::UnityEngine::CanvasRenderer {
IL2CPP_REGISTER_METHOD(0x031A5FE0, void, set_hasPopInstruction, (CanvasRenderer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x031A6040, int32_t, get_materialCount, (CanvasRenderer * __this));
IL2CPP_REGISTER_METHOD(0x031A6090, void, set_materialCount, (CanvasRenderer * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x031A60F0, void, set_popMaterialCount, (CanvasRenderer * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x031A6150, int32_t, get_absoluteDepth, (CanvasRenderer * __this));
IL2CPP_REGISTER_METHOD(0x031A61A0, bool, get_hasMoved, (CanvasRenderer * __this));
IL2CPP_REGISTER_METHOD(0x031A61F0, bool, get_cull, (CanvasRenderer * __this));
IL2CPP_REGISTER_METHOD(0x031A6240, void, set_cull, (CanvasRenderer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x031A62A0, void, SetColor, (CanvasRenderer * __this, Color color));
IL2CPP_REGISTER_METHODINFO(0x047584F8, CanvasRenderer_SetColor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031A6300, Color, GetColor, (CanvasRenderer * __this));
IL2CPP_REGISTER_METHOD(0x031A6380, void, EnableRectClipping, (CanvasRenderer * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x031A63E0, void, DisableRectClipping, (CanvasRenderer * __this));
IL2CPP_REGISTER_METHOD(0x031A6430, void, SetMaterial, (CanvasRenderer * __this, Material * material, int32_t index));
IL2CPP_REGISTER_METHOD(0x031A64A0, void, SetPopMaterial, (CanvasRenderer * __this, Material * material, int32_t index));
IL2CPP_REGISTER_METHOD(0x031A6510, void, SetTexture, (CanvasRenderer * __this, Texture * texture));
IL2CPP_REGISTER_METHOD(0x031A6570, void, SetAlphaTexture, (CanvasRenderer * __this, Texture * texture));
IL2CPP_REGISTER_METHOD(0x031A65D0, void, SetMesh, (CanvasRenderer * __this, Mesh * mesh));
IL2CPP_REGISTER_METHOD(0x031A6630, void, Clear, (CanvasRenderer * __this));
IL2CPP_REGISTER_METHOD(0x031A6680, void, SetMaterial, (CanvasRenderer * __this, Material * material, Texture * texture));
IL2CPP_REGISTER_METHOD(0x031A6860, void, SplitUIVertexStreams, (List_1_UnityEngine_UIVertex_ * verts, List_1_UnityEngine_Vector3_ * positions, List_1_UnityEngine_Color32_ * colors, List_1_UnityEngine_Vector2_ * uv0S, List_1_UnityEngine_Vector2_ * uv1S, List_1_UnityEngine_Vector2_ * uv2S, List_1_UnityEngine_Vector2_ * uv3S, List_1_UnityEngine_Vector3_ * normals, List_1_UnityEngine_Vector4_ * tangents, List_1_System_Int32_ * indices));
IL2CPP_REGISTER_METHOD(0x031A6980, void, CreateUIVertexStream, (List_1_UnityEngine_UIVertex_ * verts, List_1_UnityEngine_Vector3_ * positions, List_1_UnityEngine_Color32_ * colors, List_1_UnityEngine_Vector2_ * uv0S, List_1_UnityEngine_Vector2_ * uv1S, List_1_UnityEngine_Vector2_ * uv2S, List_1_UnityEngine_Vector2_ * uv3S, List_1_UnityEngine_Vector3_ * normals, List_1_UnityEngine_Vector4_ * tangents, List_1_System_Int32_ * indices));
IL2CPP_REGISTER_METHOD(0x031A6A10, void, AddUIVertexStream, (List_1_UnityEngine_UIVertex_ * verts, List_1_UnityEngine_Vector3_ * positions, List_1_UnityEngine_Color32_ * colors, List_1_UnityEngine_Vector2_ * uv0S, List_1_UnityEngine_Vector2_ * uv1S, List_1_UnityEngine_Vector2_ * uv2S, List_1_UnityEngine_Vector2_ * uv3S, List_1_UnityEngine_Vector3_ * normals, List_1_UnityEngine_Vector4_ * tangents));
IL2CPP_REGISTER_METHOD(0x031A6AA0, void, SplitIndicesStreamsInternal, (Object * verts, Object * indices));
IL2CPP_REGISTER_METHOD(0x031A6A10, void, SplitUIVertexStreamsInternal, (Object * verts, Object * positions, Object * colors, Object * uv0S, Object * uv1S, Object * uv2S, Object * uv3S, Object * normals, Object * tangents));
IL2CPP_REGISTER_METHOD(0x031A6980, void, CreateUIVertexStreamInternal, (Object * verts, Object * positions, Object * colors, Object * uv0S, Object * uv1S, Object * uv2S, Object * uv3S, Object * normals, Object * tangents, Object * indices));
IL2CPP_REGISTER_METHOD(0x031A6B00, void, SetColor_Injected, (CanvasRenderer * __this, Color * color));
IL2CPP_REGISTER_METHOD(0x031A6B60, void, GetColor_Injected, (CanvasRenderer * __this, Color * ret));
IL2CPP_REGISTER_METHOD(0x031A6BC0, void, EnableRectClipping_Injected, (CanvasRenderer * __this, Rect * rect));
}
