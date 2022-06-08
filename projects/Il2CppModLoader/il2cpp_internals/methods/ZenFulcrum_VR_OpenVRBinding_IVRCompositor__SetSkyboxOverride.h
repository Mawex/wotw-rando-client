using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SetSkyboxOverride {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRCompositor_SetSkyboxOverride * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F54C90, EVRCompositorError__Enum, Invoke, (IVRCompositor_SetSkyboxOverride * __this, Texture_t__Array * pTextures, uint32_t unTextureCount));
IL2CPP_REGISTER_METHOD(0x02F431F0, IAsyncResult *, BeginInvoke, (IVRCompositor_SetSkyboxOverride * __this, Texture_t__Array * pTextures, uint32_t unTextureCount, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRCompositorError__Enum, EndInvoke, (IVRCompositor_SetSkyboxOverride * __this, IAsyncResult * result));
}
