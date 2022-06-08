using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetVulkanDeviceExtensionsRequired {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRCompositor_GetVulkanDeviceExtensionsRequired * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02F42630, uint32_t, Invoke, (IVRCompositor_GetVulkanDeviceExtensionsRequired * __this, void * pPhysicalDevice, StringBuilder * pchValue, uint32_t unBufferSize));
IL2CPP_REGISTER_METHOD(0x02F429C0, IAsyncResult *, BeginInvoke, (IVRCompositor_GetVulkanDeviceExtensionsRequired * __this, void * pPhysicalDevice, StringBuilder * pchValue, uint32_t unBufferSize, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (IVRCompositor_GetVulkanDeviceExtensionsRequired * __this, IAsyncResult * result));
}
