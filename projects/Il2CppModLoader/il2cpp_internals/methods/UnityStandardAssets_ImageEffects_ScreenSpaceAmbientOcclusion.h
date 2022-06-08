#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::ScreenSpaceAmbientOcclusion {
IL2CPP_REGISTER_METHOD(0x02D61AB0, Material *, CreateMaterial, (Shader * shader));
IL2CPP_REGISTER_METHOD(0x02D61C90, void, DestroyMaterial, (Material * mat));
IL2CPP_REGISTER_METHOD(0x02D61D60, void, OnDisable, (ScreenSpaceAmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x02D61E30, void, Start, (ScreenSpaceAmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x02D61FD0, void, OnEnable, (ScreenSpaceAmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x02D62100, void, CreateMaterials, (ScreenSpaceAmbientOcclusion * __this));
IL2CPP_REGISTER_METHOD(0x02D62270, void, OnRenderImage, (ScreenSpaceAmbientOcclusion * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x02D62D60, void, __ctor, (ScreenSpaceAmbientOcclusion * __this));
}
