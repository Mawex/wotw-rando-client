using namespace app;

namespace app::methods::Colorful::LookupFilter3D {
IL2CPP_REGISTER_METHOD(0x03049F70, Shader *, get_Shader2DSafe, (LookupFilter3D * __this));
IL2CPP_REGISTER_METHOD(0x0304A070, Shader *, get_Shader3DSafe, (LookupFilter3D * __this));
IL2CPP_REGISTER_METHOD(0x0304A170, Material *, get_Material, (LookupFilter3D * __this));
IL2CPP_REGISTER_METHOD(0x0304A4B0, void, Start, (LookupFilter3D * __this));
IL2CPP_REGISTER_METHOD(0x0304A7B0, void, OnDisable, (LookupFilter3D * __this));
IL2CPP_REGISTER_METHOD(0x0304A950, void, Reset, (LookupFilter3D * __this));
IL2CPP_REGISTER_METHOD(0x0304A9E0, void, SetIdentityLut, (LookupFilter3D * __this));
IL2CPP_REGISTER_METHOD(0x0304AD30, bool, ValidDimensions, (LookupFilter3D * __this, Texture2D * tex2D));
IL2CPP_REGISTER_METHOD(0x0304AE60, void, ConvertBaseTexture, (LookupFilter3D * __this));
IL2CPP_REGISTER_METHOD(0x0304B350, void, Apply, (LookupFilter3D * __this, Texture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0304B550, void, OnRenderImage, (LookupFilter3D * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0304B690, void, RenderLut2D, (LookupFilter3D * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0304BAC0, void, RenderLut3D, (LookupFilter3D * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0136E200, void, __ctor, (LookupFilter3D * __this));
}
