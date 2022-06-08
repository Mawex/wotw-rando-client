#include <interception_macros.h>

namespace app::methods::UberShaderAPI {
IL2CPP_REGISTER_METHOD(0x01905780, bool, TryGetEditableMaterial, (Renderer * renderer, Material * * material));
IL2CPP_REGISTER_METHOD(0x019058E0, bool, TryGetSharedMaterial, (Renderer * renderer, Material * * material));
IL2CPP_REGISTER_METHOD(0x01905A40, Material *, GetEditableMaterial, (Renderer * renderer));
IL2CPP_REGISTER_METHOD(0x01905AA0, Material *, GetSharedMaterial, (Renderer * renderer));
IL2CPP_REGISTER_METHOD(0x01905B00, bool, HasProperty, (Renderer * renderer, UberShaderProperty_Texture__Enum property, UberShaderProperties_TextureSuffixType__Enum suffix));
IL2CPP_REGISTER_METHOD(0x01905C50, bool, HasProperty, (Renderer * renderer, UberShaderProperty_Color__Enum property));
IL2CPP_REGISTER_METHOD(0x01905DA0, bool, HasProperty, (Renderer * renderer, UberShaderProperty_Vector__Enum property));
IL2CPP_REGISTER_METHOD(0x01905EF0, bool, HasProperty, (Renderer * renderer, UberShaderProperty_Float__Enum property));
IL2CPP_REGISTER_METHOD(0x01906040, Texture *, GetTexture, (Renderer * renderer, UberShaderProperty_Texture__Enum property));
IL2CPP_REGISTER_METHOD(0x019061D0, Vector2, GetTextureScale, (Renderer * renderer, UberShaderProperty_Texture__Enum property));
IL2CPP_REGISTER_METHOD(0x01906310, Vector2, GetTextureOffset, (Renderer * renderer, UberShaderProperty_Texture__Enum property));
IL2CPP_REGISTER_METHOD(0x01906450, Vector4, GetTextureScrollRotData, (Renderer * renderer, UberShaderProperty_Texture__Enum property));
IL2CPP_REGISTER_METHOD(0x01906690, Vector4, GetTextureAtlasUVs, (Renderer * renderer, UberShaderProperty_Texture__Enum property));
IL2CPP_REGISTER_METHOD(0x019068D0, Vector4, GetTextureAtlasScrollRotData, (Renderer * renderer, UberShaderProperty_Texture__Enum property));
IL2CPP_REGISTER_METHOD(0x01906B10, Color, GetColor, (Renderer * renderer, UberShaderProperty_Color__Enum property));
IL2CPP_REGISTER_METHOD(0x01906C80, Color, GetColor, (Renderer * renderer, Material * material, UberShaderProperty_Color__Enum property));
IL2CPP_REGISTER_METHOD(0x01906DA0, Vector4, GetVector, (Renderer * renderer, UberShaderProperty_Vector__Enum property));
IL2CPP_REGISTER_METHOD(0x01906F40, float, GetFloat, (Renderer * renderer, UberShaderProperty_Float__Enum property));
IL2CPP_REGISTER_METHOD(0x01907090, void, SetTexture, (Renderer * renderer, UberShaderProperty_Texture__Enum property, Texture * texture));
IL2CPP_REGISTER_METHOD(0x019071A0, void, SetTextureScale, (Renderer * renderer, UberShaderProperty_Texture__Enum property, Vector2 scale));
IL2CPP_REGISTER_METHOD(0x019072C0, void, SetTextureOffset, (Renderer * renderer, UberShaderProperty_Texture__Enum property, Vector2 offset));
IL2CPP_REGISTER_METHOD(0x019073E0, void, SetTextureScrollRotData, (Renderer * renderer, UberShaderProperty_Texture__Enum property, Vector4 scrollRot));
IL2CPP_REGISTER_METHOD(0x01907630, void, SetTextureAtlasUVs, (Renderer * renderer, UberShaderProperty_Texture__Enum property, Vector4 atlasUVs));
IL2CPP_REGISTER_METHOD(0x01907880, void, SetTextureAtlasScrollRotData, (Renderer * renderer, UberShaderProperty_Texture__Enum property, Vector4 atlasScrollRot));
IL2CPP_REGISTER_METHOD(0x01907AD0, void, SetColor, (Renderer * renderer, UberShaderProperty_Color__Enum property, Color color));
IL2CPP_REGISTER_METHOD(0x01907C20, void, SetColor, (Renderer * renderer, Material * material, UberShaderProperty_Color__Enum property, Color color));
IL2CPP_REGISTER_METHOD(0x01907D30, void, SetAlpha, (Renderer * renderer, Material * material, UberShaderProperty_Color__Enum property, float color));
IL2CPP_REGISTER_METHOD(0x01907E40, void, SetVector, (Renderer * renderer, UberShaderProperty_Vector__Enum property, Vector4 vector4));
IL2CPP_REGISTER_METHOD(0x01907F50, void, SetVector, (Renderer * renderer, UberShaderProperty_Vector__Enum property, Vector4 vector4, Material * material));
IL2CPP_REGISTER_METHOD(0x019080A0, void, SetFloat, (Renderer * renderer, UberShaderProperty_Float__Enum property, float val));
IL2CPP_REGISTER_METHOD(0x019081B0, void, SetFloat, (Renderer * renderer, UberShaderProperty_Float__Enum property, float val, Material * material));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ClearPropertyBlock, (Renderer * renderer));
IL2CPP_REGISTER_METHOD(0x019082C0, void, SetVectorInPropertyBlock, (Renderer * renderer, UberShaderProperty_Vector__Enum property, Vector4 value));
IL2CPP_REGISTER_METHOD(0x019083B0, void, SetFloatInPropertyBlock, (Renderer * renderer, UberShaderProperty_Float__Enum property, float value));
IL2CPP_REGISTER_METHOD(0x019084A0, void, __cctor, ());
}
